#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  	setlocale(LC_ALL, "");
		
		int dia;
			
	  printf("\nbora saber qual é o dia da semana? :)\n\nbora lá!\n\ndigite um numero: ");
	  scanf("%i", &dia);
	  switch(dia){
			case 1:
				printf("\a\n%i é domingo\n\n", dia);
				break;
			case 2:
				printf("\a\n%i é segunda-feira\n\n", dia);
				break;
			case 3:
				printf("\a\n%i é terça-feira\n\n", dia);
				break;
			case 4:
				printf("\a\n%i é quarta-feira\n\n", dia);
				break;
			case 5:
				printf("\a\n%i é quinta-feira\n\n", dia);
				break;
			case 6:
				printf("\a\n%i é sexta-feira\n\n", dia);
				break;
			case 7:
				printf("\a\n%i é sabado\n\n", dia);
				break;
		}

    system("pause");
 	 return(0);
}