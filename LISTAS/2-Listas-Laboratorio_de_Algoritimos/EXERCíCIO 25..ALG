algoritmo "Exercício 25."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   ano, dia, mes: real
   R :caractere
inicio
   R <- "S"
   enquanto  (R = "S") faca
      escreval ("/ ANO BISSEXTO OU NÃO? /")
      escreval ("")
      escreval ("- BORA LÁ SABER! -")
      escreval ("Digite uma data válida")
      escreval ("primeiro o dia:")
      leia (dia)
      escreval ("agora o mês: ")
      leia (mes)
      escreval ("e por fim o ano:")
      leia (ano)
      se (ano%4=0) e (ano%100<>0) entao
         escreval ("Esse data", dia," de ", mes," de ", ano," é valida!")
         escreval ("por tanto ela é de um ano bissexto sim! :slight_smile: ")
      senao
         escreval ("a data ", dia,"/", mes,"/", ano," não é valida!" )
         escreval ("esse ano não é bissexto! :(")
      fimse
      escreval ("")
      escreval ("Você gostaria te tentar novamente? ")
      escreval ("[S] para sim ou [N] para não: ")
      leia (R)
      limpatela
   fimenquanto
fimalgoritmo