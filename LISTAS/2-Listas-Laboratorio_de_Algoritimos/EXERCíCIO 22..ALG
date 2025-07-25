algoritmo "Exercício 22."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   salario, aumento :real
   tp :inteiro
   func, resposta :caractere
inicio
   resposta <- "s"
   enquanto (resposta = "s") faca
      escreval (": AUMENTO SALARIAL :")
      escreval ("")
      Escreval("Digite o seu salario: ")
      leia(salario)
      escreval ("")
      Escreval ("[M] para Mulheres ")
      escreval ("[H] para Homens ")
      escreval ("[D] para demais funcionários ")
      leia(func)
      escreval ("")
      Escreval("Digite o seu tempo na empresa")
      leia(tp)
      Se (func = "m") e (tp >= 4) entao
         aumento <- salario + (salario * (8/100))
         Escreval("O reajuste no seu salario foi de: ",aumento)
      Senao
         Se (func = "f") e (tp >= 6) entao
            aumento <- salario + (salario * (12/100))
            Escreval("O reajuste no seu salario foi de: ",aumento)
         senao
            aumento <- salario + (salario * (4/100))
            Escreval("O reajuste no seu salario foi de: ",aumento)
         Fimse
      Fimse
      escreval ("")
      escreval ("você quer fazer outra operação? [s] ou [n] ")
      leia (resposta)
      limpatela
   fimenquanto
fimalgoritmo
