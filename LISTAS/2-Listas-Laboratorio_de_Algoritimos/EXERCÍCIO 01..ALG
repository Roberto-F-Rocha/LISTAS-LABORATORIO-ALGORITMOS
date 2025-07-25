Algoritmo "EXERCÍCIO 01."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
Var
   N1 :inteiro
Inicio
      escreval("__________________________ ")
      escreva ("Digite um número qualquer: ")
      leia(N1)
      escreval ("")
      se N1 > 0 entao
         escreval ("Esse número", N1," é positivo! ")
         escreval ("-----------------------------")
      senao
           se N1 < 0 entao
              escreval ("Esse número", N1," é negativo! ")
              escreval ("-----------------------------")
           senao
                escreval ("Esse número", N1," é neutro! ")
                escreval ("---------------------------")
           fimse
      fimse
Fimalgoritmo