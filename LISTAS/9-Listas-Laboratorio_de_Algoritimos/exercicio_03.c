#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int n1, i;
    printf("insira um n�mero inteiro positivo: ");
    scanf("%i", &n1);
    
    for(i=0; i<=n1; i++){
        printf("%d\n", i);
    }
    system("pause");
   return(0);
}