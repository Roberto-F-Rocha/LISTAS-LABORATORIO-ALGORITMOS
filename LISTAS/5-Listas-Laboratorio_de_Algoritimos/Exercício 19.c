#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
  	setlocale(LC_ALL, ""); 
  	float p,c;
  	printf("valor de comprimento em polegadas:\n");
  	scanf("%f", &p);
  	c = p * 2.54;
  	printf("convertido para centimetros: %.1f\n", c);
  	
  	system("pause");
 	 return(0);
}