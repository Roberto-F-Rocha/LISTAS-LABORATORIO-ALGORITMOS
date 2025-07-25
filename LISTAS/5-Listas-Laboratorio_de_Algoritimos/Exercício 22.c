#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  float raio, v;
    
    printf("informe o raio do circulo:\n");
    scanf("%f", &raio);
		
		v = 3.141592*raio*raio; 
		
		printf("área do círculo correspondente é: %.2f\n\n", v);
		
	  system("pause");
   return(0); 
}