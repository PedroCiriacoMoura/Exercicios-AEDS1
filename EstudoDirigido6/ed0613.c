#include "io.h"
void proc (int i,int n ){
 if(n>0){

    printf("%i\n" , i );
    proc(i+7 , n-1);
 }
}

int main(){
   int i=7;
   int n = IO_readint(" Entre com um numero: ");
   printf("1\n");
   proc(i,n );
return 0;
}
