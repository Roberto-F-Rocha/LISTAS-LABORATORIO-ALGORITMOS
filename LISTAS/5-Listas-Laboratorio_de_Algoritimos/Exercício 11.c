#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    float n1, n2, n3, n4 = 0;
    
    printf("Digite quatro n�meros: \n");
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    printf("\nA m�dia aritm�tica �: %.2f\n\n", (n1+n2+n3+n4)/4);
    
    system("pause");
   return(0);
}