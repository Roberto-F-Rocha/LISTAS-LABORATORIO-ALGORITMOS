#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	
	printf("Informe o seu sexo: ");
	scanf("%c", &sexo);
	
	//if(sexo == 'M' || sexo == 'm')
	
	switch(sexo){
		case 'M':
		case 'm':
			printf("Sexo masculino\n\n"); 		
		break;
		case 'F':
		case 'f':
			printf("Sexo feminino\n\n"); 	
		break;
	}
	
	system("pause");
	return(0);
}