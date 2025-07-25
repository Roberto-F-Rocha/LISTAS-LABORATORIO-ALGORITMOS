algoritmo "Exercício 07."
var
   hora :inteiro
inicio
escreval ("hora do dia: ")
mudacor ("verde")("frente")
repita ate
   escreval ("digite uma horas: obs: apenas as horas! ")
   leia (hora)
   se (hora >= 6) e (hora <= 11) entao
      escreval ("É uma bela manhã para se programar! ")
   senao
      se (hora >= 12) e (hora <= 17) entao
         escreval ("A tarde está perfeita para resolver as listas de exercícios de Algoritmos! ")
      senao
         se (hora >= 18) e (hora <= 24) entao
            escreval ("A noite é o horário em que os hackers entram em ação. Vamos codar! ")
         fimse
      fimse
   fimse
ate (hora >= 25) ou (hora <= 5)
fimalgoritmo