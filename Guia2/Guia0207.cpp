/*
 Guia_02067- v0.0. - 20 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0207 ./Guia0207.cpp
 No Windows: g++ -o Guia0207.exe Guia0207.cpp
 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0207
 No Windows: Guia0207
*/
// lista de dependencias
#include "karel.hpp"
#include "io.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
    world->set(4, 4, VWALL);
    world->set(4, 4, HWALL);
    world->set(4, 4, BEEPER);
    world->save(fileName);
}

class MyRobot : public Robot
{
public:
    /**
 recordActions - Metodo para mover o robot interativamente
 e guardar a descricao da tarefa em arquivo.
 @param fileName - nome do arquivo
*/
    void recordActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo onde gravar comandos
        std::ofstream archive(fileName);
        // repetir enquanto o comando
        // for diferente de zero
        do
        {
            // ler opcao
            action = IO_readint("Command? ");
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << "\n";
            } // end if
        } while (action != 0);
        // fechar o arquivo
        // INDISPENSAVEL para a gravacao
        archive.close();
    } // end recordActions ( )

    void execute(int option)
    {
        switch (option)
        {
        case 0:
            break;
        case 1: // virar para a esquerda
            if (leftIsClear())
            {
                turnLeft();
            }
            break;
        case 2: // virar para o sul
            while (!facingSouth())
            {
                turnLeft();
            }
            break;
        case 3: // virar para a direita
            if (rightIsClear())
            {
                turnRight();
            }
            break;
        case 4: // virar para o oeste
            while (!facingWest())
            {
                turnLeft();
            }
            break;
        case 5: // mover
            if (frontIsClear())
            {
                move();
            }
            break;
        case 6: // virar para o leste
            while (!facingEast())
            {
                turnLeft();
            }
            break;
        case 7: // pegar marcador
            if (nextToABeeper())
            {
                pickBeeper();
            }
            break;
        case 8: // virar para o norte
            while (!facingNorth())
            {
                turnLeft();
            }
            break;
        case 9: // colocar marcador
            if (beepersInBag())
            {
                putBeeper();
            }
            break;
        default:
            show_Error("ERROR: Invalid command.");
        }
    }
    /*
     * moveI - Metodo para mover o robot interativamente.
     * Lista de comandos disponiveis:
     * 0 - turnOff
     * 1 - turnLeft 2 - to South
     * 3 - turnRight 4 - to West
     * 5 - move 6 - to East
     * 7 - pickBeeper 8 - to North
     * 9 - putBeeper
     */
    void moveI()
    {
        int action;
        do
        {
            action = IO_readint("Command? ");
            execute(action);
        } while (action != 0);
    }

    int pickBeepers()
    {
        int n = 0;
        while (nextToABeeper())
        {
            pickBeeper();
            n = n + 1;
        }
        return (n);
    }

    void doSquare()
    {
        int step = 1;
        int n = 0;
        char msg[80];
        while (step <= 4)
        {
            moveN(3);
            n = pickBeepers();
            if (n > 0)
            {
                sprintf(msg, "Recolhidos = %d", n);
                show_Text(msg);
            }
            turnRight();
            step = step + 1;
        }
        turnOff();
    }

    void turnRight()
    {
        int step = 0;
        if (checkStatus())
        {
            for (step = 1; step <= 3; step = step + 1)
            {
                turnLeft();
            }
        }
    }

    void moveN(int steps)
    {
        int step = 0;
        for (step = steps; step > 0; step = step - 1)
        {
            move();
        }
    }

    void doPartialTask()
    {
        moveN(3);
        turnLeft();
    }
    void doTask()
    {
        int step = 4;
        while (step > 0)
        {
            doPartialTask();
            step = step - 1;
        }
        turnOff();
    }
};

int main()
{
    world->create("");
    decorateWorld("Guia0207.txt");
    world->show();
    world->reset();
    world->read("Guia0207.txt");
    world->show();
    set_Speed(3);
    MyRobot *robot = new MyRobot();
    robot->create(1, 1, NORTH, 0, "Karel");
    robot->moveI();
    // executar e gravar acoes
    robot->recordActions("Tarefa0207.txt");

    world->close();
    getchar();
    return (0);
}
// -------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 20/03 esboco
 0.2 20/03 esboco
 0.3 20/03 esboco
 0.4 20/03 esboco
 0.5 20/03 esboco
 0.6 20/03 esboco
 0.7 20/03 esboco
 0.8 20/03 esboco
--------------------------------------------- testes
Versao Teste
 0.1    01. ( OK ) identificacao de programa
 0.2    01. ( OK ) identificacao de programa
 0.3    01. ( OK ) identificacao de programa
 0.4    01. ( OK ) identificacao de programa
 0.5    01. ( OK ) identificacao de programa
 0.6    01. ( OK ) identificacao de programa
 0.7    01. ( OK ) identificacao de programa
 0.8    01. ( OK ) identificacao de programa
*/
