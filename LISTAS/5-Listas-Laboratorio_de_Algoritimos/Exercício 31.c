#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    
    float valor, vista, total;
    
		printf("valor total do produto:  ");
		scanf("%f", &valor);
		
		vista = valor - (valor * 0.10);
		printf("\ntotal � vista com desconto = R$ %.2f\n\n", vista);
		total = valor / 3;
		printf("valor pacelado em 3x sem juros = 3x de = R$ %.2f\n\n", total);
		printf("A comiss�o do vendedor, no caso da venda ser � vista (5 porcento sobre o valor com desconto) = R$ %.2f\n\n", vista*0.05);
		printf("A comiss�o do vendedor, no caso da venda ser parcelada (3 porcento sobre o valor com desconto) = R$ %.2f\n\n", total*0.03);
		
		
		
		
		
		
		
		
		
    system("pause");
   return(0);
}