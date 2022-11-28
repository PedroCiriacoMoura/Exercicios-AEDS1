/*
 Exemplo0112 - v0.0. - 11 / 03 / 2022
 Author: Pedro Moura

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0112 exemplo0112.c
 Windows: gcc -o exemplo0112 exemplo0112.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0112
 Windows: exemplo0112
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Definir Dado
    int t = 0;
    int x = 0; 
    int a= 0;  
    int p = 0;

    // Identificar
    printf ( "%s\n", "Exemplo0112 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Pedro Moura" );
    printf ( "\n" ); 
    
    //Ler Teclado    
    printf ( "Entrar com um valor inteiro: " );
    scanf ( "%d", &t );
    getchar ();

    //Calcular
    x = t*3;
    a = x*x;
    p = x*4;

    //Mostrar Resultado
    printf ("%s%i%s%i\n%s%i", "Se supormos que ", t, " e 1/3 do lado de um quadrado, o resultado aproximado ou exado da area do mesmo sera: ", a, "e o perimetro: ", p);

    // Encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar( ); 
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
*/