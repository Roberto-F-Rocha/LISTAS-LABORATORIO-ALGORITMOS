	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	int main(){
	  	setlocale(LC_ALL, "");
	  	int idade;
	  	
		 printf("planos de sa�de:\n insira a sua idade:");
		 scanf("%i", &idade);
		 if(idade <= 10){
		 	  printf("valor a ser pago para o plano de sa�de R$30,00\n\n");
		 }
	   else if(idade > 10 && idade < 29){
	         printf("valor a ser pago para o plano de sa�de R$60,00\n\n");
		 }
	   else if(idade > 29 && idade < 45){
	         printf("valor a ser pago para o plano de sa�de R$120,00\n\n");
		 }
		 else if(idade > 45 && idade < 59){
	         printf("valor a ser pago para o plano de sa�de R$150,00\n\n");
		 }	
		 else if(idade > 59){
	         printf("valor a ser pago para o plano de sa�de R$300,00\n\n");
		 }		
	
	    system("pause");
	 	 return(0);
	}