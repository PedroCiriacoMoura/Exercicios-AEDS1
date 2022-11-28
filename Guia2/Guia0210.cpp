/*
 Guia_0210 - v0.0. - 20 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0210 ./Guia0210.cpp
 No Windows: g++ -o Guia0210.exe Guia0210.cpp
 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0210
 No Windows: Guia0210
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
    void appendActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo para receber acrescimos ao final
        std::fstream archive(fileName, std::ios::app);
        // repetir enquanto acao diferente de zero
        do
        {
            // ler acao
            action = IO_readint("Command? ");
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << std::endl;
            } // end if
        } while (action != 0);
        // fechar o arquivo
        // INDISPENSAVEL para a gravacao
        archive.close();
    } // end appendActions ( )

    void translateActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo de onde ler dados
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> action;     // tentar ler a primeira linha
        while (!archive.eof()) // testar se nao encontrado o fim
        {
            // tentar traduzir um comando
            IO_print(dictionary(action));
            getchar();
            // guardar mais um comando
            execute(action);
            // tentar ler a proxima linha
            archive >> action; // tentar ler a proxima linha
        }                      // end for
                               // fechar o arquivo
                               // RECOMENDAVEL para a leitura
        archive.close();
    } // end translateActions ( )

    chars dictionary(int action)
    {
        // definir dado
        static char word[80];
        strcpy(word, ""); // palavra vazia
        // identificar comando
        switch (action)
        {
        case 1: // virar para a esquerda
            strcpy(word, "turnLeft( ); ");
            break;
        case 2: // virar para o sul
            strcpy(word, "faceSouth( ); ");
            break;
        case 3: // virar para a direita
            strcpy(word, "turnRight( ); ");
            break;
        case 4: // virar para o oeste
            strcpy(word, "faceWest( ); ");
            break;
        case 5: // mover
            strcpy(word, "move( ); ");
            break;
        case 6: // virar para o leste
            strcpy(word, "faceEast( ); ");
            break;
        case 7: // pegar marcador
            strcpy(word, "pickBeeper( );");
            break;
        case 8: // virar para o norte
            strcpy(word, "faceNorth( ); ");
            break;
        case 9: // colocar marcador
            strcpy(word, "putBeeper( ); ");
            break;
        } // end switch
        // retornar palavra equivalente
        return (&(word[0]));
    } // end dictionary( )

    void playActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivos de onde ler dados
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> action;     // tentar ler a primeira linha
        while (!archive.eof()) // testar se nao encontrado o fim
        {
            // mostrar mais um comando
            IO_print(IO_toString(action));
            delay(stepDelay);
            // executar mais um comando
            execute(action);
            // tentar ler a proxima linha
            archive >> action; // tentar ler a próxima linha
        }                      // end for
        // fechar o arquivo
        // RECOMENDAVEL para a leitura
        archive.close();
    } // end playActions ( )

    void recordActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo onde gravar comandos
        std::ofstream archive(fileName);
        // ler acao
        action = IO_readint("Command? ");
        // repetir enquanto acao maior ou igual a zero
        while (action >= 0)
        {
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << "\n";
            } // end if
            // ler acao
            action = IO_readint("Command? ");
        } // end while
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
    decorateWorld("Guia0210.txt");
    world->show();
    world->reset();
    world->read("Guia0210.txt");
    world->show();
    set_Speed(3);
    MyRobot *robot = new MyRobot();
    robot->create(1, 1, NORTH, 0, "Karel");
    robot->moveI();
    // executar e gravar acoes
    robot->recordActions("Tarefa0210.txt");
    robot->playActions("Tarefa0210.txt");
    robot->recordActions("Tarefa0210.txt");
    robot->translateActions("Tarefa0210.txt");
    // executar tarefa
    robot->recordActions("Tarefa0210.txt");

    // dar uma pausa na entrada de comandos
    show_Text("Pause on recording");
    // mostrar configuracao atual do mundo
    world->show();
    // retomar a entrada de comandos
    robot->appendActions("Tarefa0210.txt");
    // reproduzir todos os comandos
    robot->playActions("Tarefa0210.txt");

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
 0.9 20/03 esboco
 1.0 20/03 esboco
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
 0.9    01. ( OK ) identificacao de programa
 1.0   01. ( OK ) identificacao de programa
*/
