algoritmo "Exercício 14."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   valor :real
inicio
   escreval ("Qual o valor do produto? ")
   leia (valor)
   se (valor <= 20) entao
      valor <- valor + (valor * (45/100))
   senao
      valor <- valor + (valor * (35/100))
   fimse
   escreval ("o valor da reevenda a ser pago é R$",valor)
fimalgoritmo


