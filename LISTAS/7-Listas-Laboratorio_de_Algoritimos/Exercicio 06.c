#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  char caractere;
	
  	scanf("%c", &caractere);
	
	  isalnum(caractere) ? printf("O caractere lido � alfanumerico\n\n") : printf("O caractere lido nao � alfanumerico\n\n");
	
  	system("pause");
 	 return(0);
}