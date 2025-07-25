#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    float hipotenusa;
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Insira o segundo valor: ");
    scanf("%d", & num2);
    
    hipotenusa = sqrt ((num1 * num1) + (num2 * num2));
    
    printf("\nA hipotenusa dos valores é: %.2f\n\n", hipotenusa);
    
    system("pause");
    return(0);
}