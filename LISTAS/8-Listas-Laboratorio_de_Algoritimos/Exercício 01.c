#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    
    int n1, s=0;
    printf("digite um numero \n ");
    
    while(s <= 40){
    	scanf("%d", &n1);
    	s = s + n1;
    	printf("%i\n\n", s);
		}
    
		system("pause");
		return(0);
		
}
