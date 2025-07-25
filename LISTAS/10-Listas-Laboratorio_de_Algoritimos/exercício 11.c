#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_esfera(float r);

int main(){
	setlocale(LC_ALL, "");
	float r;
	printf("insira o tamanho do raio \n:");
	scanf(" %f", &r);
	calc_esfera(r);

    
    system("pause");
   return(0);
}
void calc_esfera(float r){
	float a, v;
	a = 4 * 3.14 *(r * r);
	
	v = (4/3) * 3.14 * (r * r * r);
	
	printf(" área da superfície: %f\n volume da esfera do raio: %f\n\n", a, v);
	
	return(0);	
}