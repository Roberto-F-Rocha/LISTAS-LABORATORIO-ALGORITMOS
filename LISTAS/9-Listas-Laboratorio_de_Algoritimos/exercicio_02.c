#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int n1;
    for (n1=25; n1>=0; n1--){
        printf("%d\n", n1);
    }
    system("pause");
   return(0);
}