Algoritmo "Exercício 06."

Var
    media :real
    n :vetor [1..3] de real
    c :inteiro
Inicio
   repita
      c <- c + 1
      leia (n[c])
      se (n[c] < 0) ou (n[c] > 10) entao
         escreval("Nota inválida! ")
         leia(n[c])
      fimse
      media <- media + n[c]
   ate (c = 3)
   escreval ("media iqual a: ", media / 3 :1:1)
Fimalgoritmo