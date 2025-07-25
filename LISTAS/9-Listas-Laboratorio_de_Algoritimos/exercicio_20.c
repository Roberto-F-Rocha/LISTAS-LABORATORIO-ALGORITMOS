#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
    int i, n1;
    char nome[20];
    for(i=1; i<=12; i++){
        printf("nome do cliente: ");
        scanf("%s",nome);
        printf("informe o valor das compras do ano passado: ");
        scanf("%d", &n1);
        if(n1 >= 3000){
            printf("parabéns %s, você recebeu um desconto de R$ %.2f\n", nome, n1*0.10);
        }
    }
    system("pause");
    return 0;
}