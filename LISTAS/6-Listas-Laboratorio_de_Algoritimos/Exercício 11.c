#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

		float salario, bonus;
		int tempo;
		printf("informe o seu sal�rio na empresa: R$"); 
		scanf("%f", &salario);
		system("cls");
		printf("informe o seu tempo de servi�o na empresa em anos:\n:");
		scanf("%i", &tempo);
		system("cls");
		if(tempo >= 5){
		  bonus = salario + (salario * 0.16);
		  
		  printf("obrigado por trabalhar arduamente por tanto tempo na empresa \3\n\n ");
		  printf("seu sal�rio com bonus: R$%.2f\n\n", bonus);
			}
			else{
      bonus = salario + (salario * 0.10);
      
			printf("seu sal�rio com bonus: R$%.2f\n\n", bonus);
			}

		system("pause");
		return(0);

}