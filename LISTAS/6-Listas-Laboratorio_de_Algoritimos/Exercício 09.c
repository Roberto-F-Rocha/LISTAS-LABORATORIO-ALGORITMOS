#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  float n1, raiz, quadrado;
	  printf("insira um n�mero: ");
	  scanf("%f", &n1);
	  
	  if(n1 < 1){
       printf("\n\nnumero igual ou abaixo de zero :( \n\n");
		}
		else{
			  quadrado = pow(n1,2);
			  printf("\n\nO n�mero digitado ao quadrado � igual a %.0f\n\n", quadrado);
		  	raiz = sqrt(n1);
		  	printf("A raiz quadrada do n�mero digitado � %.2f\n\n", raiz);
		}
		
		system("pause");
		return(0);
}