#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
  	int n1,n2;
  	
  	printf("informe dois numeris reais\n\n");
  	printf("primeiro número: ");
  	scanf("%i", &n1);
  	
  	printf("\nsegundo número: ");
  	scanf("%i", &n2);
  	
  	printf("\nsoma dos dois números: %i\n\n", n1+n2);
  	printf("O produto do primeiro número pelo quadrado do segundo é: %i\n\n", n1*(n2*n2));
  	printf("O quadrado do primeiro número: %i\n\n", n1*n1);
 	  printf("A raiz quadrada dos números: primiro numero %f, segundo numero %f\n\n", sqrt(n1), sqrt(n2));
  	printf("O seno da diferença do primeiro número pelo segundo: %f\n\n",sin(n1-n2));
  	printf("O módulo do primeiro número: %i\n\n", abs(n1));
  	
    system("pause");
   return(0);
}