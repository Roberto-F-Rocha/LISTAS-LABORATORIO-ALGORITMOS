#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ehPrimo(int n);
int main(){
	setlocale(LC_ALL, "");
	int n;
	printf("informe um número ");
	scanf(" %i", &n);
	
    ehPrimo(n);
    system("pause");
	return(0);
}
int ehPrimo(int n){
	if(n % 2 == 0){
		printf("o número %i não é primo\n\n", n);
	}
	else{
		printf("o número %i é primo\n\n", n);
	}
	return(0);
}

