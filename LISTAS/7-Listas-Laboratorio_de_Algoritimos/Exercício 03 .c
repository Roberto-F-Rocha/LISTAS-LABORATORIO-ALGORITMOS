#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	 
	  float n1; 
	  printf("informe um n�mero real: ");
	  scanf("%f", &n1);
	  
    n1 < 0 ? printf("esse n�mero � negativo\n\n") : printf("esse n�mero � positivo\n\n");
    
  	system("pause");
 	 return(0);
}