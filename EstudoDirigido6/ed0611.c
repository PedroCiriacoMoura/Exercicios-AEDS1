#include "io.h"
void proc (int i,int n ){
 if(n>0){

    printf("%i\n" , i );
    proc(i+2 , n-1);
 }
}

int main(){
   int i=7;
   int n = IO_readint(" Entre com um numero: ");
   proc(i,n );
return 0;
}
