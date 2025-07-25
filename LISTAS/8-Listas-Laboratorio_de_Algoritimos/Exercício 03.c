#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    int media_m_alt=0, media_m_baix=0, media_h_alt=0, media_h_baix=0;
    float sexo, altura_mulher, altura_homen;
    do{
    printf("informe o sexo: \n |1| para homen \n |2| para mulher\n :");
    scanf(" %f", &sexo);

      if(sexo == 1){
             printf("informe a sua altura:\n");
       scanf(" %f", &altura_homen);

       altura_homen >= 1.73 ? media_h_alt++ : media_h_baix++;

        } 
        else if (sexo == 2){
             printf("informe a sua altura:\n");
        scanf(" %f", &altura_mulher);

        altura_mulher >= 1.60 ? media_m_alt++ : media_m_baix++;

        }
        if(altura_homen <=0 || altura_mulher <=0 || sexo<=0 ){

        printf("total de mulheres a cima média nacional de altura %i\n\n", media_m_alt);

        printf("total de mulheres abaixo média nacional de altura %i\n\n", media_m_baix);

        printf("total de homens a cima média nacional de altura %i\n\n", media_h_alt);

        printf("total de homens abaixo média nacional de altura %i\n\n", media_h_baix);

           system("pause");
        return(0);
        }
        }while(altura_homen >=0 || altura_mulher >=0 );

    system("pause");
        return(0);
}