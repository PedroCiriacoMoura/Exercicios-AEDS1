#include "io.h"
void proc (char i[],int n ){
 if (i[n] != '\0'){

    printf("%c\n" , i[n] );
    proc(i , n+1);
 }
}

int main(){
   char i[40];
    printf(" Entre com uma palavra: ");
    scanf("%s",i);
   proc(i,0 );
return 0;
}
