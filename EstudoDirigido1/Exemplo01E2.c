/*
 Exemplo01E2 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo01E2 exemplo01E2.c
 Windows: gcc -o exemplo01E2 exemplo01E2.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo01E2
 Windows: exemplo01E2
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    // Definir Dado
    double n1 = 0.0;
    double n2 = 0.0;
    double n3 = 0.0;
    double n4 = 0.0;
    double r = 0.0;
    double r2 = 0.0;
    double a = 0.0;


    // Identificar
    printf("%s\n", "Exemplo01E2 - Programa = v0.0");
    printf("%s\n", "Autor: Pedro Moura");
    printf("\n");

    // Ler Teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &n1);
    getchar();


    // Calcular
    //Raio
    n2 = n1/2;
    n3 = n2/M_PI;
    n4 = n3*0.75;
    r = pow(n4,1.0/3.0);
    //Área da Superfície
    r2=r*r;
    a = 4*M_PI*r2;

    // Mostrar Resultado
    printf("%s%lf%s%lf\n%s%lf", "Supondo que ", n1, " seja o dobro do volume de um esfera entao seu raio sera: ", r, "E a area da sua superficie: ", a);

    // Encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}
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
    E.2 12/03 mudanca de versao
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
    E.2 01. ( OK ) identificacao de programa
*/