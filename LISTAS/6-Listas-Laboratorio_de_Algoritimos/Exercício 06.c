#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  	setlocale(LC_ALL, "");
		
		int codigo;
			
	  printf("\n Classifica��o do produto\n Digite o c�digo do produto ");
	  scanf("%i", &codigo);
	  switch(codigo){
			case 1:
      case 2:
				printf("\n Alimento n�o-perec�vel:\n\n", codigo);
				break;
			case 3:
			case 4:	
				printf("\n Alimento perec�vel: \n\n", codigo);
				break;
			case 5:
			case 6:	
				printf("\n Vestu�rio: \n\n", codigo);
				break;
			case 7:
			case 8:	
				printf("\n Higiene pessoal: \n\n", codigo);
				break;
			case 9:
			case 10:	
				printf("\n Utens�lios dom�sticos: \n\n", codigo);
				break;
		}

    system("pause");
 	 return(0);
}