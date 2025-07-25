#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo_aritmetica(float n1, float n2, float n3);
float calculo_ponderada(float n1, float p1, float n2, float p2, float n3, float p3);

int main(){
	setlocale(LC_ALL, "");
	float n1, p1, n2, p2,  n3, p3, media;
	int escolha;
	char nome[50], curso[50];
	
	printf("Nome: \n"); gets(nome);
	printf("Curso: \n"); gets(curso);
	system("cls");
	
	printf("\\/ informe as três notas \\/ \n");
	printf("1° nota: "); scanf("%f", &n1);
	printf("2° nota: "); scanf("%f", &n2); 
	printf("3° nota: "); scanf("%f", &n3);
	system("cls");	
	
    printf("\t\t\\/ MENU \\/ \n");
    printf("\t++ PARA O CÁLCULO DA MÉDIA ++\n\n");
    printf("[1] para aritmética\n");
    printf("[2] para ponderada\n");
    scanf("%i", &escolha);
    
    if(escolha == 1){
		media = calculo_aritmetica(n1, n2, n3);
		printf("Nome: %s\nCurso: %s\n", nome, curso);
		printf("cálculo da média aritmética: %.2f\n\n", media);
	}
	
	else if(escolha == 2){//vc não disse quais eram os pesos menino dyego 
		printf("peso da 1° nota: "); scanf("%f", &p1);
		printf("peso da 2° nota: "); scanf("%f", &p2);
		printf("peso da 3° nota: "); scanf("%f", &p3);
        media = calculo_ponderada(n1, p1, n2, p2, n3, p3);
		printf("Nome: %s\nCurso: %s\n", nome, curso);
        printf("cálculo da média ponderada: %.2f\n\n", media);
	}
	
    system("pause");
   return(0); 
}

float calculo_aritmetica(float n1, float n2, float n3){
	float media;
	media = (n1 + n2 + n3) / 3;
	return(media);
}

float calculo_ponderada(float n1, float p1, float n2, float p2, float n3, float p3){
	float media;
	media = ((n1 + p1) + (n2 + p2) + (n3 + p3)) / (p1 + p2 + p3);
	return(media);
		
}	

