/*
 Exemplo0101 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0101 exemplo0101.c
 Windows: gcc -o exemplo0101 exemplo0101.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0101
 Windows: exemplo0101
*/
#include <stdio.h> 
int main (int argc, char* argv [])
{
    //Definir Lado
      int x = 0;
    //Identificar
        printf ( "%s\n", "Exemplo0101 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valor Inicial de X
        printf ( "%s%d\n", "x = ", x );

    //Ler Teclado    
        printf ( "Entrar com um valor inteiro: " );
        scanf ( "%d", &x );
        getchar ();
        printf ( "%s%i\n", "x = ", x );

    //Encerrar
        printf ( "\n\nApertar ENTER para terminar." );
        getchar( ); 
        return ( 0 ); 
}

    /*
        ---------------------------------------------- documentacao complementar
        ---------------------------------------------- notas / observacoes / comentarios
        ---------------------------------------------- previsao de testes
        a.) 5
        b.) -5
        c.) 123456789
        ---------------------------------------------- historico
        Versao Data Modificacao
         0.1 11/03 esboco
        ---------------------------------------------- testes
        Versao Teste
         0.1    01. ( OK ) identificacao de programa
        leitura e exibicao de inteiro
        */
