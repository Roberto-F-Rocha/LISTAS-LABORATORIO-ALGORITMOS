#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i, n1;
    printf("insira um número positivo: ");
    scanf("%d", &n1);
    for(i=1; i<=n1; i++){
        if(n1%i==0){
        printf("%d\n", n1/i);
        }
    }
    system("pause");
   return(0);
}