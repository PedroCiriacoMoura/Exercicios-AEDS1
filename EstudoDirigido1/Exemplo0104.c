/*
 Exemplo0104 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0104 exemplo0104.c
 Windows: gcc -o exemplo0104 exemplo0104.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0104
 Windows: exemplo0104
*/

#include <stdio.h> 
#include <stdbool.h>

int main (int argc, char* argv [])
{
    //Definir Dado
      bool x = false; 
      int y = 0; 
      
    //Identificar
        printf ( "%s\n", "Exemplo0104 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valor Inicial de X
        printf ( "%s%d\n", "x = ", x );


    //Ler Teclado    
        printf ( "Entrar com um valor logico: " );
        scanf ( "%d",&y);
        getchar ();
    
    // garantir valor logico no intervalo [0:1]
        x = (y!=0);
            
    //Valor Lido    
        printf ( "%s%d\n", "x = ", x );

    //Encerrar
        printf ( "\n\nApertar ENTER para terminar." );
        getchar( ); 
        return ( 0 ); 
} 
    /*
        ---------------------------------------------- documentacao complementar
        ---------------------------------------------- notas / observacoes / comentarios
        ---------------------------------------------- previsao de testes
        a.) 1
        b.) 0
        c.) true
        ---------------------------------------------- historico
        Versao Data Modificacao
        0.1 11/03 esboco
        0.2 11/03 mudanca de versao
        0.3 11/03 mudanca de versao
        0.4 11/03 mudanca de versao
        ---------------------------------------------- testes
        Versao Teste
        0.1 01. ( OK ) identificacao de programa
                        leitura e exibicao de inteiro
        0.2 01. ( OK ) identificacao de programa
                        leitura e exibicao de real
        0.3 01. ( OK ) identificacao de programa
        0.4 01. ( OK ) identificacao de programa
        */
