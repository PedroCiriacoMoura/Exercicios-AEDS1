#include "io.h"
void proc (int n ){
 if(n>0){

    printf("1/%i\n" ,(int) pow(7,n) );
    proc(n-1);
 }
 else printf("1\n");
}

int main(){
   
   int n = IO_readint(" Entre com um numero: ");
   proc(n );
return 0;
}
