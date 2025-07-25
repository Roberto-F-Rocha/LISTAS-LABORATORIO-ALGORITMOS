#include <stdio.h>
#include <stdio.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  int sexo;
	  float h, peso;
	  printf("informe o número que corresponde ao seu sexo:\n\n |1| = HOMEN\n |2| = MULHER\n:");
	  scanf("%i", &sexo);
	  
	  system("clear || cls");
	  
	  printf("inform a sua altura:\n");
	  scanf("%f", &h);
	  
	  system("clear || cls");
	  
	  switch(sexo){
		case 1:
			   peso = (72.7 * h) - 58;
			   printf("\n\n\ao seu peso ideal é: %.2f\n\n", peso);
	  	   break;
    case 2:
         peso = (62.1 * h) - 44.7;
    	   printf("\n\n\ao seu peso ideal é: %.2f\n\n", peso);	
				 break;
		}

		system("pause");
		return(0);
}