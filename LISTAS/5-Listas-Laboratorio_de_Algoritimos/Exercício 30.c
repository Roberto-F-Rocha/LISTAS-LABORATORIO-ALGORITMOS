#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
  	int n1,n2;
  	
  	printf("informe dois numeris reais\n\n");
  	printf("primeiro n�mero: ");
  	scanf("%i", &n1);
  	
  	printf("\nsegundo n�mero: ");
  	scanf("%i", &n2);
  	
  	printf("\nsoma dos dois n�meros: %i\n\n", n1+n2);
  	printf("O produto do primeiro n�mero pelo quadrado do segundo �: %i\n\n", n1*(n2*n2));
  	printf("O quadrado do primeiro n�mero: %i\n\n", n1*n1);
 	  printf("A raiz quadrada dos n�meros: primiro numero %f, segundo numero %f\n\n", sqrt(n1), sqrt(n2));
  	printf("O seno da diferen�a do primeiro n�mero pelo segundo: %f\n\n",sin(n1-n2));
  	printf("O m�dulo do primeiro n�mero: %i\n\n", abs(n1));
  	
    system("pause");
   return(0);
}