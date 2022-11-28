/*
 exemplo0714 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0714 exemplo0714.c
 Windows: gcc -o exemplo0714 exemplo0714.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0714
 Windows: exemplo0714
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

int funcao03 (int n){
    int poten = 0;
    poten = pow (5,n);
    return (poten);
}
void method03 () {
    int x = 0;
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = 0;i<x;i++){
    int y = funcao03 (i);
    printf ("%i, ", y);    
    }
    printf ("}");
}

int funcao04 (int n){
    int poten = 0;
    poten = pow (3,n);
    return (poten);
}
void method04 () {
    int x = 0;
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = x-1;i>=0;i=i-1){
    int y = funcao04 (i);
    printf ("1/%i, ", y);    
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
        IO_println("3 - ");
        IO_println("4 - ");
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
        case 3:
            method03();
            break;
        case 4:
            method04();
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
}