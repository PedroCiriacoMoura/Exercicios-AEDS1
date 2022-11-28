/*
 Exemplo0210 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0210 exemplo0210.c
 Windows: gcc -o exemplo0210 exemplo0210.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0210
 Windows: exemplo0210
*/
// dependencias
#include "io.h" // para definicoes proprias
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/

/**
 Method00 - nao faz nada.
*/
void method00()
{
    // nao faz nada
} // fim method00 ( )
/**
 Method01 - mostrar mensagem com texto constante.
*/
void method01()
{
    IO_println("Valor igual a um");
} // fim method01 ( )
/**
 Method02 - mostrar mensagem com texto constante e
 valor variavel
 @param x - valor a ser exibido
*/
void method02(int x)
{
    IO_println(IO_concat("Valor igual a (",
                         IO_concat(IO_toString_d(x), ")\n")));
} // fim method02 ( )
/**
 Method03 - mostrar mensagem com texto e
 valor variavel
 @param text1 - texto a ser exibido
 @param x - valor a ser exibido
*/
void method03(char *text1, int x)
{
    IO_println(IO_concat(
        IO_concat(text1, " ("),
        IO_concat(IO_toString_d(x), ")\n")));
} // fim method03 ( )

int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
               // identificar
    IO_id("EXEMPLO0210 - Programa - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com um inteiro [0,1,2,3]: ");
    // testar valor
    switch (x)
    {
    case 0:
        method00();
        break;
    case 1:
        method01();
        break;
    case 2:
        method02(x);
        break;
    case 3:
        method03("Valor igual a tres", x);
        break;
    default: // se nao alguma das opcoes anteriores
        IO_println(IO_concat("Valor diferente das opcoes [0,1,2,3] (",
                             IO_concat(IO_toString_d(x), ")")));
    } // fim escolher
      // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  ---------------------------------------------- historico
  Versao Data Modificacao
   0.1 03/04 esboco
   0.2 03/04 esboco
   0.3 03/04 esboco
   0.4 03/04 esboco
   0.5 03/04 esboco
   0.6 03/04 esboco
   0.7 03/04 esboco
   0.8 03/04 esboco
   0.9 03/04 esboco
   1.0 03/04 esboco
  ---------------------------------------------- testes
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
  */