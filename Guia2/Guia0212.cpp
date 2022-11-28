/*
 Guia_0212 - v0.0. - 20 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0212 ./Guia0212.cpp
 No Windows: g++ -o Guia0212.exe Guia0212.cpp
 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0212
 No Windows: Guia0212
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

    world->set(2, 2, VWALL);
    world->set(2, 3, VWALL);
    world->set(2, 4, VWALL);
    world->set(2, 6, VWALL);
    world->set(2, 7, VWALL);
    world->set(2, 8, VWALL);

    world->set(4, 2, VWALL);
    world->set(4, 3, VWALL);
    world->set(4, 7, VWALL);
    world->set(4, 8, VWALL);
    world->set(5, 2, VWALL);
    world->set(5, 3, VWALL);
    world->set(5, 7, VWALL);
    world->set(5, 8, VWALL);

    world->set(7, 2, VWALL);
    world->set(7, 3, VWALL);
    world->set(7, 4, VWALL);
    world->set(7, 6, VWALL);
    world->set(7, 7, VWALL);
    world->set(7, 8, VWALL);

    world->set(4, 5, VWALL);
    world->set(5, 5, VWALL);

    world->set(3, 1, HWALL);
    world->set(4, 1, HWALL);
    world->set(6, 1, HWALL);
    world->set(7, 1, HWALL);
    world->set(5, 3, HWALL);
    world->set(3, 4, HWALL);
    world->set(4, 4, HWALL);
    world->set(6, 4, HWALL);
    world->set(7, 4, HWALL);
    world->set(3, 5, HWALL);
    world->set(4, 5, HWALL);
    world->set(6, 5, HWALL);
    world->set(7, 5, HWALL);
    world->set(3, 8, HWALL);
    world->set(4, 8, HWALL);
    world->set(6, 8, HWALL);
    world->set(7, 8, HWALL);
    world->set(5, 6, HWALL);

    world->set(4, 5, BEEPER);
    world->set(5, 3, BEEPER);
    world->set(5, 7, BEEPER);
    world->set(6, 5, BEEPER);

    world->save(fileName);
}

class MyRobot : public Robot
{
public:
    void nextToABeeper()
    {
        if (nextToABeeper())
        {
            pickBeeper();
        }
    }

    /*void leftIsClear()
    {
        if (leftIsClear())
        {
            turnLeft();
            move();
        }
    }
*void rightIsClear()
    {
        if (rightIsClear())
        {
            turnRight();
            move();
        }
    }*/
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
    }
};

int main()
{
    world->create("");
    decorateWorld("Guia0212.txt");
    world->show();
    world->reset();
    world->read("Guia0212.txt");
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
 1.2 25/03 esboco
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
 1.0    01. ( OK ) identificacao de programa
 1.1    01. ( OK ) identificacao de programa
 1.2    01. ( OK ) identificacao de programa
*/
