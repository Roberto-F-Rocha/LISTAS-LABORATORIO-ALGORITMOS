#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    float salario, prestacao;
  
    printf("informe seu sal�rio: ");
    scanf("%f", &salario);

		printf("\ninforme o valor da presta��o: ");

		scanf("%f", &prestacao);

		if(prestacao > salario * 0.2){
			
		printf("\nempr�stimo n�o concedido! :(\n\n");
		}
		else{
		printf("\nespr�stimo concedido! :)\n\n");
		}
		system("pause");
		return(0);

		}