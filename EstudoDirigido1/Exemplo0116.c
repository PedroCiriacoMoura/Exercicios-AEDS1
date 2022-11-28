/*
 Exemplo0116 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0116 exemplo0116.c
 Windows: gcc -o exemplo0116 exemplo0116.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0116
 Windows: exemplo0116
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Definir Dado
    double n1 = 0.0;
    double n2 = 0.0;
    double n3 = 0.0;
    double h = 0.0;
    double a = 0.0;
    double p = 0.0;

    // Identificar
    printf("%s\n", "Exemplo0116 - Programa = v0.0");
    printf("%s\n", "Autor: Pedro Moura");
    printf("\n");

    // Ler Teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &n1);
    getchar();

    // Calcular
    n3 = n1 / 2;
    n2 = n3 * n3;
    h = n3 * 1.73205 / 2;
    a = n2 * 1.73205 / 4;
    p = n3 * 3;

    // Mostrar Resultado
    printf("%s%lf%s%lf\n%s%lf\n%s%lf", "Se supormos que ", n1, " seja o dobro do lado de um triangulo equilatero entao a altura do mesmo sera: ", h, "A area: ", a, "E o perimetro: ", p);

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
*/