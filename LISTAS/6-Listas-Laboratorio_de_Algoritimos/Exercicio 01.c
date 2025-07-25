#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ""); 
    int n1;
    
    printf("digite um número: ");
    scanf("%i", &n1);
    
    if(n1 % 2 == 0){
    printf("\nesse número é par\n\n");
		}
		
    else{
		printf("esse número é impar\n\n");
		}

    system("pause");
   return(0);
}
