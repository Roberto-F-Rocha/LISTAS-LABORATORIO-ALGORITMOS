#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ""); 
    int n1;
    
    printf("digite um n�mero: ");
    scanf("%i", &n1);
    
    if(n1 % 2 == 0){
    printf("\nesse n�mero � par\n\n");
		}
		
    else{
		printf("esse n�mero � impar\n\n");
		}

    system("pause");
   return(0);
}
