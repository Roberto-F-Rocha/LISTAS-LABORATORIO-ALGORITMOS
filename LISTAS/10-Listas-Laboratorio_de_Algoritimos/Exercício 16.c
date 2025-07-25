#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int v);
int main(){
	setlocale(LC_ALL, "");
	int valor, soma;
	
	printf("insira um valor: ");
	scanf("%i", &valor);
	
	soma = fatorial(valor);
	printf("fatorioal de %i é: %i\n\n", valor, soma);
    system("pause");
   return(0);
}
int fatorial(int v){
	int i, soma;
	soma = v;
	for(i = 1; i <= v - 1; i++){
		soma = soma * i;
	} 
	return(soma);
}

