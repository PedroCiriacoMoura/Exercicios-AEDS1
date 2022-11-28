/*
 Exemplo03E1 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo03E1 exemplo03E1.c
 Windows: gcc -o exemplo03E1 exemplo03E1.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo03E1
 Windows: exemplo03E1
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
    printf("\nDesdes valores apenas %i estao entre o intervalo de [%i:%i] e que sao multiplos de 5\n", contador, a, b);
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
    printf("\nDesdes valores apenas %i estao entre o intervalo de [%i:%i] e que sao multiplos de 5 e tambem nao sao multiplos de 3\n", contador, a, b);
}

void method09()
{
    double a = 0;
    double b = 0;
    int n = 0;
    double p[1000];
    int contador = 0;
    int contador2 = 0;
    int x = 0;
    int ab = 0;
    double z[1000];

    a = IO_readdouble("Entre com um valor limite: ");
    b = IO_readdouble("Entre com outro valor limite: ");
    n = IO_readint("Quantos valores voce quer testar:");
    if (a > b)
    {
        printf("\nERRO: O PRIMEIRO VALOR PRECISA SER MENOR QUE O SEGUNDO\n");
    }
    else
    {
        for (x = 0; x < n; x++)
        {
            z[x] = IO_readdouble("Entre com um valor: ");
        }
        for (int c = 0; c < n; c++)
        {
            if (z[c] > a && z[c] < b)
            {
                if (!((int)z[c] % 2 == 0))
                {
                    p[contador] = z[c];
                    contador = contador + 1;
                }
            }
        }
    }
    printf("\n");
    printf("Apenas %i dos valores estao no intervalo de (%.3lf:%.3lf) e sao impares, e sao os seguintes:\n", contador, a, b);
    for (int i = 0; i < contador; i++)
    {
        printf("%.4lf, ", p[i]);
    }
    printf("\n");
}

void method10()
{
    double a = 0;
    double b = 0;
    int n = 0;
    double p[1000];
    int contador = 0;
    int contador2 = 0;
    int x = 0;
    int ab = 0;
    double z[1000];
    int AA = 0;
    double BB[1000];
    a = IO_readdouble("Entre com um valor limite maior que zero e menor que 1: ");
    b = IO_readdouble("Entre com outro valor limite maior que zero e menor que 1: ");
    n = IO_readint("Quantos valores voce quer testar:");
    if (!(a > 0 && a < 1 && b > 0 && b < 1))
    {
        printf("\nERRO: OS PRIMEIROS VALORES PRECISAM SER MAIORES QUE 0 E MENORES QUE 1\n");
    }
    else
    {
        for (x = 0; x < n; x++)
        {
            z[x] = IO_readdouble("Entre com um valor: ");
        }
        for (int c = 0; c < n; c++)
        {
            AA = z[c];
            BB[c] = z[c];
            z[c] = z[c] - AA;
            if (z[c] >= a && z[c] >= b)
            {
                    p[contador] = BB[c];
                    contador = contador + 1;
            }else{
                if (z[c] <= a && z[c] <= b)
                {
                        p[contador] = BB[c];
                        contador = contador + 1;
                }
            }
        }
    }
    printf("\n");
    printf("\nApenas %i dos valores estao com seus decimais fora do intervalo aberto de (%.3lf:%.3lf) e sao os seguintes:\n", contador, a, b);
    for (int i = 0; i < contador; i++)
    {
        printf("%.4lf, ", p[i]);
    }
    printf("\n");
}

void method11()
{
    char s [1000];
    char p [1000];
    int t = 0;
    int contador = 0;
    printf ("Digite uma frase: ");
    gets(s);
    t = strlen(s);
    for (int i = 0; i < t; i++){
        if (!(s[i] >= 'a' && s[i] <= 'z')) {
            if (!(s[i] >= 'A' && s[i] <= 'Z')) {
                if (!(s[i] >= '0' && s[i] <= '9')) {
                    p [contador] = s[i];
                    contador = contador + 1;
                }
            }
        }
    }
    printf ("\n");
    printf ("Esses sao os simbolos nao alfanumericos digitados: ");
    for (int j = 0; j < contador; j++){
        printf ("%c", p[j]);
    }
    printf ("\n");
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
        IO_println("9 - Testar intervalos com numeros reais impares");
        IO_println("10 - Testar intervalos com partes fracionarias");
        IO_println("11 - Separar simbolos nao alfanumericos");
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
        case 9:
            method09();
            break;
        case 10:
            method10();
            break;
        case 11:
            method11();
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
