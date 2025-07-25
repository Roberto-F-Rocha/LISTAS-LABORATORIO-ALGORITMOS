#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int soma_pares ();
int main(){
	setlocale(LC_ALL, "");
	int soma;
	soma = soma_pares();
	printf("a soma dos pares é %i\n\n", soma);
	system("pause");
	return(0);
}
int soma_pares (){
	int n1 = 1, soma=0;
	while(n1 > 0){
		printf("insira um número:\n");
		scanf("%i", &n1);
     	 if(n1%2==0){
			soma = soma + n1;	 
	 	 }
    }
	return(soma);
}