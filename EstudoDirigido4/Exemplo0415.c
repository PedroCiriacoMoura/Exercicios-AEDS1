/*
 Exemplo0415 - v0.0. - 15 / 04 / 2022
 Author: 779139_PEDRO_MARCELO_CIRIACO_MOURA
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0415 exemplo0415.c
 Windows: gcc -o exemplo0415 exemplo0415.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0415
 Windows: exemplo0415
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



void method02()
{
      char palavra[30];
   int x = 0;
   int qntd = 0;

   printf ("\nEscreva uma palavra:\n");
   scanf("%s",palavra);
   
   while (palavra[x] != '\0')
  {
      if ('A' <= palavra[x] && palavra[x] < 'K')
      {
          printf("\n%c",palavra [x] );
          qntd = qntd + 1;
      }
      x=x+1;
     
  }
  printf("\n quantidade de letras maiusculas menores que K: %d\n" , qntd);
  
  
}


    int funcao03(char string[])
{
    int x = 0;
    int qntd = 0;
  while (string[x] != '\0')
  {
      if ('A' <= string[x] && string[x] < 'K')
      {
          
          qntd = qntd + 1;

      }
      x=x+1;
      
  } 
  return (qntd);
}
void method03()
{   
    char *x ;
    x = IO_readstring ("Entrar com uma palavra:");
    int y = funcao03(x);
    printf("\nQuantidade de letras maiusculas menores que K: %i\n ", y);
    IO_pause("Aperte enter para terminar");
    
  
}



    int funcao04(char string[])
{
    int x = 0;
    int qntd = 0;
  while (string[x] != '\0')
  {
      if ('A' <= string[x] && string[x] < 'K')
      {
          
          printf("\n%c",string [x] );

      }
      x=x+1;
      
  } 
  return(0);
}
void method04()
{
     char *x ;
    x = IO_readstring ("Entrar com uma palavra:");
    int y = funcao04(x);
    IO_pause("Aperte enter para terminar");
    
}


int funcao05(char string[])
{
    int x = 0;
    int qntd = 0;
  while (string[x] != '\0')
  {
      if (('A' <= string[x] && string[x] < 'K' ) || ('a' <= string[x] && string[x] < 'k'   )) 
      {
          
          qntd = qntd + 1;

      }
      x=x+1;
      
  } 
  return (qntd);
}
void method05()
{   
    char *x ;
    x = IO_readstring ("Entrar com uma palavra:");
    int y = funcao05(x);
    printf("\nQuantidade de letras maiusculas e minusculas menores que K: %i\n ", y);
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
IO_println ( "2 - Contar e mostrar a quantidade de letras maiusculas menores que 'K'" );
IO_println ( "3 - Mostrar a quantidade de letras maiusculas menores que 'K' contadas por uma funcao definida para receber uma cadeia de caracteres como parametro." );
IO_println ( "4 - Mostrar as letras maiusculas menores que 'K' separadas por uma funcao definida para receber uma cadeia de caracteres como parametro." );
IO_println ( "5 - Mostrar a quantidade de letras menores que 'K' e 'k' contadas por uma funcao definida para receber uma cadeia de caracteres como parametro." );

x = IO_readint ( "Entrar com uma opcao: " );
 
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
case 5:
method05();
break;

IO_println ( "ERRO: Valor invalido." );
}
}
while ( x != 0 );
 
IO_pause ( "Apertar ENTER para terminar" );
return (0);
}