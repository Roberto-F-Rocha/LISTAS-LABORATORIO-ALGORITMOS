#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, ""); 
	
  	float ms, km;
	
	  printf("Informe a velocidade em m/s (metros por segundo): \n");
  	scanf("%f", &ms);
	
  	km = ms * 3.6; 
	
  	printf("Velocidade em km/h (kilometros por hora) é: %.1f\n\n", km);
	
	  system("pause");
 	 return(0);
}