#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int perfeito_nao(int n);
int main(){
	setlocale(LC_ALL, "");

	int n;
	printf("insira um número: ");
	scanf("%d", &n);  
	perfeito_nao(n);
	
	system("pause");
   return(0); 	
}	
int perfeito_nao(int n){	
	int soma = 0, dobro, i; 
	dobro = 2 * n;
	for(i = 1; i <= n; i++){	  
		if(n % i == 0){
			  soma=soma+i; 
		  }
	}
  	  if(soma == dobro){
	  	  printf("%d é um número perfeito \n\n", n);
  	  }	
  	  else{	 
  	  	  printf("%d não e um número perfeito\n\n", n);
  	  }
  system("pause"); 
  return (0);
}
