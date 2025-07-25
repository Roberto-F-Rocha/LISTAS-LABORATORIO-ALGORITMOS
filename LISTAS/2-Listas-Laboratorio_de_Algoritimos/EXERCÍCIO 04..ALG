algoritmo "EXERCÍCIO 04."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   i, numero, soma :inteiro
inicio
   escreval ("soma apenas entre números pares! ")
   escreval ("")
   para i <- 1 ate 3 faca
      escreva ("Digite os número: ")
      leia (numero)
      escreval ("")
      se  (numero%2=0) entao
         soma <- numero + soma
      fimse
   fimpara
   se  (soma <> 0) entao
      escreval ("a soma entre os numeros pares foi:")
      escreval (soma)
      escreval ("----")
      escreval (" :)")
   senao
      escreval ("Infelizmente não foi possivel fazer a soma. ")
      escreval (" :( ")
   fimse
fimalgoritmo
