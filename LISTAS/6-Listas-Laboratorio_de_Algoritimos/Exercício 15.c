#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    
    int a, b, c;
    
    printf("informe os tr�s lados de um tri�ngulo\n");
    printf("A: ");
    scanf("%i", &a);
    
    printf("B: ");
    scanf("%i", &b);
    
    printf("C: ");
    scanf("%i", &c);
    
    if(a == b + c){
    printf("tri�ngulo ret�ngulo\n\n");
		}
    else if(a > b + c){
    printf("tri�ngulo obtus�ngulo\n\n");
		}
    else if(a < b + c){
    	printf("tri�ngulo acut�ngulo\n\n");
		}
		system("pause");
		return(0);

}