algoritmo "Exercício 10."
var
   f :inteiro
   c :real
inicio
      escreval ("Tabela de Equivalência de graus F para C")
      escreval (" F         C")
      para f <-32  ate 104 passo 1 faca
      c <- (f - 32) * 5/9
      escreval (F,"°       ", c:2:2, "°")
      fimpara
fimalgoritmo