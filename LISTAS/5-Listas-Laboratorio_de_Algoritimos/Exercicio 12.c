#include <stdio.h> 
#include <stdlib.h> 

int main(){
	int n1, n2, n3, soma;
	
	scanf("%i %i %i", &n1, &n2, &n3);
	
	soma = (n1 * n1) + (n2 * n2) + (n3 * n3);
	
	printf("Resultado da soma dos quadrados: %i\n\n", soma);
	
	system("pause");
	return(0);
}