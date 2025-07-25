#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int media_valores();
int main(){
	setlocale(LC_ALL, "");
    int media;
		media = media_valores(); 
		printf("media dos valores inserido: %i\n\n", media);
    system("pause");
   return(0);
}
int media_valores(){
	int n1, cont1 = 0, n = 0, media;
	while(n1 >= 0){
		printf("insira um número: ");
	   	scanf("%i", &n1);
	   	if(n1 > 0){
			n = n + n1;
		   	cont1++;
		}  
	}
	media = n / cont1;
	
	return(media);
}

