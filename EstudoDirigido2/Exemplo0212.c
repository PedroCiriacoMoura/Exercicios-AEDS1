/*
 Exemplo0212 - v0.0. - 03 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0212 exemplo0212.c
 Windows: gcc -o exemplo0212 exemplo0212.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0212
 Windows: exemplo0212
*/
// dependencias
#include "io.h"

int main()
{
    int x = 0;
    x = IO_readint("Entre com um valor inteiro: ");
    if (x % 2 == 0)
    {
        if (x > -30){
            printf("%i e um numero par maior que -30", x);
        } else {
            printf("%i e um numero par menor ou igual a -30", x);
        }   
    }
    else
    {
        if (x < 30){
            printf("%i e um numero impar menor que 30", x);
        } else {
            printf("%i e um numero impar maior que 30", x);
        } 
    }
}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 03/04 esboco
 0.2 03/04 esboco
 0.3 03/04 esboco
 0.4 03/04 esboco
 0.5 03/04 esboco
 0.6 03/04 esboco
 0.7 03/04 esboco
 0.8 03/04 esboco
 0.9 03/04 esboco
 1.0 03/04 esboco
 1.1 03/04 esboco
 1.2 03/04 esboco
---------------------------------------------- testes
Versao Teste
 0.1    01. ( OK ) identificacao de programa
 0.2    01. ( OK ) identificacao de programa
 0.3    01. ( OK ) identificacao de programa
 0.4    01. ( OK ) identificacao de programa
 0.5    01. ( OK ) identificacao de programa
 0.6    01. ( OK ) identificacao de programa
 0.7    01. ( OK ) identificacao de programa
 0.8    01. ( OK ) identificacao de programa
 0.9    01. ( OK ) identificacao de programa
 1.0    01. ( OK ) identificacao de programa
 1.1    01. ( OK ) identificacao de programa
 1.2    01. ( OK ) identificacao de programa
*/