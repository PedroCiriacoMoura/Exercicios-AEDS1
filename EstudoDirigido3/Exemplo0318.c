/*
 Exemplo0318 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0318 exemplo0318.c
 Windows: gcc -o exemplo0318 exemplo0318.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0318
 Windows: exemplo0318
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
    printf("");
}

void method02()
{
    char s[100];
    int t = 0;
    int c = 0;
    int tamanhom = 0;

    printf("779139_PEDRO_MARCELO_CIRIACO_MOURA\n");

    strcpy(s, IO_readstring("Entre com uma palavra: \n"));
    t = strlen(s);
    printf("\n");
    for (c = 0; c < t; c++)
    {
        if (s[c] >= 'a' && 'z' >= s[c])
        {
            printf("%c", s[c]);
            tamanhom = tamanhom + 1;
        }
    }

    printf("\nUm total de %i letras minusculas.\n", tamanhom);
    printf("\n");
}

void method03()
{
    char s[100];
    int t = 0;
    int c = 0;
    int tamanhom = 0;

    strcpy(s, IO_readstring("Entre com uma palavra: "));
    t = strlen(s);

    for (c = t; c >= 0; c = c - 1)
    {
        if (s[c] >= 'a' && 'z' >= s[c])
        {
            printf("%c", s[c]);
            tamanhom = tamanhom + 1;
        }
    }
}

void method04()
{
    char s[100];
    int t = 0;
    int c = 0;
    int tamanhom = 0;

    strcpy(s, IO_readstring("Entre com uma palavra: "));
    t = strlen(s);
    printf("\n");
    for (c = 0; c <= t; c = c + 1)
    {
        if (s[c] >= '@' && 'z' >= s[c])
        {
            printf("%c", s[c]);
            tamanhom = tamanhom + 1;
        }
    }
    printf("\n");

    printf("\nUm total de %i caracteres.\n", tamanhom);
}

void method05()
{
    char s[100];
    int t = 0;
    int c = 0;
    int tamanhom = 0;

    strcpy(s, IO_readstring("Entre com uma palavra: "));
    t = strlen(s);
    printf("\n");
    for (c = t; c >= 0; c = c - 1)
    {
        if (s[c] >= '0' && 'z' >= s[c])
        {
            printf("%c", s[c]);
            tamanhom = tamanhom + 1;
        }
    }

    printf("\nUm total de %i digitos.\n", tamanhom);
    printf("\n");
}

void method06()
{
    char s[100];
    int t = 0;
    int c = 0;
    int tamanhom = 0;

    strcpy(s, IO_readstring("Entre com uma palavra: "));
    t = strlen(s);
    printf("\n");
    for (c = t; c >= 0; c = c - 1)
    {
        if (!(s[c] >= 'a' && 'z' >= s[c]))
            if (!(s[c] >= 'A' && 'Z' >= s[c]))
                if (!(s[c] >= '0' && '9' >= s[c]))
                {
                    printf("%c", s[c]);
                    tamanhom = tamanhom + 1;
                }
    }
    tamanhom = tamanhom - 1;
    printf("\nUm total de %i digitos.\n", tamanhom);
    printf("\n");
}

void method07()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int u = 0;
    int contador = 0;
    int x[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    a = IO_readint("Entre com um valor limite: ");
    b = IO_readint("Entre com outro valor limite: ");
    n = IO_readint("Quantos valores voce quer testar:");

    for (int contador1 = n; contador1 > 0; contador1 = contador1 - 1)
    {
        u = IO_readint("Entre com os valores: ");
        if (u >= a && u <= b)
        {
            if (u % 5 == 0)
            {
                contador = contador + 1;
            }
        }
        else
        {
            if (u <= a && u >= b)
            {
                if (u % 5 == 0)
                {
                    contador = contador + 1;
                }
            }
        }
    }
    printf ("\nDesdes valores apenas %i estao entre o intervalo de [%i:%i] e que sao multiplos de 5\n", contador, a, b);
} 

void method08()
{ 
    int a = 0;
    int b = 0;
    int n = 0;
    int u = 0;
    int contador = 0;
    int x[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    a = IO_readint("Entre com um valor limite: ");
    b = IO_readint("Entre com outro valor limite: ");
    n = IO_readint("Quantos valores voce quer testar:");

    for (int contador1 = n; contador1 > 0; contador1 = contador1 - 1)
    {
        u = IO_readint("Entre com os valores: ");
        if (u >= a && u <= b)
        {
            if (u % 5 == 0 && !(u % 3 == 0))
            {
                contador = contador + 1;
            }
        }
        else
        {
            if (u <= a && u >= b)
            {
                if (u % 5 == 0 && !(u % 3 == 0))
                {
                    contador = contador + 1;
                }
            }
        }
    }
    printf ("\nDesdes valores apenas %i estao entre o intervalo de [%i:%i] e que sao multiplos de 5 e tambem nao sao multiplos de 3\n", contador, a, b);
} 


    int main(void)
    {
        int x = 0;
        do
        {
            printf("\n779139_PEDRO_MARCELO_CIRIACO_MOURA\n");
            IO_println("Opcoes");
            IO_println("0 - parar");
            IO_println("1 - Mostrar apenas letras minusculas");
            IO_println("2 - Mostrar e contas as letras minusculas");
            IO_println("3 - Contar e mostras as letras minusculas de tras para frente");
            IO_println("4 - contar e mostrar todos simbolos que forem letras, ou maiusculas ou minusculas.");
            IO_println("5 - Contar e mostrar todos os digitos de tras para frente");
            IO_println("6 - Contar e mostrar tudo o que nao for digito e tambem nao for letra");
            IO_println("7 - Testar intervalos multiplos de 5");
            IO_println("8 - Testar intervalos multiplos de 5 e nao multiplos de 3");
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
            case 2:
                method02();
                break;
            case 3:
                method03();
                break;
            case 4:
                method04();
                break;
            case 5:
                method05();
                break;
            case 6:
                method06();
                break;
            case 7:
                method07();
                break;
            case 8:
                method08();
                break;
            default:
                IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
                                   IO_concat(IO_toString_d(x), ")")));
            }
        } while (x != 0);
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
    */
