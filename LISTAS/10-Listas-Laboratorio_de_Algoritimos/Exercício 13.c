#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int valores(int i, int *n);

int main(){
	setlocale(LC_ALL, "");
	int n[10], i;

    printf("informe 10 valores :\n");
    
    for(i = 0; i < 10; i++){
    	scanf(" %i", &n[i]);
	}
	valores(10, n);
    
    system("pause");
   return(0);
}
int valores(int i, int *n){
	int maior_n = 0, menor_n = 0, c;
	maior_n = n[0];
	menor_n = n[0];
	for(c = 0; c < i; c++){ 
		if(n[c] > maior_n){
			maior_n = n[c];
		}
		if(n[c] < menor_n){
			menor_n = n[c];
		}
	}
	printf(" maior: %i\n menor: %i\n\n", maior_n, menor_n);
	return(0);
}
