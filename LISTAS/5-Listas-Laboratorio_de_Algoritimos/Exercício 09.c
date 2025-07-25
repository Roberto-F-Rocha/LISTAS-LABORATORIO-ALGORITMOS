#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1 = 0;
    
    printf("digite um número: ");
    
    scanf("%i", &n1);
    
    printf("antecessor %i sucessor %i\n\n", n1-1, n1+1);
    
    system("pause");
   return(0);
}