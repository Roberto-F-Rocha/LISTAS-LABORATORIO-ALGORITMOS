#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int cont_media=0,n1=0, maior_n=0, menor_n, multiplos=0, cont_par=0, cont_impar=0; 
    float media=0;
    printf("informe um n�mero :\n");
    do{
    scanf("%i", &n1);
    if(n1 <= 0){
    	  media = media/cont_media;
        printf("\n+ m�dia de todos os n�meros %.1f\n", media);
        printf("+ maior numero digitado : %i\n", maior_n);
        printf("+ menor numero digitado : %i\n", menor_n);
        printf("+ O total de n�meros pares : %i\n+ O total de n�meros �mpares: %i\n", cont_par, cont_impar);
        printf("+ O total de m�ltiplos de 4 inseridos %i\n\n", multiplos);
        system("pause");
       return(0);
    }
    if(n1%2==0){
    	cont_par++;
		}
		else{
			cont_impar++;
		}
    if(n1 % 4 == 0){
     multiplos++;
		}
    if(n1 > 0){
    	media=media+n1;	
	    cont_media = cont_media + 1;
		}
    if(n1 > maior_n){
    maior_n = n1;
	  }
	 
		if(n1 < menor_n){
	 	menor_n = n1;
    }
    
    else{
    menor_n = menor_n;
    }	
    
  	}while(n1 > 0);
  	system("pause");
       return(0);
}