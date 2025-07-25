#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
 setlocale(LC_ALL, "");
  
  int l, d, anos=0;
  d = 170;
  l = 166;
  printf(" David tem 1,70 m e cresce 2 cm por ano \n");
	printf(" ja Lainia tem 1,66 m e cresce 3 cm\n");
	while(l < d){
		l = l + 3;
		
		d = d + 2;
		
		anos++;	
	}

	printf(" para que Lainia seja maior do que David serão necessarios %i\n\n", anos); 
 system("pause");
 return(0);
}