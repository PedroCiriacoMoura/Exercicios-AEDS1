/*
 Exemplo0511 - v0.0. - 09 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0511 exemplo0511.c
 Windows: gcc -o exemplo0511 exemplo0511.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0511
 Windows: exemplo0511
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
    x =  IO_readint ("Qual a quantidade de valores multiplos de 7 voce quer ver? ");
    printf ("{ ");
    for (i = 0; i < x; i++){
    y = funcao01(i);
    printf ("%d ", y);
    }
    printf ("}");
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
        IO_println("1 - Mostrar a quantidade escolhida em valores múltiplos de 7 em ordem crescente.");
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
        default:
            IO_pause(IO_concat("Valor diferente das opcoes",
            IO_concat(IO_toString_d(x), ")")));
        }
    } while (x != 0);
    IO_pause("Apertar ENTER para terminar");
    return (0);
} 