/*
 Exemplo02E2 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo02E2 exemplo02E2.c
 Windows: gcc -o exemplo02E2 exemplo02E2.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo02E2
 Windows: exemplo02E2
*/
// dependencias
#include "io.h"
#include <string.h>

int main()
{
    char x = 0;
    char y = 0;
    char z = 0;

    x = IO_readchar("Entre com um caractere: ");
    y = IO_readchar("Entre com outro caractere: ");
    z = IO_readchar("Entre com outro caractere: ");

    if (x != y && x != z && z != y)
    {
        if (x < z && x > y)
        {
            printf("ERRO");
        }
        else
        {
            if (x < y && x > z)
            {
                printf("ERRO");
            }
            else
            {
                printf("O primeiro caractere nao esta entre os outros. ");
            }
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
 2.0 03/04 esboco
 E.1 03/04 esboco
 E.2 03/04 esboco
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
 2.0    01. ( OK ) identificacao de programa
 E.1    01. ( OK ) identificacao de programa
 E.2    01. ( OK ) identificacao de programa
*/