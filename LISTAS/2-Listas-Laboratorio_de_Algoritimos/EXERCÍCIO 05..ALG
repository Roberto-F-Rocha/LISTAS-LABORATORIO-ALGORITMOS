Algoritmo "EXERCÍCIO 05."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
Var
   N1, N2, N3, N4, S, P : inteiro

Inicio
   p <- 1
   escreval("Digite quatro valores: ")
   leia(N1, N2, N3, N4)
   se N1 > 0 entao
      S <- S + N1
   senao
      se N1 < 0 entao
         P <- P * N1
      fimse
   fimse
   se N2 > 0 entao
      S <- S + N2
   senao
      se N2 < 0 entao
         P <- P * N2
      fimse
   fimse
   se N3 > 0 entao
      S <- S + N3
   senao
      se N3 < 0 entao
         P <- P * N3
      fimse
   fimse
   se N4 > 0 entao
      S <- S + N4
   senao
      se N4 < 0 entao
         P <- P * N4
      fimse
   fimse
   escreval("Soma dos valores positivos foi de: ")
   escreval (S)
   escreval("Produtos dos valores negativos: ")
   escreval (p)
Fimalgoritmo