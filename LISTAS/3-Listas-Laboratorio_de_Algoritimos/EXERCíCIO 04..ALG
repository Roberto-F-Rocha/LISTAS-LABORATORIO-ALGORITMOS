algoritmo "Exercício 04."
var
   i, resposta, idade, maior, menor :inteiro

inicio
      escreval ("quantas pessoas ira participar?")
      leia (resposta)
      para i <- 1 ate resposta passo 1 faca
      escreval ("Qual a sua idade?")
      leia (idade)
      se (idade >= 18) então
          maior <- maior + 1
      senao
         menor <- menor +1
      fimse
      fimpara
      escreval ("os mais velhos são:", maior)
      escreval ("")
      escreval ("os mais novos são:", menor)
fimalgoritmo