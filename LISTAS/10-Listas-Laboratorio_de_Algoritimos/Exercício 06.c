#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int somadivisiveis (int a, int b, int c);
int main(){
	setlocale(LC_ALL, "");
	int sd, a, b, c;
	printf("insira tr�s n�meros interiros \n: ");
	scanf(" %i%i%i", &a, &b, &c);	
    sd = somadivisiveis(a, b, c);
	printf("a soma de todos inteiros entre %i a %i que s�o divis�veis por %i � %i\n\n:", b, c, a, sd);
	return(0);
}
int somadivisiveis (int a, int b, int c){
	int i, sd=0;
	for(i = b; i <= c; i++){
		if(a%i==0){
			sd = sd + i;
		}
	}
	return(sd);
}
