/*
 Exemplo0102 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0107 exemplo0107.c
 Windows: gcc -o exemplo0107 exemplo0107.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0107
 Windows: exemplo0107
*/

#include <stdio.h> 
#include <stdbool.h> 
#include <string.h> 
#include <math.h> 

int main (int argc, char* argv [])
{
    //Definir Dado
      double x = 0.0;
      double y = 0.0; 
      double z = 0.0;
    //Identificar
        printf ( "%s\n", "Exemplo0107 - Programa = v0.0" );
        printf ( "%s\n", "Autor: Pedro Moura" );
        printf ( "\n" ); 
        
    //Mostrar Valores Iniciais
        printf ( "%s%lf\n", "x = ", x );
        printf ( "%s%lf\n", "y = ", y );

    //Ler Teclado    
        printf ( "Entrar com um valor real: " );
        scanf ( "%lf", &x );
        getchar ();

        printf ( "Entrar com outro valor real: " );
        scanf ( "%lf", &y );
        getchar ( );
        
    //Operar Valores    
        z=pow(x,y); 
    
    //Mostrar Primeiro Resultado
        printf ( "%s%lf^%lf=%lf\n", "z = ", x, y, z );

    //Operar Valores    
        z=pow(y,x); 
    
    //Mostrar Segundo Resultado
        printf ( "%s%lf^%lf=%lf\n", "z = ", y, x, z );

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
    */
