#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "");
  
 int cod_crie, cod, prest, escolha, valor;
 float prestacao, parcela, total;
 
 do{
 cod=0;	
 printf("/ simulador de compras parceladas /\n\n");
 printf("crie um código \n:");
 scanf("%i", &cod_crie);
 system("cls");
 printf("insira o código criado \n:"); 
 while(cod != cod_crie){	
 scanf("%i", &cod);
 
 if(cod != cod_crie){
	 printf("ERROR!\n");
 }
 else{
	 printf("SUCCESSFUL \n\n");
 } 
 }
	 printf("informe o valor total da compra R$\n: ");
	 scanf("%i", &valor);
	 system("cls");
	 
	 printf("informe o total e prestações: ");
	 scanf("%i system("pause");
 return(0);", &prest);
	 system("cls");
	 
	 prestacao = prest + (prest*0.04);
	 
	 parcela = valor / prest;
	 
   total = parcela + prestacao; 
   
   printf("\no valor das prestações ao mês fica de : R$%.2f\n\n", total);   
   
   printf("gostaria de fazer outra simulação?\n |1| para sim\n |2| para não\n\n:");
   scanf("%i", &escolha); 
   system("cls");
   
   }while(escolha == 1);
 
 system("pause");
 return(0);
}