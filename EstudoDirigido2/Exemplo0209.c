/*
 Exemplo0209 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0209 exemplo0209.c
 Windows: gcc -o exemplo0209 exemplo0209.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0209
 Windows: exemplo0209
*/
// dependencias
#include "io.h" // para definicoes proprias
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( )
{
// definir dado
 int x = 0; // definir variavel com valor inicial
// identificar
 IO_id ( "EXEMPLO0209 - Programa - v0.0" );
// ler do teclado
 x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );
// testar valor
 switch ( x )
 {
 case 0:
 IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
 break;
 case 1:
 IO_printf ( "%s (%d)\n", "Valor igual a um ", x );
 break;
 case 2:
 IO_printf ( "%s (%d)\n", "Valor igual a dois", x );
 break;
 case 3:
 IO_printf ( "%s (%d)\n", "Valor igual a tres", x );
 break;
 default: // se nao alguma das opcoes anteriores
 IO_printf ( "%s (%d)\n", "Valor diferente das opcoes [0,1,2,3]", x );
 } // fim escolher
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
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
*/