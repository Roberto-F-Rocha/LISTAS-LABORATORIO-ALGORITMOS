algoritmo "Exercício 21."
var
   valor, infla : real
inicio
   escreval ("Qual o preço do produto? ")
   leia (valor)
   se (valor < 100) entao
      infla <- valor + (valor * (10/100))
      escreval ("Imfalcionando o produto, o preço dele passa para:")
      escreval ("R$", infla)
   senao
      se (valor >= 100) entao
         infla <- valor + (valor * (20/100))
         escreval ("Imfalcionando o produto, o preço dele passa para:")
         escreval ("R$", infla)
      senao
      fimse
   fimse
fimalgoritmo