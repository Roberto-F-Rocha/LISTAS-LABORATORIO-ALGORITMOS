#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ""); 
    float m, k; 
		 
    printf("distância em milhas:\n");
    scanf("%f", &m);
    k = 1.61 * m;
    printf("a distância em quilômetros é: %.2f\n\n", k);
    
    system("pause");
   return(0);
}