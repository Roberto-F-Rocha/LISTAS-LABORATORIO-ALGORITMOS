#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  int codigo;
	  float preco;
	
  	printf("Informe o pre�o do produto: ");
  	scanf("%f", &preco);
  	printf("informe o c�digo de origem :");
  	scanf("%i", &codigo);
	
	  switch(codigo){
	  	case 1:
	  		printf("PROCED�NCIA = SUL \n\n ");
		     break; 
			 
	  	case 2:	
				printf("PROCED�NCIA = NORTE \n\n ");	
         break;
	    
	  	case 3:
	  		printf("PROCED�NCIA = LESTE \n\n");
	  	   break;
	  	
	  	case 4:
	  		printf("PROCED�NCIA = OESTE \n\n");
   	     break;
	    
	    case 5:
   	  case 6:
	    	printf("PROCED�NCIA = NORDESTE \n\n ");
 	      break;
	    
	    case 7:
   	  case 8:
	    case 9:
	    	printf("PROCED�NCIA = SUDESTE \n\n");
 	      break;
	    
	    case 10:
	    	printf("PROCED�NCIA = CENTRO-OESTE \n\n");
        break;
   	   
   	  default:
   	   	printf("PROCED�NCIA = c�digo n�o encontrado :( ");
        break;
  	}
	
  	system("pause");
   return(0);
}