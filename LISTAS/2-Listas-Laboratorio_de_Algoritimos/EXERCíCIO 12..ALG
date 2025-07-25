algoritmo "Exercício 12."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   L1, L2, L3 :inteiro
inicio
   escreval ("classificador de um triângulo")
   escreval ("qual o valor dos lados do triâgulo? ")
   escreval ("1° LADO")
   leia (L1)
   escreval ("2° LADO")
   leia (L2)
   escreval ("3° LADO")
   leia (L3)
   se (L1 = L2) e (L1 = L3) entao
      escreval ("Esse triângulo possui todos os lado iguais: ")
      escreval ("")
      escreval ("Portanto ele é designado Equilátero.")
   senao
      se (L1 <> L2) e (L2 <> L3) e (L1 <> L3) entao
         escreval ("Esse triângulo possui todos os lado diferente: ")
         escreval ("")
         escreval ("Portanto ele é designado Escaleno. ")
      senao
         escreval ("Esse triângulo possui apenas dois lados iguais: ")
         escreval ("")
         escreval ("Portanto ele é designado Isósceles. ")
      fimse
   fimse
fimalgoritmo