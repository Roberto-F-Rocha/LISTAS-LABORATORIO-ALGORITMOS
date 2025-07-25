algoritmo "Exercício 20."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   valor :inteiro
   naipe :caractere
inicio
   escreval ("qual o valor da carta")
   leia (valor)
   escreval ("qual o naipe")
   leia (naipe)
   se (valor >= 2) e (valor <= 10) então
      escreval("a sua carta é um", valor," de ", naipe)
   fimse
   se (valor = 1) então
      escreval ("sua carta é um (Ás) de ", naipe)
   senao
      se (valor = 11) entao
         escreval ("sua carta é um (VALETE) de ", naipe)
      senao
         se (valor = 12) entao
            escreval ("sua carta é uma (DAMA) de ", naipe)
         senao
            se (valor = 13) então
               escreval ("sua carta é um (rei) de ", naipe)
            senao
               se (valor > 13) entao
                  escreval ("ERRO!")
               senao
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
