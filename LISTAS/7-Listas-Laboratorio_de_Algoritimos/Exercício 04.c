#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  float n1; 
	  printf("vamos saber se o numero � maior que 8,8 \ninforme um n�mero: ");
	  scanf("%f", &n1);
	  
    n1 < 8.8 ? printf("esse n�mero � menor que 8,8\n\n") : printf("esse n�mero � maior que 8,8\n\n");
    
	  
  	system("pause");
 	 return(0);
}