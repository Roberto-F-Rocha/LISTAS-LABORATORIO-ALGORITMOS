algoritmo "EXERCÍCIO 07."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   nome :caractere
   idade :inteiro
inicio
      escreval ("---------------------------------- ")
      escreval ("| CAMPEONATO REGIONAL DE NATAÇÃO | ")
      escreval ("---------------------------------- ")
      escreval ("")
      escreva  ("NOME DO ATLETA: ")
      leia (nome)
      escreval ("")
      escreva ("Qual a sua idade ", nome,": ")
      leia (idade)
      se (idade >= 5) e (idade < 10) então
         escreval ("")
         escreval ("você ira competir na categoria INFANTIL: ")
      senão
         se (idade >= 11) e (idade < 17) então
            escreval ("")
            escreval ("você ira competir na categoria JUVENIL: ")
         senão
            se (idade >= 18) então
               escreval ("")
               escreval ("você ira competir na categoria SÊNIOR: ")
            senao
            fimse
         fimse
      fimse
fimalgoritmo