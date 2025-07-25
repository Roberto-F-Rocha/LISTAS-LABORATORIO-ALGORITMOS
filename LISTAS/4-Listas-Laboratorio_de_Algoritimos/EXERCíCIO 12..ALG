algoritmo "Exercício 12."
var
   n, i, f :inteiro
   nome :caractere
inicio
mudacor ("azul")("fundos")
        escreval ("seu nome por favor!")
        leia (nome)
        escreval ("")
        limpatela
   repita
      f <-1
      escreval ("digite um numero inteiro!")
      escreval ("")
      leia (n)
      se (n <= -1) ou (n <= 0) entao
      limpatela
      mudacor ("vermelho")("frente")
      mudacor ("preto")("fundos")
      escreval ("")
      escreval ("NÚMERO INVALIDO ", nome, "!")
      escreval ("")
      escreval (" +  :(  + ")
      escreval ("")
      escreval ("        ||||||||||      |||||||||| ")
      escreval ("        ||      ||      ||      || ")
      escreval ("        ||      ||      ||      || ")
      escreval ("        ||   |||||      ||   ||||| ")
      escreval ("        ||   |||||      ||   ||||| ")
      escreval ("        ||||||||||      |||||||||| ")
      escreval ("")
      escreval ("                     ||            ")
      escreval ("                     ||            ")
      escreval ("                     ||            ")
      escreval ("                     ||            ")
      escreval ("                     ||            ")
      escreval ("                     |||||||       ")
      escreval ("                          ||       ")
      escreval ("                     |||||||       ")
      escreval ("")
      escreval ("   ||||||||||||||||||||||||||||||||||||| ")
      escreval ("   ||                                 || ")
      escreval ("   ||                                 || ")
      escreval ("   ||                                 || ")
      escreval ("   ||||||||||||||||||||||||||||||||||||| ")
      escreval ("")
fimalgoritmo
     fimse
         escreval (" o fatorial de", n," é")
         para i de n ate 1 passo -1 faca
         f <- f * i
         fimpara
         escreval(" =", f)
     ate (n <= 0) ou (n <= -1)
fimalgoritmo