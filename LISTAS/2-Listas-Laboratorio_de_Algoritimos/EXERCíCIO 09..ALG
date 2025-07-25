algoritmo "Exercício 09."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   N1, N2, N3 :real
inicio
      escreval ("digite um número inteiro: ")
      leia (N1)
      limpatela
      escreval ("digite outro número inteiro: ")
      leia (N2)
      limpatela
      escreval ("por favor digite outro número inteiro: ")
      leia (N3)
      limpatela
      se (N1 > N2) e (N1 > N3) então
          escreval ("O maior número digitado foi: ", N1)
      senao
          se (N2 > N1) e (N2 > N3) então
              escreval ("O maior número digitado foi: ", N2)
          senao
              se (N3 > N1) e (N3 > N2) então
                  escreval ("O maior número digitado foi: ", N3)
              senao
              fimse
          fimse
      fimse
fimalgoritmo