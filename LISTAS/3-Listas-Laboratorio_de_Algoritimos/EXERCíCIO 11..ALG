algoritmo "Exercício 11."
// i = (contador)
// p = (pessoas)
// m = (quantidade de mulheres)
// h = (homens)
//...
// altura = (altura da população)
// maior = (maior altura)
// menor = (menor altura)
// php = (percentual de homens na populção)
// map = (media de altura da população
// sm = (contador das mulheres)
// sh = (contador dos homens)
// mam = (media de altura das mulheres)
//...
//s = (genero sexual)

var
   i, p, m, h :inteiro
   altura, maior, menor, php, map, sm, sh, mam :real
   s :caractere
inicio
      mudacor ("branco")("fundos")
      mudacor ("preto")("frente")
   maior <- 0
   menor <- 1000
   escreval ("Auantas pessoas ira participar da pesquisa? ")
   leia (p)
   para i <- 1 ate p passo 1 faca
      escreval ("Qual o seu sexo? ")
      escreval ("[f] para feminino ")
      escreval ("[m] para masculino ")
      leia (s)
      escreval ("Qual a sua altura?")
      leia (altura)
      se (altura > maior) então
         maior <- altura
      fimse
      se (altura < menor) entao
         menor <- altura
      fimse
      se (s = "f") entao
         sm <- sm + altura
         m <- (m + 1)

      senao
         se (s = "m") entao
            sh <- sh + altura
            h <- (h + 1)
         fimse
      fimse
   fimpara
   escreval ("A maior altura encontrada foi: ", maior)
   escreval ("")
   escreval ("A menor altura encomtrada foi: ", menor)
   escreval ("")
   mam <- (sm / m)
   escreval ("A media de altura das mulheres é: ", mam)
   escreval ("")
   map <-  (sm + sh) / p
   escreval ("A media da altura da poulação é: ", map:1:2)
   escreval ("")
   php <-  (h / p) * 100
   escreval ("O percentual dos homens na população é: ", php:1:0, "%")
fimalgoritmo