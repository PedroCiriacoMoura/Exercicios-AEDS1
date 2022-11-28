/*
 Exemplo0109 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0109 exemplo0109.c
 Windows: gcc -o exemplo0109 exemplo0109.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0109
 Windows: exemplo0109
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    // Definir Dado
        int x = 0;
        double y = 3.5;
        char z = 'A';
        bool w = false;

    // Definir Dados com Mais de um Valor
        char s[80] = "";

    // Identificar
        printf("%s\n", "Exemplo0109 - Programa = v0.0");
        printf("%s\n", "Autor: Pedro Moura");
        printf("\n");

    // Mostrar Valores Iniciais
        printf("01. %s%d\n", "x = ", x);
        printf("02. %s%lf\n", "y = ", y);
        printf("03. %s%c\n", "z = ", z);

    // COnverter entre tipos de dados
        x = (int)z;
        printf("04. %s%d->%c\n","x = ",x,z);
        x = (int)y;
        printf("05. %s%d->%lf\n","x = ",x,y);
        x = 97;
        z = (char)x;
        printf("06. %s%c->%d\n","z = ",z,x);
        x = (int)'0';
        z = (char)x;
        printf("07. %s%c -> %d\n","z = ",z,x);
        x = w;
        printf("08. %s%d -> %d\n","x = ",x,w);
        w = true;
        x = w;
        printf("09. %s%d -> %d\n","x = ",x,w);
        x = (w == false); 
        printf("10. %s%d -> %d\n","x = ",x,w);
        x = !(w == false);
        printf("11. %s%d -> %d\n","x = ",x,w);
        x = (w != false); 
        printf("12. %s%d -> %d\n","x = ",x,w);
        w = (x == 0); 
        printf("13. %s%d == %d = %d\n","w = ",x,0,w);
        w = (x != 0); 
        printf("14. %s%d != %d = %d\n","w = ",x,0,w);
        w = (x < y); 
        printf("15. %s%d < %lf = %d\n","w = ",x,y,w);
        w = (x <= y); 
        printf("16. %s%d <= %lf = %d\n","w = ",x,y,w);
        w = (y > x); 
        printf("17. %s%lf > %d = %d\n","w = ",y,x,w);
        w = (y >= x); 
        printf("18. %s%lf >= %d = %d\n","w = ",y,x,w);
        x = 4;
        w = (x % 2 == 0); 
        printf("19. %s (%d%%2) ? %d\n","e' par ",x,w);
        x = 4;
        w = (x % 2 != 0); 
        printf("20. %s (%d%%2) ? %d\n","e' impar ",x,w);
        z = '5';
        w = ('0' <= z && z <= '9'); 
        printf("21. %s (%c) ? %d\n","e' digito",z,w);
        z = 'x';
        w = ('a' <= z && z <= 'z'); 
        printf("22. %s (%c) ? %d\n","e' minuscula ",z,w);
        z = 'X';
        w = (!('a' <= z && z <= 'z')); 
        printf("23. %s (%c) ? %d\n","nao e' minuscula ",z,w);
        z = 'x';
        w = ('A' <= z && z <= 'Z');
        printf("24. %s (%c) ? %d\n","e' maiuscula ",z,w);
        z = 'X';
        w = ((z < 'A') || ('Z' < z)); 
        printf("25. %s (%c) ? %d\n","nao e' maiuscula ",z,w);
        z = '0';
        w = ('0' == z || '1' == z); 
        printf("26. %s (%c) ? %d\n","e' 0 ou 1 ",z,w);
        strcpy(s, "zero"); 
        printf("27. palavra = %s\n",s);
        w = (strcmp("zero", s) == 0); 
        printf("28. palavra == %s ? %d\n",s,w);
        strcpy(s, "um e dois"); 
        printf("29. palavras = %s\n",s);
        w = (strcmp("zero", s) != 0); 
        printf("30. palavra == %s ? %d\n",s,w);

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
*/
