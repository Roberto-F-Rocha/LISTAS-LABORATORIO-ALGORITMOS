#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int dias,diaria;
    float desconto, pagamento;
    
    diaria = 30;
    desconto = 0.08;
    
		printf("quantos dias o encanador trabalhou?\n"); 
		scanf("%i", &dias);
		
    pagamento = diaria * dias;
    pagamento -= pagamento * desconto;
  	
  	printf("quantia líquida que deverá ser paga: %.2f\n\n", pagamento);
  	
    system("pause");
   return(0);
}