#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  int numero;
	  
	  printf("par ou impar?\n\ninforme um n�mero: ");
  	scanf("%d", &numero);
	
  	numero % 2 == 0 ? printf("Numero par\n\n") : printf("Numero impar\n\n");
	
  	system("pause");
 	 return(0);
}