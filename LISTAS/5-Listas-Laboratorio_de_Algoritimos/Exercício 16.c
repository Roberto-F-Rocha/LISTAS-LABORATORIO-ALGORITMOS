#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  float k = 0;
	  
	  printf("temperatura em graus Kelvin:\n");
	  scanf("%f", &k);
	  
	  printf("A temperatura em Celsius é: %.2f\n\n", k - 273.15);
  
	  system("pause");
   return(0);
}