#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

		int estado;
		float valor,imposto;
		
		printf("\nvalor do produto: R$");
		scanf("%f", &valor);
		system("cls");
		printf("\n\t    DESTINO DO PRODUTO ");
		
		printf("\n\n ESCOLHA O NÚMERO REFERENTE AO DESTINO DO PRODUTO\n\n \t\t|1| = [MG]\n\n \t\t|2| = [SP]\n\n \t\t|3| = [RJ]\n\n \t\t|4| = [MS]\n\n");
		scanf("%i:", &estado);
		system("cls");
		switch(estado)
		{
		case 1:
		 imposto = valor + (valor * 0.7);
		 printf("\n\nAcrescido com imposto do estado o preço final do produto fica de: R$%.2f\n\n", imposto);
				break;
			
		case 2:
		 imposto = valor + (valor * 0.12);
		 printf("\n\nAcrescido com imposto do estado o preço final do produto fica de: R$%.2f\n\n", imposto);
				break;
			
		case 3:		
		 imposto = valor + (valor * 0.15);
		 printf("\n\nAcrescido com imposto do estado o preço final do produto fica de: R$%.2f\n\n", imposto);
				break;
			
		case 4:
		 imposto = valor + (valor * 0.8);
		 printf("\n\nAcrescido com imposto do estado o preço final do produto fica de: R$%.2f\n\n", imposto);
				break;
			
    default:
       printf(" 404 ERROR\n\n");
		}	
		system("pause");
		return(0);
		
}

