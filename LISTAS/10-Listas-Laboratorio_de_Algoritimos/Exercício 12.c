#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float distancia_pontos (float x1, float y1, float x2, float y2);

int main(){
	setlocale(LC_ALL, "");
	float X1, Y1, X2, Y2;
	printf("insira as distancias\n");
	printf("x1 y1 : \n");
	scanf(" %f%f", &X1, &Y1);
	printf("x2 y2 : \n");
	scanf(" %f%f", &X2, &Y2);

	distancia_pontos(X1, Y1, X2, Y2);

    
    system("pause");
   return(0);
}
float distancia_pontos (float x1, float y1, float x2, float y2){
	float dab;
    dab = sqrt( pow(x2 - x1, 2) + pow(y2 - y1,2) );
	
	printf(" A distancian entre dois pontos é: %f\n\n", dab);
	
	return(0);	
}