#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int soma(int num1, int num2);
int main(){
	setlocale(LC_ALL, "");
    int num1, num2;
    int s;
    printf("insira um número \n:");
    scanf(" %i%i", &num1, &num2);
	s = soma(num1, num2);
	printf("a somas entre %i e %i é: %i", num1, num2, s);
	return(0);
}
int soma(int num1, int num2){
	int soma, i;
	for(i = num1; i <= num2; i++){
		soma = soma + i;
	}
	return(soma);
}
