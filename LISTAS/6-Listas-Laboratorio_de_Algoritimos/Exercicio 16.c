#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "");
    
    int x, y, z, escolha;
    float media;
    
    printf("informe os tr�s n�meros \n");
    scanf("%i", &x);
    
    scanf("%i", &y);
    
    scanf("%i", &z);
    system("cls");
    printf("informe qual media voc� gostaria de calcular \n");
    printf("|1| para m�dia geom�trica: \n|2| para m�dia Ponderada: \n|3| para m�dia Harm�nica: \n|4| para m�dia Aritm�tica: \n");
    scanf("%i", &escolha);
    switch(escolha)
		{
		case 1: 
			  media = cbrt(x * y * z);
		    printf("m�dia geom�trica igual a: %f\n\n", media);
				break;
	  case 2:
	  	media = ((1*x)+(2*y)+(3*z))/6;
	  	
	  	  printf("m�dia ponderada	 igual a: %.0f\n\n", media);
	    	break;
	  case 3:
	  	media = 3/((1/x)+(1/y)+(1/z));
	  	
	  	  printf("m�dia harm�nica igual a: %f\n\n", media);
	    	break;
	  case 4:
	  	media = (x+y+z)/3;
	  	
	  	  printf("m�dia aritm�dica igual a: %f\n\n", media);
 	      break;
		}
		system("pause");
		return(0);

}