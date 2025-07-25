#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  essa aqui menino vini e o monitor me ajudou ksksksk*/
void org(int *n1, int tamanho);
void mostrar(int *n1, int tamanho);
void lerVetor(int *n1, int tamanho);

int main(){
  setlocale(LC_ALL, "");	
  int tamanho;
  printf("insira a quantidade de números: ");
  scanf("%d",&tamanho);

  int n[tamanho];
  lerVetor(n,tamanho);

  org(n,tamanho);
  mostrar(n,tamanho);
   system("pause");
  return(0);
}
void org(int *n1, int tamanho){
  int cont1, cont2, aux;
  for(cont1 = 0; cont1 < tamanho; cont1++){
    for(cont2 = 0; cont2 < tamanho; cont2++){

      if(n1[cont1] < n1[cont2]){

        aux = n1[cont1];
        n1[cont1] = n1[cont2];
        n1[cont2] = aux;

      }

    }
  }
}

void mostrar(int *n1, int tamanho){
  int cont;
  printf("Ordem Crescente\n");
  for(cont = 0; cont < tamanho; cont++){
    printf("números[%d] = %d\n", cont, n1[cont]);
  }
}

void lerVetor(int *n1, int tamanho){
  int cont;
  for(cont = 0; cont < tamanho; cont++){
    printf("Informe o valor do %d numero: ", cont+1);
    scanf("%d", &n1[cont]);
  }
}