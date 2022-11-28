/*
Guia0107 - v0.0. - 18 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0107 ./Guia0107.cpp
 No Windows: g++ -o Guia0107.exe Guia0107.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0107
 No Windows: Guia0107
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
   // colocar paredes no mundo
   world->set(4, 4, HWALL); // horizontal
   world->set(4, 4, VWALL); // vertical
                            // colocar um marcador no mundo
   world->set(4, 4, BEEPER);
   // salvar a configuracao atual do mundo
   world->save(fileName);
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
   /**
   turnRight - Procedimento para virar 'a direita.
   */
   void turnRight()
   {
      if (checkStatus()) // testar se o robo esta' ativo
      {
         turnLeft();
         turnLeft();
         turnLeft();
      }
   }

   /*moveN - Metodo para mover certa quantidade de passos.
    @param steps - passos a serem dados.   */

   void moveN(int steps)
   {
      // testar se a quantidade de passos e' maior que zero
      if (steps > 0)
      {
         // dar um passo
         move();
         // tentar fazer de novo, com menos um passo dessa vez
         moveN(steps - 1);
      } // end if
   }    // end moveN( )

   /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
   void doPartialTask()
   {
      moveN(3);
      turnLeft();
   }
   /**
    doTask - Relacao de acoes para qualquer robo executar.
    */
   void doTask()
   {
      doPartialTask();
      doPartialTask();
      if (nextToABeeper()) // testar se ha' marcador antes ...
      {
         pickBeeper(); // ... de tentar carrega-lo
      }
      doPartialTask();
      if (beepersInBag()) // testar se carrega marcador antes ...
      {
         putBeeper(); // ... de tentar descarrega-lo
      } 
      doPartialTask();
      turnLeft();
      turnOff(); // desligar-se
   }
};
int main()
{
   world->create(""); // criar o mundo
   decorateWorld("Guia0107.txt");
   world->show();

   // preparar o ambiente para uso
   world->reset();              // limpar configuracoes
   world->read("Guia0107.txt"); // ler configuracao atual para o ambiente
   world->show();               // mostrar a configuracao atual
   set_Speed(4);                // definir velocidade padrao

   MyRobot *robot = new MyRobot(); // criar robo

   // posicionar robo no ambiente (situacao inicial):
   // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
   robot->create(1, 1, EAST, 0, "Karel");

   // executar tarefa
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
*/
