#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i, n1, cont=0;
    printf("\n \\/ primo ou n�o? \\/informe um n�mero inteiro maior que 1: ");
    scanf("%d", &n1);
    for(i=1; i<=n1; i++){
        if(n1%i==0){
            cont++;
        }
    }if(cont<=2){
    printf("seu n�mero � primo\n");
    }else
        printf("seu n�mero n�o � primo\n");
    system("pause");
   return(0);
}