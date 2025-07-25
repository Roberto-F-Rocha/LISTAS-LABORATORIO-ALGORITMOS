#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    
    int a, b, c;
    
    printf("informe os três lados de um triângulo\n");
    printf("A: ");
    scanf("%i", &a);
    
    printf("B: ");
    scanf("%i", &b);
    
    printf("C: ");
    scanf("%i", &c);
    
    if(a == b + c){
    printf("triângulo retângulo\n\n");
		}
    else if(a > b + c){
    printf("triângulo obtusângulo\n\n");
		}
    else if(a < b + c){
    	printf("triângulo acutângulo\n\n");
		}
		system("pause");
		return(0);

}