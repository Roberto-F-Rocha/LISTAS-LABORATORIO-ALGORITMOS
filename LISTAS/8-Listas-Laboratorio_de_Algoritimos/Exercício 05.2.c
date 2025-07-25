#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int n1, i, resultado = 0;
 while(n1 > 0){
 printf("Digite um número \n:");
 scanf("%d", &n1);
 
 for (i = 2; i <= n1 / 2; i++) {
    if (n1 % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", n1);
 else
    printf("%d não é um número primo\n", n1);
 }
 system("pause");
 return 0;
}