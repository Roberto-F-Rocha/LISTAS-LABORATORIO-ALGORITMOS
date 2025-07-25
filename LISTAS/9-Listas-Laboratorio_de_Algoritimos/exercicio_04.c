#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int n1, i;
    printf("insira um número inteiro positivo: ");
    scanf("%d", &n1);
    
    for(i=n1; i>=0; i--){
        printf("%d\n", i);
    }
    system("pause");
    return(0);
}