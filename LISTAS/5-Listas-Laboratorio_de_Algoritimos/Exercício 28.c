#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    
    float p1,p2;
    
    p1= 0.46*780.000;
    printf("primeiro colocado %.3f\n\n", p1);
    
    p2= 0.32*780.000;
    printf("segundo colocado %.3f\n\n", p2);
    
    printf("terceiro colocado %.3f\n\n", p1-p2);
  	
    system("pause");
   return(0);
}