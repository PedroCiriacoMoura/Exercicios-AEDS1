/*
 Exemplo0217 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0217 exemplo0217.c
 Windows: gcc -o exemplo0217 exemplo0217.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0217
 Windows: exemplo0217
*/
// dependencias
#include "io.h"
#include <string.h>

int main()
{
    int x = 0;
    int y = 0;
    char p [6] = "a";
    char o [6] = "a"; 
    char i [9] = "a";
    char u [9] = "a"; 
    
    x = IO_readint("Entre com um valor inteiro: ");
    y = IO_readint("Entre com outro valor inteiro: ");
    
    if (x % 2 == 0) {
        strcpy (p,"PAR");
    } else {
        strcpy (p,"IMPAR");
    }
    
    if (y % 2 == 0) {
        strcpy (o,"PAR");
    } else {
        strcpy (o,"IMPAR");
    }

    if (x >= 0 ) {
        strcpy (i,"positivo");
    } else {
        strcpy (i,"negativo");
    }

    if (y >= 0 ) {
        strcpy (u,"positivo");
    } else {
        strcpy (u,"negativo");
    }

    printf ("%i e %s e %s, %i e %s e %s", x, p, i, y, o, u);
}
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
     1.0 03/04 esboco
     1.1 03/04 esboco
     1.2 03/04 esboco
     1.3 03/04 esboco
     1.4 03/04 esboco
     1.5 03/04 esboco
     1.6 03/04 esboco
     1.7 03/04 esboco
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
     1.0    01. ( OK ) identificacao de programa
     1.1    01. ( OK ) identificacao de programa
     1.2    01. ( OK ) identificacao de programa
     1.3    01. ( OK ) identificacao de programa
     1.4    01. ( OK ) identificacao de programa
     1.5    01. ( OK ) identificacao de programa
     1.6    01. ( OK ) identificacao de programa
     1.7    01. ( OK ) identificacao de programa
    */