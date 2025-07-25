#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float umaV_Vista(float valor);
float duasV_Vista(float valor);
float tresV_vista(float valor);
int main(){
	setlocale(LC_ALL, "");

    float valor;
    int escolha;
	printf("Total da  compra: \n");
    scanf("%f",&valor);
    system("cls");
    printf("\tESCOLHA QUAL A MELHOR FORMA DE PAGAMENTO PARA VOCÊ\n\n");
    printf("[1] -> PARA PAGAMENGO A VISTA\n");
	printf("[2] -> PARA PAGAMENTO EM 2X\n");
	printf("[3] -> PARA PAGAMENTO EM 3X OU MAIS\n");
    scanf("%i", &escolha);
    switch(escolha){
        case 1:
            umaV_Vista(valor);
            break;
        case 2:
            duasV_Vista(valor);
            break;
        case 3:
            tresV_vista(valor);
            break;
        default:
            printf("A COMPRA FOI CANCELADA :(\n");
    }
    return(0);
}

float umaV_Vista(float valor){
    printf("TOTAL: %.2fR$\n",valor);
    printf("TOTAL A PAGAR: %.2fR$.\n",valor * 0.9);
    return(0);
}

float duasV_Vista(float valor){

    printf("TOTAL: %.2fR$\n",valor);
    printf("2 PARCELAS DE %.2fR$ CADA\n",valor/2);
    return(0);
}

float tresV_vista(float valor){

    int parcelas;
    printf("TOTAL: %.2fR$\n",valor);

    do{
        printf("Quantidade de parcelas.\n");
        scanf("%d",&parcelas);

    }while( (parcelas > 10) || (parcelas < 3) );

    printf("%d PARCELAS DE %.2fR$ CADA.\n",parcelas,(valor * 1.03)/parcelas);
    return(0);
}


