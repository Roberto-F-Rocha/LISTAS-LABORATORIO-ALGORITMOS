algoritmo "Exercício 05."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   convrt, T1, T2 :real
   graus :caractere
inicio
      escreval ("---------------------------------------")
      escreval (" Qual temperatura você quer converter? ")
      escreval ("---------------------------------------")
      escreval ("")
      escreval ("(C) para graus CELSIUS: ")
      escreval ("")
      escreval ("(F) para graus FAHRENHEIT: ")
      escreval ("")
      leia (graus)
      escreval ("==")
      escreval ("")
      escolha (graus)
      caso "C"
          escreva ("Qual a temperatura em CELSIUS: ")
          leia (T1)
          escreval ("")
          convrt <- (T1 + 32) * 9.5
          escreva ("A temperatura em FAHRENHEIT é de", convrt)
          escreval ("")
      caso "F"
          escreval ("Qual a temperatura em FAHRENHEIT: ")
          leia (T2)
          escreval ("")
          convrt <- (T2 - 32) / 1.8
          escreva ("A temperatura em CELSIUS é de", convrt:4:1)
          escreval ("")
      fimescolha
fimalgoritmo