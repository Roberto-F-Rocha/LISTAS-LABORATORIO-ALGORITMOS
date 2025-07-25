#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    
    char tecla;   
		printf("digite uma letra \n");
    do{
			scanf("%c", &tecla);
		}while (tecla != 'x');
    
		system("pause");
		return(0);
		
}