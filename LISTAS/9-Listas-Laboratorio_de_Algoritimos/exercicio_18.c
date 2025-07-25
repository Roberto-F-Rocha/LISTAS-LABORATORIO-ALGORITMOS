#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i, n, f;
    printf(" \\/ fatorial \\/ \n informe um valor inteiro e positivo: \n");
    scanf("%d", &n);
    f = n;
    printf("%d! = %dx", n, n);
    for(i=n-1; i>=1; i--){
        f = i * f;
        if(i==1){	
         printf("%d", i);
         printf("=%d\n", f);
        }printf("%dx", i);
    }
   system("pause");
  return (0);
}