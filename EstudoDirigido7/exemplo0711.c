/*
 exemplo0711 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0711 exemplo0711.c
 Windows: gcc -o exemplo0711 exemplo0711.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0711
 Windows: exemplo0711
*/

#include <stdio.h>
#include <math.h>
#include "io.h"
#include <string.h>

int funcao01 (int n){
    n = 2*n-1;
    int poten = 3*n;
    return (poten);
}
void method01 () {
    int x = 0;
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = 1;i<=x;i++){
    int y = funcao01 (i);
    printf ("%i, ", y);    
    }
    printf ("}");
}

int main (int argc, char *argv[]) {
    int x = 0;
    do
    {
        IO_println("\nProva 1");

        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - ");
        x = IO_readint("Entrar com uma opcao: ");

        switch (x)
        {
        case 0:
            break;
        case 1:
            method01();
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
}