#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, ""); 
	  float m,h;

	  printf("valor de �rea em metros quadrados (m�):\n");
	  scanf("%f", &m);
	  h = m * 0.0001;
	  printf("convertido em hectares %f\n\n", h);
	  
	  system("pause");
   return(0);
}