/*
 exemplo0717 - v0.0. - 02 / 05 / 2022
 Author: 779139 - Pedro Marcelo Ciriaco Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0717 exemplo0717.c
 Windows: gcc -o exemplo0717 exemplo0717.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0717
 Windows: exemplo0717
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

int funcao05 (int n, int m){
    int poten = 0;
    if (n>0) {
    n = 2*n-1;
    poten = pow (m,n);
    return (poten);
    }else{
    poten = pow (m,n);
    return (poten);
    }
}
void method05 () {
    int x = 0;
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = 0;i<x;i++){
    int y = funcao05 (i, x);
    printf ("1/%i, ", y);    
    }
    printf ("}");
}


void method06 () {
    int x = 0;
    double soma = 0;
    FILE* arquivo = fopen ( "RESULTADO06.TXT", "wt" );
    x = IO_readint ("Entre com um numero inteiro: ");
    for (int i = 0;i<x;i++){
    double y = funcao05 (i, x);
    soma = 1/y;
    fprintf (arquivo, "1/%lf = %.30lf\n ", y, soma);
    printf ("(1/%lf = %lf)\n", y, soma); 
    if (i<x-1){
        printf (" + ");
    }  
    }
    printf (" = %lf", soma);
    fclose ( arquivo );
}


int funcao07 (int n){
    int poten = 0;
    poten = pow (3,n);
    return (poten);
}
void method07 () {
    int x = 0;
    double soma = 0;
    double soma2 = 0;
    FILE* arquivo = fopen ( "RESULTADO07.TXT", "wt" );
    x = IO_readint ("Entre com um numero inteiro: ");
    printf ("{ ");
    for (int i = x-1;i>=0;i=i-1){
    int y = funcao04 (i);
    printf ("1/%i, ", y); 
    soma = 1.0/y;
    soma2 = soma2 + soma;
    fprintf (arquivo, "1/%i + 1/%lf = %lf\n ", y, soma, soma2);   
    }
    printf ("}");
    fclose ( arquivo );
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
        IO_println("5 - ");
        IO_println("6 - ");
        IO_println("7 - ");
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
        case 5:
            method05();
            break;
        case 6:
            method06();
            break;
        case 7:
            method07();
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
}