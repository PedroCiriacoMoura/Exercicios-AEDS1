/*
 Exemplo0108 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0108 exemplo0108.c
 Windows: gcc -o exemplo0108 exemplo0108.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0108
 Windows: exemplo0108
*/

#include <stdio.h> 
#include <stdbool.h> 
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
    //Definir Dado
        char x [80] = "abc";
        char y [80] = "def"; 
        char z [80]; 
        strcpy ( z, "" ); 
      
    //Identificar
        printf ( "%s\n", "Exemplo0108 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valores Iniciais e Comprimentos das Cadeias
        printf ( "%s%s (%d)\n", "x = ", x, strlen( x) );
        printf ( "%s%s (%d)\n", "y = ", y, strlen( y) );


    //Ler Teclado    
        printf ( "Entrar com caracteres: " );
        scanf ("%s",x);
        getchar ();

        printf ( "Entrar com outros caracteres: " );
        scanf ("%s",y);
        getchar ( );
            
    //Operar Valores
        strcpy (z,x); 
        strcat (z,y);

    //Mostrar Primeiro Valor Resultante
        printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );

    //Operar Valores
        strcpy ( z, strcat ( strdup(x), y ) );

    //Mostrar Segundo Valor Resultante
        printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );


    //Encerrar
        printf ( "\n\nApertar ENTER para terminar." );
        getchar( ); 
        return ( 0 ); 
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
    */
