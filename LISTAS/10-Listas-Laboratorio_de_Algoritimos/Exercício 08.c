#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fibonacci(int n);
int main(){
	setlocale(LC_ALL, "");
	int n;
    printf("\n\t \\/ Fibonacci \\/\n\n informe um número inteiro: ");
    scanf("%d", &n);
    fibonacci(n);
    system("pause");
   return(0);
}
int fibonacci(int n){
	int i, n1 = 0, n2 = 1, n3 = 1;
    for(i=0; i<=n; i++){
    	printf("%d\n",n1);
        if(n%1==0 && i==n){
            n1 = n2+n3;
            return 0;
        }
		printf("%d\n",n3);
        n1 = n2+n3;
        printf("%d\n", n2);
        n2 = n1+n2;
        n3 = n1;		
	}
	return(n3);	
}
