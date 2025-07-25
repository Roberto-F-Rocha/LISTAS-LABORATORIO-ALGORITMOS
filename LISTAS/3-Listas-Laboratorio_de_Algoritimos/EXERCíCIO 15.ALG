algoritmo "Exercício 15"
var
   idade, i, mdi, ru, re, ex, opiniao :inteiro
   miex, media :real
inicio
   escreval ("\/ TV ALGORITMOS \/")
   escreval ("")
   escreval (" + Vingadores: Ultimato + ")
   escreval ("")
   escreval (" - Breve Questionário - ")
   para i <- 1 ate 10 faca
      escreval ("")
      escreval ("Qual a sua idade? ")
      leia (idade)
      escreval ("")
      escreval ("/\ Sua opinião sobre o filme /\")
      escreval ("[1] - para ruim: ")
      escreval ("[2] - para regular: ")
      escreval ("[3] - para excelente: ")
      escreval ("")
      leia (opiniao)
      se (opiniao = 1) entao
         ru <- ru + 1
      senao
         se (opiniao = 2) entao
            re <- re + 1
         senao
            se (opiniao = 3) entao
               ex <- ex +1
               miex <- idade + miex
               media <- miex / ex
            fimse
         fimse
      fimse
   fimpara
   escreval (media:2:0," anos é a media de idade das pessoas que responderam Excelente")
   escreval ("")
   escreval (re," pessoas responderam Regular")
   escreval ("")
fimalgoritmo









