/*
 Exemplo01E1 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo01E1 exemplo01E1.c
 Windows: gcc -o exemplo01E1 exemplo01E1.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo01E1
 Windows: exemplo01E1
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    
    int n = 1;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j<= i; j++)
        {
                n++;
        }
    }
    printf ("%d", n);
}

/*int x = 2;
int i = 1;
while (x<=1000)
{
    x = x*x;
    i = i + 1;
}
printf ("%d", i);
}*/
/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 11/03 esboco
    0.2 11/03 mudanca de versao
    0.3 11/03 mudanca de versao
    0.4 11/03 mudanca de versao
    0.5 11/03 mudanca de versao
    0.6 11/03 mudanca de versao
    0.7 11/03 mudanca de versao
    0.8 11/03 mudanca de versao
    0.9 11/03 mudanca de versao
    1.0 11/03 mudanca de versao
    1.1 11/03 mudanca de versao
    1.2 11/03 mudanca de versao
    1.3 11/03 mudanca de versao
    1.4 11/03 mudanca de versao
    1.5 12/03 mudanca de versao
    1.6 12/03 mudanca de versao
    1.7 12/03 mudanca de versao
    1.8 12/03 mudanca de versao
    1.9 12/03 mudanca de versao
    2.0 12/03 mudanca de versao
    E.1 12/03 mudanca de versao
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
                    leitura e exibicao de inteiro
    0.2 01. ( OK ) identificacao de programa
                    leitura e exibicao de real
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