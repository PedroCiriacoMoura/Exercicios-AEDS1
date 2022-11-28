/*
 Exemplo0102 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0102 exemplo0102.c
 Windows: gcc -o exemplo0102 exemplo0102.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0102
 Windows: exemplo0102
*/
#include <stdio.h> 
int main (int argc, char* argv [])
{
    //Definir Dado
      double x = 0.0;
    //Identificar
        printf ( "%s\n", "Exemplo0102 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valor Inicial de X
        printf ( "%s%lf\n", "x = ", x );

    //Ler Teclado    
        printf ( "Entrar com um valor real: " );
        scanf ( "%lf", &x );
        getchar ();
        
    //Valor Lido    
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
        a.) 0.5
        b.) -0.5
        c.) 1.23456789
        ---------------------------------------------- historico
        Versao Data Modificacao
        0.1 11/03 esboco
        0.2 11/03 mudanca de versao
        ---------------------------------------------- testes
        Versao Teste
        0.1 01. ( OK ) identificacao de programa
        leitura e exibicao de inteiro
        0.2 01. ( OK ) identificacao de programa
        */
