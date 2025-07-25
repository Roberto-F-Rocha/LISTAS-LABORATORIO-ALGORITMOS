algoritmo "Exercício 08."
var
   i, c :inteiro
inicio
      mudacor ("vermelho")("frente")
      escreval ("informe números: ")
      repita ate
      escreval ("digite um numero: ")
      leia (i)
      se (i < 100) e (i > 200) entao
      senao
      c <- c + 1
      fimse
      ate (i < 99) ou (i > 201)
      escreval ("a quantidade de numeros informados entre 100 a 200 foi: ")
      escreval (c - 1)
      escreval ("===")
      escreval ("e um numero informado incorretamente ")
fimalgoritmo