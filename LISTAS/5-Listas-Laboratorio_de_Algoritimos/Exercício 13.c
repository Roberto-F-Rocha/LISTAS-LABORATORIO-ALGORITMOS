#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
  	int ano, idade = 0;
	
	  printf("sua idade:\n");
    scanf("%i", &idade);
  	printf("ano atual:\n");
  	scanf("%i", &ano);
  	printf("\nvocê nasceu em %i\n\n", ano-idade);
  	
  	system("pause");
	 return(0);
}