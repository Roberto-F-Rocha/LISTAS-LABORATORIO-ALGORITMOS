#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  int n1, n2; 
	  printf("vamos saber se o numero � maior \ninforme um n�mero: ");
	  scanf("%i", &n1);
	  printf("informe outro n�mero:");
	  scanf("%i", &n2);
	  
	   n1 > n2 ? printf("\n%i � maior que %i\n\n",n1,n2) : printf("\n%i � maior que %i\n\n",n2,n1);
	  
  	system("pause");
 	 return(0);
}