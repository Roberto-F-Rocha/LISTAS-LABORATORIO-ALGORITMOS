algoritmo "Exercício 16."
var
   total, valores: real
   i, lote, cheques: inteiro
inicio
      escreva ("digite a soma dos lotes: ")
      leia(lote)
      escreva ("digite o numero de cheques: ")
      leia (cheques)
      escreval ("digite o valor dos cheques: ")
      para i <- 1 ate cheques passo 1 faca
      leia (val)
           total <- valores + total
      fimpara
           se (lote = total) entao
               escreva ("Lote OK!")
           senao
               se (lote > total) entao
                   escreva ("Diferença negativa")
               senao
                   se (lote < total) entao
                       escreva ("Diferença positiva")
                   fimse
               fimse
           fimse
fimalgoritmo
