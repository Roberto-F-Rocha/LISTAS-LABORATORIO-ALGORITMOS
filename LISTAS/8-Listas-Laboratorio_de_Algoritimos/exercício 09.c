#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
 setlocale(LC_ALL, "");
  
  int a, b, anos=0;
  a = 16000;
  b = 25000;
	while(a < b){
		a = a + (a*0.03);

    b = b + (b*0.025);  
		
		anos++;	
	}

	printf("para que a população da cidade A ultrapasse a população da cidade B. serão necessarios %i anos\n\n", anos); 
 system("pause");
 return(0);
}