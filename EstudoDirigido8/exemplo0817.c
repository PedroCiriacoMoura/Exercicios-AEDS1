/*
 exemplo0817 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0817 exemplo0817.c
 Windows: gcc -o exemplo0817 exemplo0817.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0817
 Windows: exemplo0817
*/

#include <stdio.h>
#include <math.h>
#include "io.h"
#include <string.h>
const int MAX_SIZE = 100;

void array04 (int tamanho, int arranjo [])
{
    FILE *arquivo = fopen ("array.txt", "rt");
    for (int k = 0;k<tamanho;k++)
    {
        fscanf (arquivo, "%i", &arranjo[k]);
    }
    fclose (arquivo);
}

void array03 (int tamanho, int arranjo [])
{
    FILE *arquivo = fopen ("array.txt", "wt");
    for (int k = 0;k<tamanho;k++)
    {
        fprintf (arquivo, "%i\n", arranjo[k]);
    }
    fclose (arquivo);
}

void array02 (int tamanho, int arranjo [])
{
    printf ("\n");
    for (int k = 0; k<tamanho; k++)
    {
        printf ("%i - %i\n", k+1, arranjo[k]);
    }
}

void array01 (int tamanho, int arranjo [])
{
    int x = 0;
    int k = 0;
            printf ("\n");
            printf ("1 - Randon\n");
            printf ("2 - K*Randon\n");
            printf ("3 - K*3\n");
            printf ("4 - K\n");
            printf ("5 - K+3*Randon\n");
            printf ("\n");
    x = IO_readint("Entre com sua opcao\n");
    printf ("\n");
    for (k = 0; k<tamanho;k++)
    {
            switch (x)
            {
            case 1:
                arranjo[k] = rand() ; break;
            case 2:
                arranjo[k] = k*rand() ; break;
            case 3:
                arranjo[k] = k*3 ; break;
            case 4:
                arranjo[k] = k ; break;
            case 5:
                arranjo[k] = k+3*rand(); break;
            default: arranjo[k] = 0; break;
            }
    }
}

void array06 (int tamanho, int arranjo [])
{
    int media = 0;
    for (int i = 0; i<tamanho-1; i++)
    {
        media = arranjo [i] + arranjo [i+1];
    }
    printf ("\nA media do arranjo e igual a: %d\n", media/tamanho);
}

void array07 (int tamanho, int arranjo [])
{
    bool teste = true;
    int i = 0;
    while (teste && i < tamanho-1)
    {
       if (arranjo [i] > arranjo [i+1]){
           teste = false;
           printf ("%d\t %d\n", teste, i);
       }
       i = i + 1;
    } 
    printf ("\n");
    if (teste)
    {
        printf ("Esta ordenado.");
    }else{
        printf ("Nao esta ordenado.");
    }
    printf ("\n");

}

int main(int argc, char *argv[])
{
    int arranjo [MAX_SIZE];
    int x = 0;
    do
    {
        printf ("\n");
        printf ("0 - Parar\n");
        printf ("1 - Inicializar\n");
        printf ("2 - Mostrar\n");
        printf ("3 - gravar\n");
        printf ("4 - Ler de arquivo\n");
        printf ("6 - Media de um arranjo\n");
        printf ("7 - Dizer se um arranjo esta ordenado\n");
        x = IO_readint("Entre com sua opcao\n");
        switch (x)
        {
        case 1: 
        array01 (10, arranjo);
            break;
        case 2: 
        array02 (10, arranjo);
            break;
        case 3: 
        array03 (10, arranjo);
            break;
        case 4: 
        array04 (10, arranjo);
        case 6: 
        array06 (10, arranjo);
            break;
        case 7: 
        array07 (10, arranjo);
            break;
        default:
            break;
        }
    } while (x != 0);
}
