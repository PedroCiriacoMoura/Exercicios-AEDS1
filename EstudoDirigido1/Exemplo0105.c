/*
 Exemplo0105 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0105 exemplo0105.c
 Windows: gcc -o exemplo0105 exemplo0105.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0105
 Windows: exemplo0105
*/

#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

int main (int argc, char* argv [])
{
    //Definir Dado
        char x [80] = "abc";
      
    //Identificar
        printf ( "%s\n", "Exemplo0105 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valor Inicial de X
        printf ( "%s%s\n", "x = ", x );


    //Ler Teclado    
        printf ("Entrar com uma cadeia de caracteres: ");
        scanf ( "%s",x);
        getchar ();
            
    //Valor Lido    
        printf ( "%s%s\n", "x = ", x );

    //Encerrar
        printf ( "\n\nApertar ENTER para terminar." );
        getchar( ); 
        return ( 0 ); 
} 
    /*
        ---------------------------------------------- documentacao complementar
        ---------------------------------------------- notas / observacoes / comentarios
        ---------------------------------------------- previsao de testes
        a.) def
        b.) d e f
        c.) d_e_f
        ---------------------------------------------- historico
        Versao Data Modificacao
        0.1 11/03 esboco
        0.2 11/03 mudanca de versao
        0.3 11/03 mudanca de versao
        0.4 11/03 mudanca de versao
        0.5 11/03 mudanca de versao
        ---------------------------------------------- testes
        Versao Teste
        0.1 01. ( OK ) identificacao de programa
                        leitura e exibicao de inteiro
        0.2 01. ( OK ) identificacao de programa
                        leitura e exibicao de real
        0.3 01. ( OK ) identificacao de programa
        0.4 01. ( OK ) identificacao de programa
        0.5 01. ( OK ) identificacao de programa
        */
