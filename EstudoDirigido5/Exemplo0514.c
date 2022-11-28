/*
 Exemplo0514 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0514 exemplo0514.c
 Windows: gcc -o exemplo0514 exemplo0514.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0514
 Windows: exemplo0514
*/

#include "io.h" // para definicoes proprias

void method00()
{
}

int funcao01(int z)
{
    int sete = 7;
    z = z + 1;
    sete = sete * z;
    return (sete);
}
void method01()
{
    int i = 0;
    int y = 0;
    int x = 0;
    x = IO_readint("Qual a quantidade de valores multiplos de 7 voce quer ver? ");
    printf("{ ");
    for (i = 0; i < x; i++)
    {
        y = funcao01(i);
        printf("%d ", y);
    }
    printf("}");
    IO_pause("Apertar ENTER para continuar");
}

void method02()
{
    int y = 0;
    int x = 0;
    int n = 0;
    x = IO_readint("Qual a quantidade de valores multiplos de 7 pares voce quer ver? ");
    printf("{ ");
    n = x *2;
    for (int i = 1; i <= n; i = i + 2 )
    {
        y = funcao01(i);
            printf("%d ", y);
    }
    printf("}");
    IO_pause("Apertar ENTER para continuar");
}

int funcao03(int z)
{
    int sete = 7;
    z = z - 1;
    sete = sete * z;
    return (sete);
}

void method03()
{
    int y = 0;
    int x = 0;
    int n = 0;
    x = IO_readint("Qual a quantidade de valores multiplos de 7 voce quer ver? ");
    printf("{ ");
    n = x *2;
    for (int i = n; i > 0; i = i - 2 )
    {
        y = funcao03(i);
            printf("%d ", y);
    }
    printf("}");
    IO_pause("Apertar ENTER para continuar");
}

void method04()
{
    int i = 0;
    int y = 0;
    int x = 0;
    x = IO_readint("Qual a quantidade de valores multiplos de 7 voce quer ver? ");
    printf("{ ");
    for (i = 0; i < x; i++)
    {
        y = funcao01(i);
        printf("1/%d ", y);
    }
    printf("}");
    IO_pause("Apertar ENTER para continuar");
}


int main()
{
    int x = 0;
    do
    {
        IO_id("EXEMPLO0511 - Programa - v0.0");
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - Mostrar a quantidade escolhida em valores multiplos de 7 em ordem crescente.");
        IO_println("2 - Mostrar a quantidade escolhida em valores multiplos de 7 pares em ordem crescente."); 
        IO_println("3 - Mostrar a quantidade em valores ímpares multiplos de 7 em ordem decrescente");
        IO_println("4 - Mostrar a quantidade escolhida em valores crescentes nos denominadores multiplos de 7");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        switch (x)
        {
        case 0:
            method00();
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
            IO_pause(IO_concat("Valor diferente das opcoes",
                               IO_concat(IO_toString_d(x), ")")));
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
}