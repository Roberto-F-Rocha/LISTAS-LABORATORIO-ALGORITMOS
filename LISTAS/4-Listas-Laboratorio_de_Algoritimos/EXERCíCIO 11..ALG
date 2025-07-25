algoritmo "Exercício 11."
var
   acao, N1, N2, multpli, c :inteiro

inicio
    mudacor ("amarelo") ("frente")
    enquanto (acao <> 2) faca
    escreval (" + Sistema de multiplicação + ")
    escreval ("[1] - para Multiplicar ")
    escreval ("[2] - para Sair ")
    leia (acao)
    limpatela
    se (acao = 1) entao
       escreval ("digite o primeiro número: ")
       leia (N1)
       escreval ("digite o segundo numero: ")
       leia (N2)
       multpli <- (N1 * N2)
       escreval ("a multiplicação de", N1," e", N2," é: ")
       escreval ( multpli )
       escreval ("")
       escreval ("")
    senao
       se (acao = 2) entao
          escreval ("saindo :) ")
          timer 200
          c <- 4
          repita
          c <- c - 1
          escreval (c)
          ate (c = 1)
          escreval (" ficou bom? ")
       fimse
    fimse
 fimenquanto
fimalgoritmo
