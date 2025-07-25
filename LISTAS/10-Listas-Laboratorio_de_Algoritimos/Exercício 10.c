#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int area_circun(float raio);
int main(){
	setlocale(LC_ALL, "");
	float raio;
	printf("insira o tamanho do raio \n:");
	scanf(" %f", &raio);
    area_circun(raio);
    
    system("pause");
   return(0);
}
int area_circun(float raio){
	float a, c;
	a = 3.14 * (raio * raio);
	
	c = 2 * 3.14 * raio;
	
	printf(" área do círculo: %f\n circuferência do círculo: %f\n\n", a, c);
	
	return(0);	
}