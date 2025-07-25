algoritmo "Exercício 24."
// DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
var
   resposta, pedido :caractere
   uni, some, somat :real
inicio
   resposta <- "S"
   enquanto (resposta = "S") faca
   mudacor ("branco") ("fundos")
mudacor ("vermelho") ("frente")
escreval (": Lanchonete Coma Bem :")
escreval ("")
escreval ("Qual o seu pedido? ")
escreval ("")
escreval ("ESPECIFICAÇÃO----CÓDIGO----PREÇO")
escreval ("CACHORRO QUENTE----100------1.20")
escreval ("BAURU SIMPLES------101------1.30")
escreval ("BAURU COM OVO------102------1.50")
escreval ("HAMBÚRGER----------103------1.20")
escreval ("CHEESEBURGUER------104------1.30")
escreval ("REFRIGERANTE-------105------1.00")
leia (pedido)
escreval ("Quantas unidades do pedido?")
leia (uni)
escolha (pedido)

caso "100"
   some <- (uni * 1.20)
   escreval ("O codigo do seu pedido é", pedido)
   escreval ("você ira pagar R$",some)
caso "101"
   some <- (uni * 1.30)
   escreval ("O codigo do seu pedido é", pedido)
   escreval ("você ira pagar R$",some)
caso "102"
   some <- (uni * 1.50)
   escreval ("O codigo do seu pedido é", pedido)
   escreval ("você ira pagar R$",some)
caso "103"
   some <- (uni * 1.20)
   escreval ("O codigo do seu pedido é", pedido)
   escreval ("você ira pagar R$",some)
caso "104"
   some <- (uni * 1.30)
   escreval ("O codigo do seu pedido é", pedido)
   escreval ("você ira pagar R$",some)
caso "105"
   some <- (uni * 1.00)
   escreval ("O codigo do seu pedido é ", pedido)
   escreval ("você ira pagar R$",some)
fimescolha
escreval ("você quer fazer outro pedido? [S] ou [N] ")
leia (resposta)
se (resposta = "S") então
senao
   escreval ("pedido finalizado com sucesso: ")
   limpatela
fimse

limpatela
somat <- somat + some
fimenquanto
escreval ("valor total do pedido é R$", somat)
fimalgoritmo