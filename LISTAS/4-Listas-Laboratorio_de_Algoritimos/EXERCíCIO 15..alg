algoritmo "Exercício 15."
var
   op, car, mult, val :inteiro
inicio
      escreval ("")
      escreval (" ++ sistema do DETRAN ++ ")
      escreval ("")
      escreval ("[1] - Calcular multas do motorista")
      escreval ("[2] - Encerrar execução")
      leia (op)
      enquanto (op = 1) faca
               escreva ("Número da carteira do motorista: ")
               leia (car)
               escreva ("Total de multas: ")
               leia (mult)
               escreva ("Valor de cada multa: ")
               leia (val)
               escreval ("O motorista da carteira ", car, " teve um total de ")
               escreval (mult," multas")
               escreval ("totalizando R$",val * mult)
               escreval("")
               escreval("")
               escreval (" ++ sistema do DETRAN ++ ")
               escreval ("[1] - Calcular multas do motorista")
               escreval ("[2] - Encerrar execução")
               leia (op)
               limpatela
      fimenquanto
fimalgoritmo
