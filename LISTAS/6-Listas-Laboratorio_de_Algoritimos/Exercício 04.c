#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  	setlocale(LC_ALL, "");
		
		int dia;
			
	  printf("\nbora saber qual � o dia da semana? :)\n\nbora l�!\n\ndigite um numero: ");
	  scanf("%i", &dia);
	  switch(dia){
			case 1:
				printf("\a\n%i � domingo\n\n", dia);
				break;
			case 2:
				printf("\a\n%i � segunda-feira\n\n", dia);
				break;
			case 3:
				printf("\a\n%i � ter�a-feira\n\n", dia);
				break;
			case 4:
				printf("\a\n%i � quarta-feira\n\n", dia);
				break;
			case 5:
				printf("\a\n%i � quinta-feira\n\n", dia);
				break;
			case 6:
				printf("\a\n%i � sexta-feira\n\n", dia);
				break;
			case 7:
				printf("\a\n%i � sabado\n\n", dia);
				break;
		}

    system("pause");
 	 return(0);
}