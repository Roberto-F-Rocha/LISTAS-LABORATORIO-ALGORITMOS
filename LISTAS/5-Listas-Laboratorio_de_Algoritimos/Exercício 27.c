#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    
    float ht, htm, valor;
    //ht -> horas trabalhadas;
    //htm -> horas trabalhadas no m�s;
    
    printf("valor da hora de trabalho (em reais):\n");
    scanf("%f", &ht);
    
  	printf("total de horas trabalhadas no m�s:\n");
  	scanf("%f", &htm);
  	
  	valor = ht * htm;
  	valor += valor * 0.10;
  	
  	printf("valor a ser pago ao funcion�rio %.2f\n\n", valor);
  	
    system("pause");
   return(0);
}