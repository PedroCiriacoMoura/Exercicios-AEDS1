/*
 Exemplo0411 - v0.0. - 15 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0411 exemplo0411.c
 Windows: gcc -o exemplo0411 exemplo0411.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0411
 Windows: exemplo0411
*/

#include "io.h"
void method00()
{ 
} 



void method01()
{   
  double a = 0;
    double b = 0;
    double n = 0;
    double z = 0;
    
    
    
    printf("\nEntrar com o primeiro limite do intervalo: ");
    scanf("%lf", &a);
 
    printf("\nEntrar com o segundo limite do intervalo: ");  
    scanf("%lf", &b);
 
    printf("\n quantidades de valores a ser testados: ");
    scanf("%lf", &n);
 
    for(z = 1 ; z <= n ;z= z + 1 )
    {
       double x = IO_readdouble("\nz = ");
       if ( x >= a &&  x <= b)
       {
           printf("\nEsse numero esta dentro do intervalo.\n ");
       }
       else{
           printf("\nEsse numero esta fora do intervalo\n");
       }
       
 
    }
    IO_pause("Aperte enter para terminar");
  
}

int main ()
{
int x = 0; 
 
do
{
IO_println ( "EXEMPLO0401 - Programa - v0.0" );
 
IO_println ( "Opcoes" );
IO_println ( "0 - parar" );
IO_println ( "1 - Contar quantos desses valores estao dentro do intervalo estabelecido pelos primeiros dois numeros, e quantos estao fora dele" );

x = IO_readint ( "Entrar com uma opcao: " );
 
switch (x)
{
case 0:
method00();
break;
case 1:
method01();
break;

IO_println ( "ERRO: Valor invalido." );
}
}
while ( x != 0 );
 
IO_pause ( "Apertar ENTER para terminar" );
return (0);
}