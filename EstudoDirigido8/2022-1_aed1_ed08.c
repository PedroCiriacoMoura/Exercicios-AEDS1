/*
 2022-1_aed1_ed08 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 2022-1_aed1_ed08 2022-1_aed1_ed08.c
 Windows: gcc -o 2022-1_aed1_ed08 2022-1_aed1_ed08.c
 Para executar em terminal (janela de comandos):
 Linux : ./2022-1_aed1_ed08
 Windows: 2022-1_aed1_ed08
*/

#include <stdio.h>
#include <math.h>
#include "io.h"
#include <string.h>
const int MAX_SIZE = 100;

void lerarquivo(int tamanho, int arranjo[])
{
    FILE *arquivo = fopen("DADOS.txt", "rt");
    for (int k = 0; k < tamanho; k++)
    {
        fscanf(arquivo, "%i", &arranjo[k]);
    }
    fclose(arquivo);
}

void gravar(int tamanho, int arranjo[])
{
    FILE *arquivo = fopen("DADOS.txt", "wt");
    for (int k = 0; k < tamanho; k++)
    {
        fprintf(arquivo, "%i\n", arranjo[k]);
    }
    fclose(arquivo);
}

void mostrar(int tamanho, int arranjo[])
{
    printf("\n");
    for (int k = 0; k < tamanho; k++)
    {
        printf("%i - %i\n", k + 1, arranjo[k]);
    }
}

void inicializar(int tamanho, int arranjo[])
{
    int x = 0;
    int k = 0;
    printf("\n");
    printf("1 - Randon\n");
    printf("2 - K*Randon\n");
    printf("3 - K*3\n");
    printf("4 - K\n");
    printf("5 - K+3*Randon\n");
    printf("6 - 1\n");
    printf("\n");
    x = IO_readint("Entre com sua opcao\n");
    printf("\n");
    srand(time(null));
    for (k = 0; k < tamanho; k++)
    {
        switch (x)
        {
        case 1:
            arranjo[k] = rand();
            break;
        case 2:
            arranjo[k] = k * rand();
            break;
        case 3:
            arranjo[k] = k * 3;
            break;
        case 4:
            arranjo[k] = k;
            break;
        case 5:
            arranjo[k] = k + 3 * rand();
            break;
        case 6:
            arranjo[k] = 1;
            break;
        default:
            arranjo[k] = 0;
            break;
        }
    }
}

void array01(int tamanho, int arranjo[])
{
    char str[80];
    int k = 0;
    int n = strlen(str);

    printf("\nInsira os caracteres desejados: ");
    scanf("%s", str);

    for (k = 0; k < n; k++)
    {
        if (str[k] >= '0' && str[k] <= '9')
        {
            if (str[k] % 2 == 0)
            {
                printf("\nValor positivo e par: %c", str[k]);
            }
        }
    }
}

void array02(int tamanho, int arranjo[])
{
    char str[80];
    int k = 0;
    int i = strlen(str);
    FILE *arquivo = fopen("DADOS.TXT", "wt");

    printf("\nInsira os caracteres desejados: ");
    scanf("%s", str);
    fprintf(arquivo, "tamanho= %i", i);

    for (k = 0; k <= i; k++)
    {
        if (str[k] >= '0' && str[k] <= '9')
        {
            if (str[k] % 2 == 0)
            {
                printf("\nValor positivo e par: %c", str[k]);
                fprintf(arquivo, "\n%c", str[k]);
            }
        }
    }
    fclose(arquivo);
}

void array03(int tamanho, int arranjo[])
{
    int x = 0;
    int y = 0;
    int n = 0;
    FILE *arquivo = fopen("DADOS.TXT", "wt");

    x = IO_readint ("\n Insira o valor inicial do intervalo: ");
    y = IO_readint("\n Insira o valor final do intervalo: ");
    n = IO_readint("\n Insira a quantidade de valores que deseja testar: ");
    srand (time(null));
    int w = rand();

    while (n >= 0)
    {
        if (x <= w && y <= w)
        {
            printf("\n%d", w);
            fprintf(arquivo, "\n%d ", w);
        }
        n = n - 1;
    }

    fclose(arquivo);
}

void array04(int tamanho, int arranjo[])
{
    int menor = arranjo[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (menor > arranjo[i])
        {
            menor = arranjo[i];
        }
    }
    printf("O menor valor do arranjo e o %d", menor);
}

void array05(int tamanho, int arranjo[])
{
    int maior = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (maior < arranjo[i])
        {
            maior = arranjo[i];
        }
    }
    printf("O maior valor do arranjo e o %d", maior);
}

