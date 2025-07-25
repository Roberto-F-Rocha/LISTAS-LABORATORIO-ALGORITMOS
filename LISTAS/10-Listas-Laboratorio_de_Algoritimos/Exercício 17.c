#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int potencia(int num, int exp, int res);
int main(){
	setlocale(LC_ALL, "");
	int numero,result, expoente,resultado=1;

    printf("número:");
    scanf("%i", &numero);
    printf("expoente:");
    scanf("%i", &expoente);

	result = potencia(numero,expoente,resultado);
    printf("resultado: %i ^ %i = %i \n",numero,expoente, result);
	 system("pause");
    return(0);
}
int potencia(int num, int exp, int res){
    if(exp >= 1){
        res = res * num;
        exp = exp - 1;
        return(potencia(num,exp,res));
    }else{

        return(res);
    }

}