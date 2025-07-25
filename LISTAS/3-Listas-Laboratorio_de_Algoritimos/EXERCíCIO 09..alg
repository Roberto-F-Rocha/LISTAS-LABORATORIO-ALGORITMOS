algoritmo "Exercício 09."
var
   i,n,m:inteiro
inicio
   mudacor ("branco")("fundos")
   mudacor ("azul")("frente")
   escreval ("digite o 1° número ")
   leia (n)
   escreval ("digite o 2° número ")
   leia (m)
   se n<m entao
      escreval ("")
   senao
   mudacor ("preto")("fundos")
   mudacor ("vermelho")("frente")
   escreval ("")
   escreval ("ERRO")
fimalgoritmo
fimse
escreval("os numeros pares são ")
para i de n ate m faca
   se (i % 2 = 0) entao
      escreval (i)
   fimse
fimpara
escreval("os numero impares são ")
para i de n ate m faca
   se (i % 2 <> 0) entao
      escreval (i)
   fimse
fimpara
fimalgoritmo