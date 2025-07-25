algoritmo "Exercício 11."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   A, B, realize  :real
   resposta :caractere
inicio
   resposta <- "S"
   enquanto (resposta = "S") faca
      escreval ("TROCA DE VALORES REAIS: ")
      escreval ("")
      escreval ("Digite dois valores ")
      leia (A)
      leia (B)
      escreval ("")
      se (A > B) então
         escreval ("os valors que você usou foi: ", A," e", B)
         escreval ("")
         realize <- A
         A <- B
         B <- realize
         escreva ("mas se trocarmos os valores de lugar fica: ")
         escreval (A," e", b)
         escreval ("")
      senao
         escreval ("ERRO! ")
         escreval ("Pois o 1°valor tem que ser maior que o 2°valor")
         escreval ("")
      fimse
      escreval ("você quer tentar novamente? ")
      escreval ("")
      escreval (" [S] para SIM: ")
      escreval ("")
      escreval (" [N] para NÃO: ")
      leia (resposta)
      limpatela
   fimenquanto
fimalgoritmo