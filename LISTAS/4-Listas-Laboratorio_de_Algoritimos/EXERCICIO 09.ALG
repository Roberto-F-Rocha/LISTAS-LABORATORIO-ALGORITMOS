algoritmo "Exercicio 09"
var
   N : inteiro
   soma, contador : real
inicio
      leia(N)
      repita
      se (N <= 0) então
      senao
      contador <- contador + 1
      soma <- (N * N) + soma
      fimse
      escreva (contador,"²")
      ate (contador = N)
      escreval ("")
      escreval(" =",soma)
fimalgoritmo