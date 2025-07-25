#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "");
  
 int n1, cont=1 ,soma=0, i=0;
 float raiz;
 
 printf("insira um número :\n");
 do{
 scanf("%i", &n1);

 cont=1;i=0;soma=0;
 while(soma<n1){	
 printf("%i + ", cont);
 cont+=2;
 soma = cont + soma;
 i++;
 }
 printf("a raiz de %i é %.1d ", n1, i);
 }while(n1 > 0);
	 
 system("pause");
 return(0);
}