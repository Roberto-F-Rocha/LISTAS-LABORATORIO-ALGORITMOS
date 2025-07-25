algoritmo "Exercício 19."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   F, resposta :caractere
inicio
mudacor ("branco", "fundos")
mudacor ("preto", "frente")
resposta <- "S"
enquanto (resposta = "S") faca
   escreval ("||  MAQUINA  ||")
   escreval ("")
   escreval ("[L] para ligar: ")
   escreval ("[D] para desaligar: ")
   escreval ("[F] para FURAR: ")
   leia (F)
   se (F = "L") entao
      escreval ("maquina LIGADA: ")
   senao
      escreval ("ERRO! ")
      se (F = "D") entao
         escreval ("maquina DESLIGADA: ")
      senao
         escreval ("ERRO! ")
         se (F = "F") entao
            escreval ("FURANDO")
         senao
            escreval ("ERRO! ")
         fimse
      fimse
   fimse
   escreval ("você quer fazer outra operação? [S] ou [N] ")
   leia (resposta)
   limpatela
fimenquanto
fimalgoritmo
