#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	void verificaParOuImpar(int n);
	int v;
	printf("informe um n�mero \n: ");
    scanf(" %i", &v);
	verificaParOuImpar(v);
	
	system("pause");
	return(0);
}
void verificaParOuImpar(int n){
	if(n % 2 == 0){
		printf("o valor inserido � par \n\n");
	}
	else{
		printf("o valor inserido � impar \n\n");
	}
}