	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	int main(){
	  	setlocale(LC_ALL, "");
	  	
	  	int funcionarios;
	  	float salario, aumento;
	  	
		 printf("n�mero de funcion�rios:  ");
		 scanf("%i", &funcionarios);
		 printf("salario atual:");
		 scanf("%f", &salario);
		 if(salario <= 400){		 	
		 	  aumento = salario + (salario * 0.16);
		 	  printf("aumento de 16 porcento valor do sal�rio corrigido %.2f\n\n", aumento);
		 }
	   else if(salario > 400 && salario < 700){
	      aumento = salario + (salario * 0.12);
		 	  printf("aumento de 12 porcento valor do sal�rio corrigido %.2f\n\n", aumento);   
		 }
	   else if(salario > 700 && salario < 1000){
	      aumento = salario + (salario * 0.10);
		 	  printf("aumento de 10 porcento valor do sal�rio corrigido %.2f\n\n", aumento);  
		 }
		 else if(salario > 1000 && salario < 1800){
	      aumento = salario + (salario * 0.8);
		 	  printf("aumento de 8 porcento valor do sal�rio corrigido %.2f\n\n", aumento);   
		 }	
		 else if(salario >  1800 && salario < 2500){
	      aumento = salario + (salario * 0.4);
		 	  printf("aumento de 4 porcento valor do sal�rio corrigido %.2f\n\n", aumento);   
		 }	
		 else if(salario >  2500){
		 	  printf("n�o houve aumento!, valor do sal�rio  %.2f\n\n", aumento);	
		 }
	    system("pause");
	 	 return(0);
	}