#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, ""); 
	  float mc,l;
	  
	  printf("valor de volume em metros cúbicos (m³):\n");
	  scanf("%f", &mc);
	  
	  l = 1000 * mc;
	  
	  printf("convertido para litros igual a: %.0fL\n\n", l);
	  
	  system("pause");
   return(0);
}