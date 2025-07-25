#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
    
    int escolha;
    float valor, valor_final;
    printf("informe o valor do produto\n");
    scanf("%f", &valor);
    system("cls");
    
    printf("informe o número referente a forma de pagamento\n\n");
    printf(" |1| - à vista \n |2| - à prazo\n:");
    scanf("%i", &escolha);
    
    switch(escolha){
		case 1:
			valor_final = valor - (valor * 0.10);
			printf("\npreço final do produto mais os 10 porcento de desconto: R$%.2f\n\n", valor_final);
				break;
			
	  case 2:
	  	valor_final = valor + (valor * 0.10);
	  	printf("\npreço final do produto com o acréscimo de 10 porcento: R$%.2f\n\n", valor_final);
				break;
		}
	
  	system("pause");
   return(0);
}