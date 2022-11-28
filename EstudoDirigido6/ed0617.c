#include "io.h"
float proc (int n ){
 if(n==1){

    return 1.0/7;
 }
 else return 1.0/(7 + 2*(n-1)) + proc (n-1);
}

int main(){
   
   int n = IO_readint(" Entre com um numero: ");
   float x = proc( n );
   printf("Resultado da soma= %f",x);
return 0;
}
