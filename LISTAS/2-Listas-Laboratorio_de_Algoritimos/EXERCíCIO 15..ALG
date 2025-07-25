algoritmo "Exercício 15."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   N1, N2 :inteiro
inicio
   escreval ("")
   escreval ("DETERMINADOR DE DIVISIBILIDADE ")
   escreval ("")
   escreval ("Digite um numero: ")
   leia (N1)
   escreval ("Digite outro numero:")
   leia (N2)
   escreval ("")
   se (N1 = 0) ou (N2 = 0) então
      escreval ("não pode ser numero nulo! ")
   senao
      se (N1%N2=0) entao
         escreval ("Eh divisível! ")
      senao
         se (N1 % N2 <> 0) entao
            escreval ("Não eh divisível! ")
         senao
         fimse
      fimse
   fimse
fimalgoritmo