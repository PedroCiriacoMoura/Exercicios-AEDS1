/*
 Exemplo03E1 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o teste exemplo03E1.c
 Windows: gcc -o teste teste.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo03E1
 Windows: exemplo03E1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io.h"


int main(void) {
/*{
int a = 10; int b = 20; int c = 30; int maior = 0;
    if (c>b>a || c>a>b ){
        maior = c;
    }else{
        if (b>c>a || b>a>c ){
        maior = b;   
    }else{
        if (a>b>c || a>c>b ){
        maior = a;  
        }
    }
}
printf ("Maior = %d", maior);
}*/
int y = 0;
for (int x = 1; x <= 5; x++ ){
for (y=(x+1)/3; y > 0; y=y-1){
    printf ("");
}
for (y = 1; y<=x/2+1; y = y + 1){
    printf ("%d", y);
}
printf ("\n");
}
}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 09/04 esboco
 0.2 09/04 esboco
 0.3 09/04 esboco
 0.4 09/04 esboco
 0.5 09/04 esboco
 0.6 09/04 esboco
 0.7 09/04 esboco
 0.8 09/04 esboco
 0.9 09/04 esboco
 1.0 09/04 esboco
 1.1 09/04 esboco
 1.2 09/04 esboco
 1.3 09/04 esboco
 1.4 09/04 esboco
 1.5 09/04 esboco
 1.6 09/04 esboco
 1.7 09/04 esboco
 1.8 09/04 esboco
 1.9 09/04 esboco
 2.0 09/04 esboco
 E.1 09/04 esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) identificacao de programa
 0.3 01. ( OK ) identificacao de programa
 0.4 01. ( OK ) identificacao de programa
 0.5 01. ( OK ) identificacao de programa
 0.6 01. ( OK ) identificacao de programa
 0.7 01. ( OK ) identificacao de programa
 0.8 01. ( OK ) identificacao de programa
 0.9 01. ( OK ) identificacao de programa
 1.0 01. ( OK ) identificacao de programa
 1.1 01. ( OK ) identificacao de programa
 1.2 01. ( OK ) identificacao de programa
 1.3 01. ( OK ) identificacao de programa
 1.4 01. ( OK ) identificacao de programa
 1.5 01. ( OK ) identificacao de programa
 1.6 01. ( OK ) identificacao de programa
 1.7 01. ( OK ) identificacao de programa
 1.8 01. ( OK ) identificacao de programa
 1.9 01. ( OK ) identificacao de programa
 2.0 01. ( OK ) identificacao de programa
 E.1 01. ( OK ) identificacao de programa
*/
