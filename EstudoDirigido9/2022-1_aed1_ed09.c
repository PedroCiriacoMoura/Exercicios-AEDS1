/*
 2022-1_aed1_ed09 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 2022-1_aed1_ed09 2022-1_aed1_ed09.c
 Windows: gcc -o 2022-1_aed1_ed09 2022-1_aed1_ed09.c
 Para executar em terminal (janela de comandos):
 Linux : ./2022-1_aed1_ed09
 Windows: 2022-1_aed1_ed09
*/

#include <stdio.h>
#include <math.h>
#include "io.h"
#include <string.h>
#ifndef __IO_REFS__
#define __IO_REFS__

#define null NULL

#define addr(p) (&p)
#define ref *
#define deref (*(p))

#define var &
#endif

typedef struct m_int
{
    int x;
    int y;
    int rows;
    int columns;
    int **data;
} m_INTS;

typedef m_INTS *
    ref_M_INTS;

ref_M_INTS m_INTS_fprintf(ref_M_INTS copia)
{
    FILE *arquivo = fopen("matriz.txt", "wt");
    if (copia && copia->data)
    {
        fprintf(arquivo, "%i\n", copia->rows);
        fprintf(arquivo, "%i\n", copia->columns);
        for (copia->x = 0; copia->x < copia->rows; copia->x++)
        {
            for (copia->y = 0; copia->y < copia->columns; copia->y++)
            {
                fprintf(arquivo, "%i ", copia->data[copia->x][copia->y]);
            }
            fprintf(arquivo, "\n");
        }
    }
    fclose(arquivo);
}

ref_M_INTS m_INTS_print(ref_M_INTS copia)
{
    if (copia && copia->data)
    {
        for (copia->x = 0; copia->x < copia->rows; copia->x++)
        {
            for (copia->y = 0; copia->y < copia->columns; copia->y++)
            {
                printf("%d ", copia->data[copia->x][copia->y]);
            }
            printf("\n");
        }
    }
}

ref_M_INTS m_INTS_inic(ref_M_INTS copia)
{
    if (copia && copia->data)
    {
        for (copia->x = 0; copia->x < copia->rows; copia->x++)
        {
            for (copia->y = 0; copia->y < copia->columns; copia->y++)
            {
                printf("\n[%d][%d] = ", copia->x + 1, copia->y + 1);
                copia->data[copia->x][copia->y] = IO_readint("");
            }
        }
        printf("\n");
    }
    return (copia);
}

ref_M_INTS m_INTSnewprinc(int ref rows, int ref columns)
{
    ref_M_INTS copia;
    bool OK = true;
    int linhas = IO_readint("\nEntre com o numero de linhas: ");
    int colunas = IO_readint("\nAgora com o numero de colunas: ");
    if (linhas > 0 && colunas > 0)
    {
        copia = (ref_M_INTS)malloc(1 * sizeof(m_INTS));
    }
    else
    {
        printf("\n(m_INTS_new) ERRO: NUMERO INVALIDO DE LINHAS E COLUNAS");
    }
    if (copia)
    {
        copia->x = 0;
        copia->y = 0;
        copia->rows = linhas;
        copia->columns = colunas;
        copia->data = (int **)malloc(linhas * sizeof(int *));

        for (copia->x = 0; copia->x < linhas; copia->x++)
        {
            copia->data[copia->x] = (int *)malloc(colunas * sizeof(int));
            OK = OK && (copia->data[copia->x]);
        }
        if (OK)
        {
            (*(rows)) = linhas;
            (*(columns)) = colunas;
            return (copia);
        }
        else
        {
            printf("\n(m_INTS_new) ERRO: PROBLEMA NA ALOCACAO DE DADOS");
        }
    }
}

ref_M_INTS m_INTS_newscan(int linhas, int colunas)
{
    ref_M_INTS copia;
    bool OK = true;
    copia = (ref_M_INTS)malloc(1 * sizeof(m_INTS));
    if (linhas > 0 && colunas > 0)
    {
        copia->x = 0;
        copia->y = 0;
        copia->rows = linhas;
        copia->columns = colunas;
        copia->data = (int **)malloc(linhas * sizeof(int *));

        for (copia->x = 0; copia->x < linhas; copia->x = copia->x + 1)
        {
            copia->data[copia->x] = (int *)malloc(colunas * sizeof(int));
            OK = OK && (copia->data[copia->x]);
        }
        if (!OK)
        {
            printf("\n(m_INTS_new_scan) ERRO: PROBLEMA NA ALOCACAO DE DADOS");
        }
    }
    else
    {
        printf("\n(m_INTS_new_scan) ERRO: NUMERO INVALIDO DE LINHAS E COLUNAS");
    }
    return (copia);
}