void array06(int tamanho, int arranjo[])
{
    int media = 0;
    for (int i = 0; i < tamanho - 1; i++)
    {
        media = arranjo[i] + arranjo[i + 1];
    }
    printf("\nA media do arranjo e igual a: %d\n", media / tamanho);
}

void array07(int tamanho, int arranjo[])
{
    bool teste = true;
    int i = 0;
    while (teste && i < tamanho - 1)
    {
        if (arranjo[i] > arranjo[i + 1])
        {
            teste = false;
        }
        i = i + 1;
    }
    printf("\n");
    if (teste)
    {
        printf("Esta ordenado.");
    }
    else
    {
        printf("Nao esta ordenado.");
    }
    printf("\n");
}

void array08(int tamanho, int arranjo[])
{
    bool teste = false;
    int i = 0;
    int x = 0;
    x = IO_readint("Qual valor deseja procurar? ");
    while (!(teste) && i < tamanho - 1)
    {
        if (arranjo[i] == x)
        {
            teste = true;
        }
        i = i + 1;
    }
    printf("\n");
    if (teste)
    {
        printf("Valor encontrado.", x);
    }
    else
    {
        printf("Valor nao encontrado.");
    }
    printf("\n");
}

void array09(int tamanho, int arranjo[])
{
    bool teste = false;
    int i = 0;
    int x = 0;
    x = IO_readint("\nQual valor deseja procurar? ");
    while (!(teste) && i < tamanho - 1)
    {
        if (arranjo[i] == x)
        {
            teste = true;
        }
        i = i + 1;
    }
    printf("\n");
    if (teste)
    {
        printf("\nValor %d foi encontrado e esta na posicao %d do arranjo", x, i - 1);
    }
    else
    {
        printf("\nValor nao encontrado.");
    }
    printf("\n");
}

void array10(int tamanho, int arranjo[])
{
    int i = 0;
    int x = 0;
    int contador = 0;
    int guarda = 0;
    int arrayconta[MAX_SIZE];
    x = IO_readint("\nQual valor deseja procurar? ");
    while (i < tamanho)
    {
        if (arranjo[i] == x)
        {
            arrayconta[contador] = i;
            contador = contador + 1;
        }
        i = i + 1;
    }
    printf("\n");
    if (contador > 0)
    {
        if (contador == 1)
        {
            printf("\nO valor escolhido foi encontrado %d vez na posicao %d", contador, arrayconta[0]);
        }
        else
        {
            printf("\nO valor escolhido foi encontrado %d vezes nas posicoes: ", contador);
            for (int guarda = 0; guarda < contador; guarda++)
            {
                printf("%d ", arrayconta[guarda]);
            }
        }
    }
    else
    {
        printf("\nValor nao encontrado no arranjo");
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int arranjo[MAX_SIZE];
    int x = 0;
    do
    {
        printf("\n");
        printf("0 - Parar\n");
        printf("1 - Ler o tamanho de um arranjo para inteiros do teclado (Exercicio 1)\n");
        printf("2 - Ler um arranjo com inteiros positivos pares de arquivo (Exercicio 2)\n");
        printf("3 - Gerar um valor inteiro aleatoriamente dentro de um intervalo (Exercicio 3)\n");
        printf("4 - Procurar o menor valor em arranjoo (Exercicio 4)\n");
        printf("5 - Procurar o maior valor em arranjo (Exercicio 5)\n");
        printf("6 - Media de um arranjo (Exercicio 6)\n");
        printf("7 - Dizer se um arranjo esta ordenado (Exercicio 7)\n");
        printf("8 - Procurar valor em arranjo (Exercicio 8)\n");
        printf("9 - Procurar valor em arranjo e dizer em qual posicao esta (Exercicio 9)\n");
        printf("10 - Procurar valor em arranjo e dizer quantas vezes ele aparece no mesmo (Exercicio 10)\n");
        x = IO_readint("Entre com sua opcao\n");
        switch (x)
        {
        case 1:
            array01(10, arranjo);
            break;
        case 2:
            array02(10, arranjo);
            break;
        case 3:
            array03(10, arranjo);
            break;
        case 4:
            lerarquivo(10, arranjo);
            array04(10, arranjo);
            break;
        case 5:
            lerarquivo(10, arranjo);
            array05(10, arranjo);
            break;
        case 6:
            lerarquivo(10, arranjo);
            array06(10, arranjo);
            break;
        case 7:
            lerarquivo(10, arranjo);
            array07(10, arranjo);
            break;
        case 8:
            lerarquivo(10, arranjo);
            array08(10, arranjo);
            break;
        case 9:
            lerarquivo(10, arranjo);
            array09(10, arranjo);
            break;
        case 10:
            lerarquivo(10, arranjo);
            array10(10, arranjo);
            break;
        default:
            break;
        }
    } while (x != 0);
}
