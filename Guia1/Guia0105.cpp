/*
Guia0105 - v0.0. - 18 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0105 ./Guia0105.cpp
 No Windows: g++ -o Guia0105.exe Guia0105.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0105
 No Windows: Guia0105
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
   /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
   void doPartialTask()
   {
      move();
      move();
      move();
      turnLeft();
   }
   /**
    doTask - Relacao de acoes para qualquer robo executar.
    */
   void doTask()
   {
      doPartialTask();
      doPartialTask();
      pickBeeper( ); // apanhar marcador
      doPartialTask();
      putBeeper( ); // colocar marcador
      doPartialTask();
      turnLeft();
      turnOff(); // desligar-se
   }
};
int main()
{
   world->create(""); // criar o mundo
   decorateWorld("Guia0105.txt");
   world->show();

   // preparar o ambiente para uso
   world->reset();              // limpar configuracoes
   world->read("Guia0105.txt"); // ler configuracao atual para o ambiente
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
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) teste inicial
 0.2 01. ( OK ) teste da tarefa
 0.3 01. ( OK ) teste da tarefa parcial
 0.4 0.1 ( OK ) teste do apanhar marcador
 0.5 0.1 ( OK ) teste do colocar marcador
*/
