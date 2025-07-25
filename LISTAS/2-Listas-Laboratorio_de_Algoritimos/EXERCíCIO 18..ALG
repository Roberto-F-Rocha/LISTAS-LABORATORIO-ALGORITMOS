algoritmo "Exercício 18."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   Peso, Altura, imc :real
inicio
   escreval (" IMC ")
   escreval ("")
   escreva  (" + Qual é o seu peso em kg? ")
   Leia (Peso)
   limpatela
   escreval (" IMC ")
   escreval ("")
   escreval (" + Qual a sua altura em metros? ")
   leia (Altura)
   limpatela
   imc <- Peso / (Altura * Altura)
   escreval (" IMC ")
   escreval (" + segundo o seu pesso ", Peso," e sua altura", Altura)
   escreval ("")
   escreval (" + O seu IMC é de ", imc:5:2)
   escreval ("")

   se (imc >= 18.5) entao
      escreval (" + magreza!")
   senao
      se (imc >= 18.5) e (imc < 24.9) entao
         escreval (" + saudável ! ")
      senao
         se (imc >= 25) e (imc < 29.9) entao
            escreval (" + sobrepeso ! ")
         senao
            se (imc >= 30) e (imc < 34.9) entao
               escreval (" + obesidade tipo I! ")
            senao
               se (imc >= 35) e (imc < 39.9) entao
                  escreval (" + obesidade tipo II (severa)!")
               senao
                  se (imc >= 40) entao
                     escreval (" + Obesidade III (mórbida)! ")
                  senao
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimSE
fimalgoritmo