algoritmo "Exercício 05."
var
   n, me, ma: inteiro
   r: caractere
inicio
   escreva ("digite um numero: ")
   leia (n)
   ma <- n
   me <- n
   escreval ("você gostaria de continuar? ")
   escreval ("[s] - para Sim ")
   escreval ("[N] - para Não ")
   leia (r)
   enquanto (r = "S") faca
      escreva ("digite um numero: ")
      leia (n)
      se (n > ma) entao
         ma <- n
      senao
         se (n < me) entao
            me <- n
         fimse
      fimse
      escreval ("você gostaria de continuar? ")
      escreval ("[s] - para Sim ")
      escreval ("[N] - para Não ")
      leia (r)
   fimenquanto
   escreval ("o maior numero digitado foi: ", ma)
   escreva ("o menor numero digitado foi: ", me)
fimalgoritmo
