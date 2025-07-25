#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  float altura, raio, v;
	  
    printf("informe a altura do cilindro circular:\n");
    scanf("%f", &altura);
    
    printf("informe o raio do cilindro circular:\n");
    scanf("%f", &raio);
		
		v = 3.141592*raio*raio*altura; 
		
		printf("O volume do cilindro circular é de: %.2f\n\n", v);
		
	  system("pause");
   return(0); 
}