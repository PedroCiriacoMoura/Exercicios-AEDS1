/*
 Exemplo0106 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0106 exemplo0106.c
 Windows: gcc -o exemplo0106 exemplo0106.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0106
 Windows: exemplo0106
*/
#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

int main (int argc, char* argv [])
{
    //Definir Lado
      int x = 0;
      int z = 0;
      int y = 0;

    //Identificar
        printf ( "%s\n", "Exemplo0106 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valores Iniciais
        printf ( "%s%d\n", "x = ", x );
        printf ( "%s%i\n" , "y = ", y );

    //Ler Teclado    
        printf ( "Entrar com um valor inteiro: " );
        scanf ( "%d", &x );
        getchar ( ); 
 
        printf ( "Entrar com outro valor inteiro: " );
        scanf ( "%i", &y );
        getchar ( );

    //Multiplicar Valores
        z=x*y; 
    
    //Mostrar Resultado
    printf ("%s%ix%i=%d\n","z = ",x,y,z);

    //Encerrar
        printf ( "\n\nApertar ENTER para terminar." );
        getchar( ); 
        return ( 0 ); 
}

    /*
        ---------------------------------------------- documentacao complementar
        ---------------------------------------------- notas / observacoes / comentarios
        ---------------------------------------------- previsao de testes
        a.) 3 e 5
        b.) -3 e 5
        c.) -3 e -5
        ---------------------------------------------- historico
        Versao Data Modificacao
        0.1 11/03 esboco
        0.2 11/03 mudanca de versao
        0.3 11/03 mudanca de versao
        0.4 11/03 mudanca de versao
        0.5 11/03 mudanca de versao
        0.6 11/03 mudanca de versao
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
        */
