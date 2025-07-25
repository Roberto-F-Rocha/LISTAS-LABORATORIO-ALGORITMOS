algoritmo "Exercício 13."
var
   n1, i, fato :inteiro
inicio
   fato <-1
   escreval ("digite um numero inteiro!")
   escreval ("")
   leia (n1)
      escreval (" o fatorial de", n1," é")
      para i de n1 ate 1 passo -1 faca
         fato <- fato * i
      escreva(i," x")
      fimpara
      escreva(" =", fato)
fimalgoritmo