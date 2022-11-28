/*
Guia0115 - v0.0. - 18 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0115 ./Guia0115.cpp
 No Windows: g++ -o Guia0115.exe Guia0115.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0115
 No Windows: Guia0115
*/

// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
   world->set(3, 2, HWALL);
   world->set(4, 2, HWALL);
   world->set(5, 2, HWALL);
   world->set(3, 6, HWALL);
   world->set(4, 6, HWALL);
   world->set(5, 6, HWALL);

   world->set(2, 3, VWALL);
   world->set(2, 4, VWALL);
   world->set(2, 5, VWALL);
   world->set(2, 6, VWALL);
   world->set(5, 3, VWALL);
   world->set(5, 4, VWALL);
   world->set(5, 5, VWALL);

   world->set(4, 3, BEEPER);
   world->set(4, 3, BEEPER);
   world->set(4, 3, BEEPER);
   world->set(4, 3, BEEPER);
   world->set(4, 3, BEEPER);
   world->set(4, 3, BEEPER);
   world->save(fileName);
}

class MyRobot : public Robot
{
public:

   void turnRight()
   {
      if (checkStatus())
      {
         turnLeft();
         turnLeft();
         turnLeft();
      }
   }
   void turnDown()
   {
      if (checkStatus()) 
      {
         turnLeft();
         turnLeft();
      }
   }

   void moveN(int steps)
   {
      int step = 0;
      for (step = 0; step < steps; step = step + 1)
      {
         move(); 
      }
   }
   
   void deixar ()
   {
      while (nbeepers() > 0)
      {
         putBeeper();
      }
   }

   void pegarTudo ()
   {
      while (nbeepers() < 6) {
         pickBeeper();
      }
   }

   void deixar (int n1)
   {
      int bolinha = 0;
      for (bolinha = 0; bolinha < n1; bolinha = bolinha + 1)
      {
         putBeeper ();
      }
   }

   void doTask()
   {
      turnLeft();
      moveN (6);
      turnRight ();
      moveN (5);
      turnRight ();
      move ();
      turnRight ();
      moveN(2);
      turnLeft ();
      moveN (3);
      pegarTudo ();
      turnDown ();
      moveN (3);
      turnRight ();
      moveN (2);
      turnRight ();
      moveN(3);
      deixar (3);
      turnDown ();
      moveN (4);
      turnLeft ();
      moveN (3);
      deixar (2);
      move();
      turnLeft ();
      moveN(4);
      deixar (1);
      moveN (2);
      turnRight();
      move();
      turnDown();
      turnOff();
   }

};
int main()
{
   world->create(""); 
   decorateWorld("Guia0115.txt");
   world->show();

   world->reset();              
   world->read("Guia0115.txt"); 
   world->show();               
   set_Speed(2);                

   MyRobot *robot = new MyRobot();

   robot->create(1, 1, EAST, 0, "Karel");

   robot->doTask();

   world->close();

   getchar();
   return (0);
}

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 18/03 esboco
 0.2 18/03 mudanca de versao
 0.3 18/03 mudanca de versao
 0.4 18/03 mudanca de versao
 0.5 18/03 mudanca de versao
 0.6 18/03 mudanca de versao
 0.7 18/03 mudanca de versao
 0.8 18/03 mudanca de versao
 0.9 18/03 mudanca de versao
 1.0 18/03 mudanca de versao
 1.1 18/03 mudanca de versao
 1.2 18/03 mudanca de versao
 1.3 18/03 mudanca de versao
 1.4 18/03 mudanca de versao
 1.5 18/03 mudanca de versao
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) teste inicial
 0.2 01. ( OK ) teste da tarefa
 0.3 01. ( OK ) teste da tarefa parcial
 0.4 0.1 ( OK ) teste do apanhar marcador
 0.5 0.1 ( OK ) teste do colocar marcador
 0.6 01. ( OK ) teste da repeticao do movimento
 0.7 01. ( OK ) teste com marcador na posicao (4,4)
 ``  02. ( OK ) teste sem marcador na posicao (4,4)
 0.8 01. ( OK ) teste com a quantidade de marcadores
 0.9 01. ( OK ) teste com outra forma de repeticao
 1.0 01. ( OK ) teste com outra forma de repeticao
 ``  01. ( OK ) teste com outra forma de alternativa
 1.1 01. ( OK )
 1.2 01. ( OK )
 1.3 01. ( OK )
 1.4 01. ( OK )
 1.5 01. ( OK )
*/
