/*
 Exemplo0103 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0103 exemplo0103.c
 Windows: gcc -o exemplo0103 exemplo0103.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0103
 Windows: exemplo0103
*/
#include <stdio.h> 
int main (int argc, char* argv [])
{
    //Definir Dado
      char x = 'A'; 
    //Identificar
        printf ( "%s\n", "Exemplo0103 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valor Inicial de X
        printf ( "%s%c\n", "x = ", x );

    //Ler Teclado    
        printf ( "Entrar com um caractere: " );
        scanf ( "%c", &x );
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
        ---------------------------------------------- historico
        Versao Data Modificacao
        0.1 11/03 esboco
        0.2 11/03 mudanca de versao
        ---------------------------------------------- testes
        Versao Teste
        0.1 01. ( OK ) identificacao de programa
                        leitura e exibicao de inteiro
        0.2 01. ( OK ) identificacao de programa
                        leitura e exibicao de real
        0.3 01. ( OK ) identificacao de programa
                        leitura e exibicao de real
        */
