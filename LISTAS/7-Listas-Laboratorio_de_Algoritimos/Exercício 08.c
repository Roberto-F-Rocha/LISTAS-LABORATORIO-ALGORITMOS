#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	  setlocale(LC_ALL, "");
	  int meses;
	
  	printf("Informe um numero de 1 a 12: ");
  	scanf("%i", &meses);
	
	  switch(meses){
	  	case 1:
	  		printf("Janeiro \n\n ");
	  		break; 
			 
	  	case 2:	
				printf("Fevereiro \n\n ");	
	      break;
	    
	  	case 3:
	  		printf("Mar�o \n\n");
	  		break;
	  	
	  	case 4:
	  		printf("Abril \n\n");
	    	break;
	    
	    case 5:
	    	printf("Maio \n\n ");
	    	break;
	    
	    case 6:
	    	printf("Junho \n\n");
	    	break;
	    
	    case 7:
	    	printf("julho \n\n");
	    	break;
	    
	    case 8:
	    	printf("Agosto \n\n");
	    	break;
	    
	    case 9:
	    	printf("Setembro \n\n");
   	     break;
	    
	    case 10:
	    	printf("Outubro \n\n");
   	     break;
   	  
   	  case 11:
   	  	printf("Novembro \n\n");
   	  	 break;
 	    case 12:
   	  	printf("Dezembro \n\n");
   	  	 break;
  	}
	
  	system("pause");
   return(0);
}