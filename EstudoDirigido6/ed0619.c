#include "io.h"
int proc (char i[],int n ){
 int x = 0;
 if(i[n] != '\0'){
 if ( '0'<= i[n]  && i[n] <= '9' && i[n] % 2 == 0 ){
    x=1;
     
 
 }
 return x+proc(i , n+1);
 }
 return 0;
  
}

int main(){
   char i[40];
    
    printf(" Entre com uma palavra: ");
    scanf("%s",i);
   int y= proc(i,0);
  printf("\nQuantidade de digitos pares:%d",y);
return 0;
}
