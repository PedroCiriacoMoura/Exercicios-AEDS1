/*
 Exemplo0219 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0219 exemplo0219.c
 Windows: gcc -o exemplo0219 exemplo0219.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0219
 Windows: exemplo0219
*/
// dependencias
#include "io.h"
#include <string.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;

    x = IO_readdouble("Entre com um valor real: ");
    y = IO_readdouble("Entre com outro valor real: ");
    z = IO_readdouble("Entre com outro valor real: ");

    if (x < z && x > y)
    {
        printf("O primeiro valor esta entre os outros valores.");
    }
    else
    {
        if (x < y && x > z)
        {
            printf("O primeiro valor esta entre os outros valores.");
        }
        else
        {
            printf("O primeiro valor nao esta entre os outros valores");
        }
    }
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
 1.8 03/04 esboco
 1.9 03/04 esboco
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
 1.8    01. ( OK ) identificacao de programa
 1.9    01. ( OK ) identificacao de programa
*/