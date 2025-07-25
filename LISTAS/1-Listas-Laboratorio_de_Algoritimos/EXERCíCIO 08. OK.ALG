algoritmo "Exercício 08."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   P, A, imc :real
inicio
   escreval ("-----")
   escreval (" IMC ")
   escreval ("-----")
   escreval ("")
   escreva  (" + Qual é o seu peso em kg? ")
   Leia (P)
   limpatela
   escreval ("-----")
   escreval (" IMC ")
   escreval ("-----")
   escreval ("")
   escreval (" + Qual a sua altura em metros? ")
   leia (A)
   limpatela
   imc <- P / (A * A)
   escreval ("-----")
   escreval (" IMC ")
   escreval ("-----")
   escreval (" + segundo o seu pesso ", P,"e sua altura", A)
   escreval ("")
   escreval (" + O seu IMC é de ", imc:5:2)
   escreval ("")

   se (imc >= 17) e (imc < 18.49) entao
      escreval (" + você esta abaixo do peso!")
      escreval ("-----------------------------")
   senao
      se (imc >= 18.50) e (imc < 24.99) entao
         escreval (" + Você esta no peso ideal! ")
         escreval ("-----------------------------")
      senao
         se (imc >= 25) e (imc < 29.99) entao
            escreval (" + Você esta acima do peso! ")
            escreval ("-----------------------------")
         senao
            se (imc >= 30) e (imc < 34.99) entao
               escreval (" + Você esta na obesidade tipo I! ")
               escreval ("-----------------------------------")
            senao
               se (imc >= 35) e (imc < 39.99) entao
                  escreval (" + Voçê esta na obesidade tipo II (severa)!")
                  escreval ("--------------------------------------------")
               senao
                  se (imc >= 40) entao
                     escreval (" + Obesidade III (mórbida)! ")
                     escreval ("-----------------------------")
                  senao
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimSE
fimalgoritmo