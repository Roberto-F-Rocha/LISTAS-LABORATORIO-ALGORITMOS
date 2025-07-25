#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i,n1;
    for(i=0; i <= 5; i += 2){
        n1 = i + n1;
    }
    printf("a soma dos 50 primeiros números pares são %d\n", n1);
    system("pause");
   return(0);
}