#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

		int n1=1, c=1;
		printf(" /TABUADA/ \n");
    while (n1 > 0){
			scanf(" %i", &n1);
			do{
				printf("%i X %i = %i \n", n1, c, c * n1);
				c++;
			}while(c <= 10);
			c=1;
		}
    
    system("pause");
        return(0);
}