algoritmo "Exercício 10."
var
   N :inteiro
inicio
   mudacor ("amarelo")("frente")
   escreval ("digite um número")
   leia (n)
   se (N <= 0) entao
      escreval ("número invalido ")
fimalgoritmo
senao
   enquanto (N >= 1) e (N <= 100 ) faca
      N <- N * 3
      escreval (N)
   fimenquanto
   escreval ("=", N)
fimse
fimalgoritmo