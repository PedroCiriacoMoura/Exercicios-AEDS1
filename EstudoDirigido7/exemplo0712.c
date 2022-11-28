/*
 exemplo0712 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0712 exemplo0712.c
 Windows: gcc -o exemplo0712 exemplo0712.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0712
 Windows: exemplo0712
*/

#include <stdio.h>
#include <math.h>
#include "io.h"
#include <string.h>

void method00 () {

}

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

int funcao02 (int n){
    n = n*2;
    int poten = 3*n;
    return (poten);
}
void method02 () {
    int x = 0;
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = x;i>0;i=i-1){
    int y = funcao02 (i);
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
        IO_println("2 - ");
        x = IO_readint("Entrar com uma opcao: ");

        switch (x)
        {
        case 0:
            method00 ();
            break;
        case 1:
            method01();
            break;
        case 2:
            method02();
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
}