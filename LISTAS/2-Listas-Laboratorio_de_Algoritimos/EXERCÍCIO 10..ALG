algoritmo "EXERCÍCIO 10."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   nome1, velho_nome, novo_nome :caractere
   velho, novo, c, idade1 :inteiro
inicio
   novo <- 1000
   velho <- 0
   para C <- 1 ate 3 faca
      escreval ("Qual o seu nome? ")
      leia (nome1)
      limpatela
      escreval ("Quantos anos você tem? ")
      leia (idade1)
      se (idade1 > velho) então
         velho <- idade1
         velho_nome <- nome1
      fimse
         se (idade1 < novo) então
            novo <- idade1
            novo_nome <- nome1
         fimse
      fimpara
      limpatela
      escreval ("o mais velho(a) é", velho_nome)
      escreval ("com a idade de", velho," anos ")
      escreval ("")
      escreval ("o mais novo(a) é", novo_nome)
      escreval ("coma a idade de", novo," anos ")
fimalgoritmo