ref_M_INTS m_INTS_fscanf()
{
    int linhas = 0;
    int colunas = 0;
    FILE *arquivo = fopen("matriz.txt", "r");
    fscanf(arquivo, "%d", &linhas);
    fscanf(arquivo, "%d", &colunas);
    ref_M_INTS copia;
    copia = m_INTS_newscan(linhas, colunas);
    if (copia && copia->data)
    {
        if (copia->columns > 0 && copia->rows > 0)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x = copia->x + 1)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y = copia->y + 1)
                {
                    fscanf(arquivo, "%d", &copia->data[copia->x][copia->y]);
                }
            }
        }
        else
        {
            printf("(INTS_fscanf) ERRO: VALORES INVALIDOS NO ARQUIVO.\n");
        }
    }
    fclose(arquivo);
    return (copia);
}

ref_M_INTS m_INTS_d_principal(ref_M_INTS copia)
{
    printf ("DIAGONAL PRINCIPAL: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x++)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y++)
                {
                    if (copia->x == copia->y)
                    {
                        printf("%d ", copia->data[copia->x][copia->y]);
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_secundaria(ref_M_INTS copia)
{
    printf ("DIAGONAL SECUNDARIA: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (int x = 0; x < copia ->rows; x++)
            {
            for (int i = 0; i < copia->columns; i++)
            {
                if (x+i==copia -> rows -1){
                printf("%d ", copia->data[x][i]);
                }else{
                    printf("* ");    
                }
            }
            printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_principal_acima(ref_M_INTS copia)
{
    printf ("DIAGONAL PRINCIPAL: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x++)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y++)
                {
                    if (copia->x <= copia->y)
                    {
                        printf("%d ", copia->data[copia->x][copia->y]);
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_principal_abaixo(ref_M_INTS copia)
{
    printf ("DIAGONAL PRINCIPAL: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x++)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y++)
                {
                    if (copia->x >= copia->y)
                    {
                        printf("%d ", copia->data[copia->x][copia->y]);
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_secundaria_acima(ref_M_INTS copia)
{
    printf ("DIAGONAL SECUNDARIA: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (int x = 0; x < copia ->rows; x++)
            {
            for (int i = 0; i < copia->columns; i++)
            {
                if (x+i<=copia -> rows -1){
                printf("%d ", copia->data[x][i]);
                }else{
                    printf("* ");    
                }
            }
            printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_secundaria_abaixo(ref_M_INTS copia)
{
    printf ("DIAGONAL SECUNDARIA: \n");
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (int x = 0; x < copia ->rows; x++)
            {
            for (int i = 0; i < copia->columns; i++)
            {
                if (x+i>=copia -> rows -1){
                printf("%d ", copia->data[x][i]);
                }else{
                    printf("* ");    
                }
            }
            printf("\n");
            }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_principalzeroab(ref_M_INTS copia)
{
    printf ("DIAGONAL PRINCIPAL: \n");
    bool zero = true;
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x++)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y++)
                {
                    if (copia->x >= copia->y)
                    {
                        printf("%d ", copia->data[copia->x][copia->y]);
                        zero = zero && copia->data[copia->x][copia->y] == 0;
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        if (zero)
        {
            printf ("\nTodos os numeros abaixo da diagonal principal sao zeros.\n");
        }else{
            printf ("\nNao sao todos os numeros abaixo da diagonal principal que sao zeros.\n");
        }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_d_principalzeroacima(ref_M_INTS copia)
{
    printf ("DIAGONAL PRINCIPAL: \n");
    bool zero = true;
    if (copia && copia->data)
    {
        if (copia->x == copia->y)
        {
            for (copia->x = 0; copia->x < copia->rows; copia->x++)
            {
                for (copia->y = 0; copia->y < copia->columns; copia->y++)
                {
                    if (copia->x <= copia->y)
                    {
                        printf("%d ", copia->data[copia->x][copia->y]);
                        zero = zero && copia->data[copia->x][copia->y] == 0;
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        if (zero)
        {
            printf ("\nTodos os numeros acima da diagonal principal sao zeros.\n");
        }else{
            printf ("\nNao sao todos os numeros acima da diagonal principal que sao zeros.\n");
        }
        }else{
            printf ("ERRO: A MATRIZ NAO E QUADRADA. \n");
        }
    }
}

ref_M_INTS m_INTS_inicdecrescente(ref_M_INTS copia)
{
    if (copia && copia->data)
    {
        int x = copia -> rows*copia -> columns;
        for (copia->x = 0; copia->x < copia->rows; copia->x++)
        {
            for (copia->y = 0; copia->y < copia->columns; copia->y++)
            {
                copia->data [copia->x][copia->y] = x;
                x = x - 1;
            }
        }
        printf("\n");
    }
    return (copia);
}

ref_M_INTS m_INTS_matrizinvertida(ref_M_INTS copia)
{
    if (copia && copia->data)
    {
        int x = copia -> rows*copia -> columns;
        for (copia->x = 0; copia->x < copia->rows; copia->x++)
        {
            for (copia->y = 0; copia->y < copia->columns; copia->y++)
            {
                copia->data [copia->y][copia->x] = x;
                x = x - 1;
            }
        }
        printf("\n");
    }
    return (copia);
}

int main(int argc, char *argv[])
{
    int x = 0;
    int rows = 0;
    int columns = 0;
    ref_M_INTS matriz;
    do
    {
        printf("\n");
        printf("0 - Parar\n");
        printf("1 - Criar (EXERCICIO 1)\n");
        printf("2 - Mostrar (EXERCICIO 1)\n");
        printf("3 - Gravar em arquivo (EXERCICIO 2)\n");
        printf("4 - Ler de arquivo (EXERCICIO 2)\n");
        printf("5 - Mostrar valores da diagonal principal da matriz (EXERCICIO 3)\n");
        printf("6 - Mostrar valores da diagonal secundaria da matriz (EXERCICIO 4)\n");
        printf("7 - Mostrar valores abaixo e na diagonal principal da matriz (EXERCICIO 5)\n");
        printf("8 - Mostrar valores acima e na diagonal principal da matriz (EXERCICIO 6)\n");
        printf("9 - Mostrar valores abaixo e na diagonal secundaria da matriz (EXERCICIO 7)\n");
        printf("10 - Mostrar valores acima e na diagonal secundaria da matriz (EXERCICIO 8)\n");
        printf("11 - Testar se nao sao todos zeros os valores abaixo da diagonal principal da matriz (EXERCICIO 9)\n");
        printf("12 - Testar se  sao todos zeros os valores acima da diagonal principal da matriz (EXERCICIO 10)\n");
        printf("13 - (TAREFA EXTRA 01)\n");
        printf("14 - (TAREFA EXTRA 02)\n");
        x = IO_readint("Entre com sua opcao\n");
        switch (x)
        {
        case 1:
            matriz = m_INTSnewprinc(&rows, &columns);
            matriz = m_INTS_inic(matriz);
            break;
        case 2:
            m_INTS_print(matriz);
            break;
        case 3:
            m_INTS_fprintf(matriz);
            break;
        case 4:
            matriz = m_INTS_fscanf();
            break;
        case 5:
            m_INTS_d_principal(matriz);
            break;
        case 6:
            m_INTS_d_secundaria(matriz);
            break;
        case 7:
            m_INTS_d_principal_abaixo(matriz);
            break;
        case 8:
            m_INTS_d_principal_acima(matriz);
            break;
        case 9:
            m_INTS_d_secundaria_abaixo(matriz);
            break;
        case 10:
            m_INTS_d_secundaria_acima(matriz);
            break;
        case 11:
            m_INTS_d_principalzeroab(matriz);  
            break;
        case 12:
            m_INTS_d_principalzeroacima(matriz); 
            break;
        case 13:
            matriz = m_INTSnewprinc(&rows, &columns);
            matriz = m_INTS_inicdecrescente(matriz);
            m_INTS_fprintf(matriz);
            m_INTS_print(matriz);
            break;
        case 14:
            matriz = m_INTSnewprinc(&rows, &columns);
            matriz = m_INTS_matrizinvertida(matriz);
            m_INTS_fprintf(matriz);
            m_INTS_print(matriz);
            break;
        }
    } while (x != 0);
}
