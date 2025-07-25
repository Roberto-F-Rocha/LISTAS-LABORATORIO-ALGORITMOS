algoritmo "Exercício 13."
var
   N1, N2, cont :inteiro
   divisao :real
   s :caractere
inicio
         s <- "S"
         enquanto (s = "S") faca
         escreval ("digite o primeior número: ")
         leia (N1)
         escreval ("digite o segundo número: ")
         leia (N2)
            se (N2 = 0) entao
         repita
               escreval ("")
               escreval ("o segundo valor informado é inválido! ")
               escreval ("")
               escreval ("digite outro número diferente de 0: ")
               leia (N2)
               escreval ("")
               limpatela
         ate (N2 <> 0)
            fimse
               se (s = "N") entao
               senao
                  divisao <- (N1 / N2)
                  cont <- cont + 1
                  escreval ("")
                  escreval ("o resulatado da divisão é", divisao)
            fimse
            escreval ("Deseja realizar outra divisão? (S para SIM, N para NÃO) ")
            leia (s)
            escreval ("")
         fimenquanto
         escreval ("A quantidade de divisões que foram realizadas é", cont)
fimalgoritmo