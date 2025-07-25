#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int sexo,i,idade, soma_idade=0,idade_h=0, idade_pessoas=0;
    float alt, alt_mulher=0;
    for(i=1; i<=3; i++){
        system("cls");
        printf("pessoa %d\n", i);
        
        printf("Informe o seu sexo:\n [1] feminino \n [2] masculino: ");
        scanf("%d", &sexo);
        system("cls");
        
        printf("digite sua idade: ");
        scanf("%d", &idade);
        system("cls");
        
        soma_idade = soma_idade + idade;
        printf("digite sua altura: ");
        scanf("%f", &alt);
        system("cls");
        
        if(sexo==1){
            alt_mulher = alt_mulher + alt;
        }else if(sexo==2){
            idade_h = idade_h + idade;
        }
        if(idade>=18&&idade<=35){
            idade_pessoas++;
        }
    }
    printf("a média de idade do grupo é %d\n", soma_idade/3);
    printf("a média de altura das mulheres é %.2f\n", alt_mulher/3);
    printf("a média de idade dos homens é %d\n", idade_h);
    printf("o total de pessoas com idade entre 18 e 35 é %d\n", idade_pessoas);
    system("pause");
   return(0);
}