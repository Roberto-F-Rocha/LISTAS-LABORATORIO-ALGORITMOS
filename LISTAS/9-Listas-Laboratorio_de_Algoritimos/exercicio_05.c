#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i,n1;
    float soma;
    for(i=1; i<=10; i++){
        printf("insira o um número: ", i);
        scanf("%d", &n1);
        soma = soma + n1;
    }
    printf("\nmédia dos números digitados: %.1f\n", soma/10);
    system("pause");
   return(0);
}