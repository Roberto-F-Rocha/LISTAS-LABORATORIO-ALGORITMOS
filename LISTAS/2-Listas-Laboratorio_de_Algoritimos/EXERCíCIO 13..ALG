algoritmo "Exercício 13."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   N1, N2, N3, soma : real
inicio
   escreval ("qua sua primeiro nota? ")
   leia (N1)
   escreval ("qual sua segunda nota? ")
   leia (N2)
   escreval ("qual sua terceira nota? ")
   leia (N3)
   escreval ("")
   soma <- (N1+N2+N3) / 3
   escreval ("sua media é ", soma:2:2)
   se (soma >= 7.0) entao
      escreval ("parabéns você esta APROVADO: ")
   senao
      se (soma < 3.5) entao
         escreval ("infelizmente você esta REPROVADO: ")
      senao
         se (soma < 7) e (soma >= 3.5) então
            escreval ("estude mais 4°PROVA: ")
         senao
         fimse
      fimse
   fimse
fimalgoritmo