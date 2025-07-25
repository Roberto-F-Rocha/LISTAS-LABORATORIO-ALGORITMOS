algoritmo "Exercício 06."
var
   i, r: inteiro
inicio
      mudacor ("branco")("fundos")
      mudacor ("preto")("frente")
      escreval ("quantas copias será?")
      leia (r)
      escreval ("TABELA DE PREÇOS ")
      escreval ("")
      escreval ("quantidades  R$ ")
      para i <- 1 ate r passo 1 faca
      escreval (i,"          ",i * 0.09)
      fimpara
fimalgoritmo