#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  float g,r;
	  
		printf("valor do ângulo em graus:\n");
		scanf("%f", &g);
		
		r = g*(3.141592/180);
		
		printf("convertido em radianos: %f\n\n", r);
		
	  system("pause");
   return(0); 
}