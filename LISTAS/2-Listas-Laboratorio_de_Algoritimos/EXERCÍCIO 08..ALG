algoritmo "EXERCÍCIO 08."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   unidade :inteiro
   preco :real
inicio
   escreval (" ---------------- ")
   escreval ("  VENDA DE MAÇÃS  ")
   escreval (" ---------------- ")
   ESCREVAL ("")
   escreva (" QUANTAS UNIDADE VOCÊ GOSTARIA DE COMPRAR : ")
   leia (unidade)
   se (unidade >= 12) então
      preco <- unidade * 1.10
      escreval ("")
      escreval (" O preço a ser pago é R$",preco)
   senão
      preco <- unidade * 1.30
      escreval ("")
      escreval (" O preço a ser pago é R$",preco)
   fimse
fimalgoritmo