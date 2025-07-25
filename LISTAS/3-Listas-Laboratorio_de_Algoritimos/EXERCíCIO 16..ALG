algoritmo "Exercício 16."
var
   repit ,n1, a, b, contador:inteiro
inicio
   escreval("digite um numero inteiro")
   leia(n1)
   escreval("")
   a<-0
   b<-1
   para repit de 1 ate n1 faca
   contador <- (a + b)
   escreval(b)
   a<-b
   b<-contador
   fimpara
fimalgoritmo