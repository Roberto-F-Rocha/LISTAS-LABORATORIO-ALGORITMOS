#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1,n2 = 0;
	
  printf("digite dois numeros :\n\n");
  
	scanf("%f %f", &n1,&n2);
	
	printf("ordem inversa: %f %f\n\n", n2,n1);
	
	system("pause");
	return (0);
}