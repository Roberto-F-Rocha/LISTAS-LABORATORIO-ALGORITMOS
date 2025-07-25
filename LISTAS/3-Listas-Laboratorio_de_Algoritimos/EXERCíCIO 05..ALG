algoritmo "Exercício 05."
var
   i :inteiro
   altura, maior, menor :real

inicio
   maior <- 0
   menor <- 1000
   para i <- 1 ate 5 passo 1 faca
      escreval ("Qual a sua altura?")
      leia (altura)
      se (altura > maior) então
         maior <- altura
      fimse
         se (altura < menor) entao
            menor <- altura
         fimse
   fimpara
   escreval ("a altura mas alta é: ", maior:1:2)
   escreval ("")
   escreval ("a altura asm baixa é: ", menor:1:2)
fimalgoritmo