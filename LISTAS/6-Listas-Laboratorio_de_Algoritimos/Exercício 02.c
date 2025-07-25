#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ""); 
    
    int n1, n2;
    
    printf("informe dois numeros:\n");
    scanf("%i%i", &n1, &n2);
    
    if(n1 > n2){
	    printf("maior valor inserido %i\n\n", n1);
		}
   	else if(n1==n2){
			printf("os valores inserido são iguais\n\n");
		}
		else{
			printf("maior valor inserido %i\n\n", n2);
		}
    system("pause");
   return(0);
}
