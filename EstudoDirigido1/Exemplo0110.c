/*
 Exemplo0110 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0110 exemplo0110.c
 Windows: gcc -o exemplo0110 exemplo0110.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0110
 Windows: exemplo0110
*/

#include "io.h"

int main(int argc, char *argv[])
{
    // Definir Dado
        int x = 5 ;
        double y = 3.5; 
        char z = 'A';
        bool w = true; 
        chars a = IO_new_chars(STR_SIZE); 
        chars b = IO_new_chars(STR_SIZE); 
        chars c = IO_new_chars(STR_SIZE); 

    // Identificar
        IO_id ( "EXEMPLO0110 - Programa - v0.0" );

    //Concatenar Cadeias de Caracteres
        strcpy ( a, "abc" ); 
        strcpy ( b, "def" ); 
        IO_printf ( "\na = %s b = %s\n", a, b );
        c = IO_concat ( a, b ); 
        IO_printf ( "\nc = [%s]+[%s] = [%s]\n", a, b, c );
        strcpy ( a, "c = " );
        strcpy ( c, STR_EMPTY ); 
        IO_printf ( "%s\n", IO_concat ( a, IO_toString_c ( z ) ) );
        IO_println ( IO_concat ( "x = ", IO_toString_d ( x ) ) );
        IO_println ( IO_concat ( "w = ", IO_toString_b ( w ) ) );
        strcpy ( b, STR_EMPTY );
        IO_print ( "y = " );
        IO_print ( IO_concat ( b, IO_toString_f ( y ) ) );
        IO_print ( "\n" );
        z = IO_readchar ( "char = " );
        IO_println ( IO_concat ( a, IO_toString_c ( z ) ) );
        y = IO_readdouble ( "double = " );
        IO_println ( IO_concat ( a, IO_toString_f ( y ) ) );
        x = IO_readint ( "int = " );
        IO_println ( IO_concat ( a, IO_toString_d ( x ) ) );
        w = IO_readbool ( "bool = " );
        IO_println ( IO_concat ( a, IO_toString_b ( w ) ) );
        b = IO_readstring ( "chars = " );
        IO_println ( IO_concat ( a, b ) );
        b = IO_readln ( "line = " );
        IO_println ( IO_concat ( a, b ) );

    // Encerrar
    IO_pause ( "Apertar ENTER para terminar" ); 
    return (0);
}
/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 11/03 esboco
    0.2 11/03 mudanca de versao
    0.3 11/03 mudanca de versao
    0.4 11/03 mudanca de versao
    0.5 11/03 mudanca de versao
    0.6 11/03 mudanca de versao
    0.7 11/03 mudanca de versao
    0.8 11/03 mudanca de versao
    0.9 11/03 mudanca de versao
    1.0 11/03 mudanca de versao
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
                    leitura e exibicao de inteiro
    0.2 01. ( OK ) identificacao de programa
                    leitura e exibicao de real
    0.3 01. ( OK ) identificacao de programa
    0.4 01. ( OK ) identificacao de programa
    0.5 01. ( OK ) identificacao de programa
    0.6 01. ( OK ) identificacao de programa
    0.7 01. ( OK ) identificacao de programa
    0.8 01. ( OK ) identificacao de programa
    0.9 01. ( OK ) identificacao de programa
    1.0 01. ( OK ) identificacao de programa
*/