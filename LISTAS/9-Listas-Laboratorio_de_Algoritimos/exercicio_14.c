#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i, n, n1 = 0, n2 = 1, n3 = 1;
    printf("\n\t \\/ Fibonacci \\/\n\n informe um número inteiro: ");
    scanf("%d", &n);
    
    printf("%d\n", n1);
    for(i=6; i<=n; i++){
        if(n%1==0 && i==n){
            printf("%d\n",n3);
            n1 = n2+n3;
            return 0;
        }printf("%d\n",n3);
        n1 = n2+n3;
        printf("%d\n", n2);
        n2 = n1+n2;
        n3 = n1;
    }
    system("pause");
   return(0);
}