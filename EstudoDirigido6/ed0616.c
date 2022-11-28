#include "io.h"
int proc (int n ){
 if(n==1){

    return 7;
 }
 else return 7 + 2*(n-1) + proc (n-1);
}

int main(){
   
   int n = IO_readint(" Entre com um numero: ");
   int x = proc( n );
   printf("Resultado da soma= %i",x);
return 0;
}
