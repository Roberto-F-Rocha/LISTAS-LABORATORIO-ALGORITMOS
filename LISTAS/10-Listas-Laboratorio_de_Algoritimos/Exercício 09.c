#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int metros_segundos(int distancia, int tempo);
int main(){
	setlocale(LC_ALL, "");
	int distancia, tempo;
	
  	printf("distância em quilômetros\n: ");
  	scanf(" %i", &distancia);
  	
  	printf("espaço de tempo em minutos\n: ");
  	scanf(" %i", &tempo);
  	
    metros_segundos(distancia, tempo);
    
    system("pause");
   return(0);
}
int metros_segundos(int distancia, int tempo){
    float v;
	v = (distancia * 1000)/(tempo * 60);

	printf("projétil que percorre %.2f metros por segundo\n\n", v);
	return(0);	
}
