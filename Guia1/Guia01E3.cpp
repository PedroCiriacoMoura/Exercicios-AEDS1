/*
Guia01E3 - v0.0. - 18 / 03 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia01E3 ./Guia01E3.cpp
 No Windows: g++ -o Guia01E3.exe Guia01E3.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia01E3
 No Windows: Guia01E3
*/

// lista de dependencias
#include "mykarel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{

   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);
   world->set(2, 1, BEEPER);

   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);
   world->set(4, 1, BEEPER);

   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);
   world->set(6, 1, BEEPER);

   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);
   world->set(8, 1, BEEPER);

   world->save(fileName);
}
int main()
{
   world->create("");
   decorateWorld("Guia01E3.txt");
   world->show();

   world->reset();
   world->read("Guia01E3.txt");
   world->show();
   set_Speed(1);

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
 E.1 18/03 mudanca de versao
 E.2 18/03 mudanca de versao
 E.3 18/03 mudanca de versao
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
 E.1 01. ( OK )
 E.2 01. ( OK )
 E.3 01. ( OK )
*/
