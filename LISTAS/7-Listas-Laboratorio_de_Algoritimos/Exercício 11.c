#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  
	  int habitantes, escolha;
	  
    float natalidade, mortalidade, igual;
    
    printf("n�mero de habitantes\n\n");
    scanf("%i", &habitantes);
    system("cls");
    printf("informe o n�mero de crian�as nacidas\n\n");
    scanf("%f", &natalidade);
    system("cls");
    printf("informe o n�mero de �bitos\n\n");
    scanf("%f", &mortalidade);
    system("cls");
    printf("escolha qual tipo de proced�ncia voc� gostaria de visualizar\n\n");
    printf(" natalidade |1| \n mortalidade |2|\n");
    scanf("%i", &escolha);
    switch(escolha){
		case 1:
			igual = (natalidade * 1000) / habitantes;
			  printf("taxa de natalidade igual a %f\n\n", igual);
				break;
		case 2:
			igual = (mortalidade * 1000) / habitantes;
			  printf("taxa de mortalidade igual a %f\n\n", igual);
				break;
		}
  	system("pause");
   return(0);
}