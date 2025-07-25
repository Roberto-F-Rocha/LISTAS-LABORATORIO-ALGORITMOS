#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int maior(int n1, int n2);
	int v1, v2, m_V;
	printf("informe dois números \n:");
	scanf("%i%i", &v1, &v2);
	
	if(v1 != v2){
		m_V = maior(v1, v2);
		printf("\nMaior valor: %i\n\n", m_V);
	}
	else{
		printf("\nOs dois valores sao iguais\n");
	}

	system("pause");
	return(0);
}
int maior(int n1, int n2){	
	if(n1 > n2){
		return(n1);
	}
	else{
		return(n2);
	}
}









