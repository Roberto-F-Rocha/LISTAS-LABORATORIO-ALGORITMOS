#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i,n1=0;
    for(i=1; i<=1000; i++){
        if(i%3==0 || i%5==0){
            n1 = n1 + i;
        }
    }
    printf("a soma de todos os n�meros multiplos de 3 e 5 abaixo de 1000 � %d\n", n1);
    system ("pause");
    return 0;
}