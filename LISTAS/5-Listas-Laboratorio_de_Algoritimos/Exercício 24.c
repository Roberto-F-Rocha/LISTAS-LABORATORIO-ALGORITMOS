#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"");
    float h,p,c;
    
    printf("Horas diarias do aparelho ligado:\n");
    scanf("%f",&h);
    
    printf("Potencia do aparelho em Watts:\n");
    scanf("%f",&p);
    
    h*=30;
    c = (h * p) / 1000;
    
    system("clear||cls");
    printf("O consumo é de :%2f Kwh/mês\n\n",c);
    
    system("pause");
   return(0);
}
