/*
 Guia_0211 - v0.0. - 20 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0211 ./Guia0211.cpp
 No Windows: g++ -o Guia0211.exe Guia0211.cpp
 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0211
 No Windows: Guia0211
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

    world->set(3, 1, HWALL);
    world->set(4, 2, HWALL);
    world->set(5, 3, HWALL);
    world->set(6, 3, HWALL);
    world->set(7, 2, HWALL);
    world->set(8, 1, HWALL);

    world->set(2, 1, VWALL);
    world->set(3, 2, VWALL);
    world->set(4, 3, VWALL);
    world->set(6, 3, VWALL);
    world->set(7, 2, VWALL);
    world->set(8, 1, VWALL);

    world->set(9, 1, BEEPER);
    world->set(9, 1, BEEPER);
    world->set(9, 1, BEEPER);
    world->set(8, 2, BEEPER);
    world->set(8, 2, BEEPER);
    world->set(7, 3, BEEPER);

    world->save(fileName);
}

class MyRobot : public Robot
{
public:
    void putBeepers(int n1)
    {
        int bolinha = 0;
        while (n1 > bolinha)
        {
            putBeeper();
            n1 = n1 - 1;
        }
    }

    void oppositeSide()
    {
        turnLeft();
        turnLeft();
    }

    void stepUpRight()
    {
        turnLeft();
        move();
        turnRight();
        move();
    }

    void stepDownRight()
    {
        move();
        turnRight();
        move();
        turnLeft();
    }

    void stepUpLeft()
    {
        turnRight();
        move();
        turnLeft();
        move();
    }

    void stepDownLeft()
    {
        move();
        turnLeft();
        move();
        turnRight();
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
    /*void doTask()
    {
        int step = 4;
        while (step > 0)
        {
            doPartialTask();
            step = step - 1;
        }
        turnOff();
    }*/
    void tarefa()
    {
        move();
        stepUpRight();
        stepUpRight();
        stepUpRight();
        move();
        stepDownRight();
        stepDownRight();
        stepDownRight();
        pickBeepers();
        oppositeSide();
        stepUpLeft();
        pickBeepers();
        stepUpLeft();
        pickBeepers();
        stepUpLeft();
        move();
        stepDownLeft();
        putBeepers(1);
        stepDownLeft();
        putBeepers(2);
        stepDownLeft();
        putBeepers(3);
        move();
        oppositeSide();
    }
};

int main()
{
    world->create("");
    decorateWorld("Guia0211.txt");
    world->show();
    world->reset();
    world->read("Guia0211.txt");
    world->show();
    set_Speed(3);
    MyRobot *robot = new MyRobot();
    robot->create(1, 1, EAST, 0, "Karel");
    robot->tarefa();
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
 1.1 25/03 esboco
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
 1.1    01. ( OK ) identificacao de programa
*/
