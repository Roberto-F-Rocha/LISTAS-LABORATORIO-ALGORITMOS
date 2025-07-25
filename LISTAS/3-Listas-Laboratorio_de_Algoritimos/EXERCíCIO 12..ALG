algoritmo "Exercício 12."
var
   ir, i, numero, p :inteiro
inicio
   para ir <- 1 ate 1000 passo 1 faca
      escreval ("Número primo ou não? ")
      escreval ("")
      escreval ("+ BORA LÁ SABER +")
      escreval ("")
      escreval ("Digite um número: ")
      leia (numero)
      p <- 0
      para i <- 1 ate numero faca
         se (numero mod i = 0) entao
            p <- p + 1
         fimse
      fimpara
      se (p = 2)entao
         escreval ("Esse número é primo :) ")
         escreval ("")
      senao
         escreval ("Esse número não é primo :(")
         escreval ("")
      fimse
   fimpara
fimalgoritmo