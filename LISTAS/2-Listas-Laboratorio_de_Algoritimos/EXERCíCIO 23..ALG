algoritmo "Exercício 23."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   s, sm, qsm : real
inicio
   escreval (": BASE SALÁRIAL :")
   escreval ("Qual o valor do seu salarioa atual? ")
   leia (s)
   escreval ("Qual o valor do salario mínimo? ")
   leia (sm)
   qsm <- s/sm
   escreval ("você ganha", qsm:2:0 ," salarios minimos")
fimalgoritmo