#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    
	  int n1, n2, n3 = 0;
	  
	  printf("\nDigite tr�s n�meros\n");
	  
	  scanf("%i %i %i", &n1, &n2, &n3);
  
	  printf("\n\aA soma entre os tr�s valores � de: %i\n\n", n1+n2+n3);
	  
	  system("pause");
   return (0);
}