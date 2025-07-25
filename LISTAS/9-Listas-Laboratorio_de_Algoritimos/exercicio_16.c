#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i;
    float n1, harmonica = 0;
    printf("\\/ serie harmonica \\/ \n\n digite um número: ");
    scanf("%f", &n1);
    for(i=1; i<=n1; i++){
        harmonica = harmonica + 1/i;
    }
    printf("o resultado da serie harmonica é %.2f\n", harmonica);
    system("pause");
    return 0;
}