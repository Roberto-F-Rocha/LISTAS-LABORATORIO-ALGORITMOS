	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	int main(){
	  	setlocale(LC_ALL, "");
	  	
	  	float altura, peso;
	  	
		 printf("informe sua altuma:  ");
		 scanf("%f", &altura);
		 printf("informe o seu peso: \n");
		 scanf("%f", &peso);
	
		 if(altura < 1.20 && peso <= 60){		 	
		 	  printf("sua classifica��o � (A) \n\n");
		 } 
		 else if(altura < 1.20 && peso > 60 && peso < 90){
		 	  printf("sua classifica��o � (D) \n\n");   
		 }
		 else if(altura < 1.20 && peso > 90){
		 	  printf("sua classifica��o � (G) \n\n");   
		 }
		 else if(altura > 1.20 && altura < 1.70 && peso <= 60){
		 	  printf("sua classifica��o � (B) \n\n");   
		 }
		 else if(altura > 1.20 && altura < 1.70 && peso > 60 && peso < 90){
		 	  printf("sua classifica��o � (E) \n\n");   
		 }
		 else if(altura > 1.20 && altura < 1.70 && peso > 90){
		 	  printf("sua classifica��o � (H) \n\n");   
		 }
		 else if(altura > 1.70 && peso <= 60){
		 	  printf("sua classifica��o � (C) \n\n");   
		 }
		 else if(altura > 1.70 && peso > 60 && peso < 90){
		 	  printf("sua classifica��o � (F) \n\n");   
		 }
		 else if(altura > 1.70 && peso > 90){
		 	  printf("sua classifica��o � (I) \n\n");   
		 }
	    system("pause");
	 	 return(0);
	}