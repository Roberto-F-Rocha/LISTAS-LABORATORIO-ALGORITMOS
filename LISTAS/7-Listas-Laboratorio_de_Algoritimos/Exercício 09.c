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
    
    printf("informe o n�mero referente a forma de pagamento\n\n");
    printf(" |1| - � vista \n |2| - � prazo\n:");
    scanf("%i", &escolha);
    
    switch(escolha){
		case 1:
			valor_final = valor - (valor * 0.10);
			printf("\npre�o final do produto mais os 10 porcento de desconto: R$%.2f\n\n", valor_final);
				break;
			
	  case 2:
	  	valor_final = valor + (valor * 0.10);
	  	printf("\npre�o final do produto com o acr�scimo de 10 porcento: R$%.2f\n\n", valor_final);
				break;
		}
	
  	system("pause");
   return(0);
}