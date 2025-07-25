algoritmo "Exercício 09"
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   dolar,reais, convers, cota :real
   moeda, resposta :caractere
inicio
   resposta <- "S"
   enquanto (resposta = "S") faca
      escreval ("+++++++++++++")
      escreval ("+ CONVERSOR +")
      escreval ("+++++++++++++")
      escreval ("")
      escreval (" ESCOLHA QUAL MOEDA QUER CONVERTER ")
      escreval (" [1] para DÓlar US$: ")
      escreval (" [2] para Real R$: ")
      leia (moeda)
      limpatela
      escreval ("")
      escolha moeda
      caso "1"
         escreval ("Qual a cotação do dolar hoje?")
         leia (cota)
         escreval ("----")
         escreval ("")
         escreval ("Quantos Dólares gostaria de converter para reais?:")
         escreval ("US$:")
         leia (dolar)
         convers <- dolar * cota
         escreval (" A conversão de US$ para R$ foi de R$ ",convers:4:2)
      caso "2"
         escreval ("Quantos Reais gostsria de converter para dólares?:")
         escreval ("R$:")
         leia (reais)
         convers <- reais / cota
         escreval (" A conversão de R$ para US$ foi de US$ ",convers:4:2)
      fimescolha
      escreval ("você quer fazer outra operação? [S] ou [N] ")
      leia (resposta)
      limpatela
   fimenquanto
fimalgoritmo