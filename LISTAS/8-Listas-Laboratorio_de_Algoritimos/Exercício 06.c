#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 
int main() {
 setlocale(LC_ALL, "");
 int n1, num;
 printf("insira um n�mero \n:");
 srand(time(NULL));
 num = rand()%100;	
 while(n1 != num)
 {
	scanf("%i", &n1); 
	if(n1 > num){
		printf("O n�mero %i � maior : VOC� ERROU :( \n", n1);
	}	
	else if(n1 < num){
		printf("O n�mero %i � menor : VOC� ERROU :( \n", n1);

	}
	else if(n1==num){
		printf(" / ACERTOU! / :) \n\n");
		system("pause");
   return(0);
	}
  }

 system("pause");
 return(0);
}