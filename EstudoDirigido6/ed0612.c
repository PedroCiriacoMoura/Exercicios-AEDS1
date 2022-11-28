#include "io.h"
void proc (int n ){
 if(n>0){

    printf("%i\n" , 7*n );
    proc(n-1);
 }
}

int main(){
   
   int n = IO_readint(" Entre com um numero: ");
   proc(n );
return 0;
}
