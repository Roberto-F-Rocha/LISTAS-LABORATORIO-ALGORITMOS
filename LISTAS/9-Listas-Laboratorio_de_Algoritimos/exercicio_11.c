#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int i, cont, filme[4], maior_nota, menor_nota;
   for(i=1; i<=4; i++){  
       printf("qual a nota do %d filme?: ", i);
	   scanf("%d", &filme[i]);
       if(i==1){
          maior_nota = filme[i];
          menor_nota = filme[i];
       }
        if(filme[i]>maior_nota){
           maior_nota = filme[i];
       }
        else if(filme[i]<menor_nota){
                menor_nota = filme[i];
       }  
   }
	for(i=1; i<=4; i++){
            if(filme[i]==maior_nota){
                printf("o filme %d foi o filme mais votado\n", i);
            }
			else if(filme[i]==menor_nota){
                printf("o filme %d foi o filme menos votado\n", i);
            }
    }
    system("pause");
   return(0);
}