#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    float salario, prestacao;
  
    printf("informe seu salário: ");
    scanf("%f", &salario);

		printf("\ninforme o valor da prestação: ");

		scanf("%f", &prestacao);

		if(prestacao > salario * 0.2){
			
		printf("\nempréstimo não concedido! :(\n\n");
		}
		else{
		printf("\nespréstimo concedido! :)\n\n");
		}
		system("pause");
		return(0);

		}