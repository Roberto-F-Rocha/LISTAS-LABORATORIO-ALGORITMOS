algoritmo "EXERCÌCIO 16."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   N1, N2, acao :real
   D :caractere
inicio
   escreval("")
   escreval ("|     ESCOLHA UM NÚMERO:   | ")
   leia (N1)
   escreval ("")
   escreval ("AGORA ESCOLHA UMA AÇÃO ARITMÉTICA ")
   escreval (" [+] para ADIÇÃO: ")
   escreval ("")
   escreval (" [-] para SUBTRAÇÃO: ")
   escreval ("")
   escreval (" [*] para MULTIPLICAÇÃO: ")
   escreval ("")
   escreval (" [/] para DIVISÃO: ")
   escreval ("")
   leia (D)
   escreval ("|    ESCOLHA OUTRO NÚMERO: | ")
   leia (N2)
   escreval ("")
   se (D = "+") entao
      acao <- N1 + N2
      escreval ("Resultado da SOMA:", acao)
   senao
      se (D = "-") entao
         acao <- N1 - N2
         escreval ("Resultado da ADIÇÃO:", acao)
      senao
         se (D = "*") entao
            acao <- N1 * N2
            escreval ("Resultado da MULTIPLICAÇÃO:", acao)
         senao
            se  (D = "/") e (N1 = 0) ou (N2 = 0) entao
               escreval ("ERRO!")
            senao
               acao <- (N1 / N2)
               escreval ("Resultado da DIVISÃO:", acao:2:2)
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
