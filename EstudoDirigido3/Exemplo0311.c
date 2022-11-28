/*
 Exemplo0311 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0311 exemplo0311.c
 Windows: gcc -o exemplo0311 exemplo0311.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0311
 Windows: exemplo0311
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io.h"

void method00()
{
}

void method01()
{
    char s[100];
    int t = 0;
    int c = 0;

    strcpy(s, IO_readstring("Entre com uma palavra: "));
    t = strlen(s);

    for (c = 0; c < t; c++)
    {
        if (s[c] >= 'a' && 'z' >= s[c])
        {
            printf("%c\n", s[c]);
        }
    }
}



int main(void)
{
    int x = 0;
    do
    {
        printf("779139_PEDRO_MARCELO_CIRIACO_MOURA\n");
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - Mostrar apenas letras minusculas");
        IO_println("");
        
        x = IO_readint("Entrar com uma opcao: ");
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
                               IO_concat(IO_toString_d(x), ")")));
        }
    } while (x != 0);

    printf("\nAperte ENTER para terminar.\n");
    getchar();
    return (0);
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
*/
