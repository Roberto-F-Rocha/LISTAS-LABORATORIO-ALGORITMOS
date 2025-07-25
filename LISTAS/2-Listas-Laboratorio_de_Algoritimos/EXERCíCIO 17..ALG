algoritmo "Exercício 17."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   salario, aumento :real
   Carac_tere :caractere
inicio
   escreval (" /\ salário /\")
   escreval ("")
   escreval ("qual o seu salario atual?")
   leia (salario)
   limpatela
   escreval ("escolha a letra que representa o seu aumento:")
   escreval ("")
   escreval ("  AUMENTO PERCENTUAL   ")
   escreval (" [A] |----para----| 10% ")
   escreval (" [B] |----para----| 22% ")
   escreval (" [C] |----para----| 30% ")
   escreval (" [D] |----para----| 44% ")
   escreval ("")
   leia (carac_tere)
   escolha carac_tere
   caso "A"
      aumento <-  salario + (salario * (10/100))
      escreval ("o seu novo salario é R$",aumento)
   caso "B"
      aumento <- salario + (salario * (22/100))
      escreval ("o seu novo salario é R$",aumento)
   caso "C"
      aumento <- salario + (salario * (30/100)
      escreval ("o seu novo salario é R$",aumento)
   caso "D"
      aumento <- salario + (salario * (44/100))
      escreval ("o seu novo salario é R$",aumento)
   fimescolha
fimalgoritmo

