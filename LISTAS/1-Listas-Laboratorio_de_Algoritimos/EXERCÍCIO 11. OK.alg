algoritmo "Exercício 11."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   p1, p2, p3, M1, M2, M3, media :real
   instt :caractere
inicio
      escreval ("Qual é sua intituição?")
      leia (instt)
      limpatela
      escreval ("------")
      escreval (  instt  )
      escreval ("------")
      escreval ("")
      escreval ("Qual o peso da 1° unidade? ")
      leia (p1)
      escreval ("Qual foi sua nota na 1° unidade? ")
      leia (M1)
      limpatela
      escreval ("-------")
      escreval (  instt  )
      escreval ("-------")
      escreval ("")
      escreval ("Qual o peso da 2° unidade? ")
      leia (p2)
      escreval ("Qual foi sua nota na 2° unidade? ")
      leia (M2)
      limpatela
      escreval ("-------")
      escreval (  instt  )
      escreval ("-------")
      escreval ("")
      escreval ("Qual o peso da 3° unidade? ")
      leia (p3)
      escreval ("Qual foi sua nota na 3° unidade? ")
      leia (M3)
      limpatela
      escreval ("-------")
      escreval (  instt  )
      escreval ("-------")
      escreval ("")
      media <-  (p1 * M1 + P2 * M2 + P3 * M3) / (P1 + P2 + P3)
      escreval ("A sua média ponderada na ", instt," foi de: ")
      escreval ("")
      escreval ( media )
      escreval ("-----")

fimalgoritmo