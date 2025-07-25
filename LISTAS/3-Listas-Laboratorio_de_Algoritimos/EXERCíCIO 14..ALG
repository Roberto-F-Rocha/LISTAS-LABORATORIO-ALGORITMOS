algoritmo "Exercício 14."
var
   i, alunos, NM :inteiro
   n1, n2, n3, n4, nota :real
   nome, D:caractere
inicio
   escreval ("quantos alunos ira participar ?")
   leia (alunos)
   para i <- 1 ate alunos passo 1 faca
      escreval ("Nome do aluno: ")
      leia (nome)
      escreval ("")
      escreval ("Número da matricula: ")
      leia (NM)
      escreval ("")
      escreval ("Nome da disciplina: ")
      leia (D)
      escreval ("")
      escreval ("agora as três notas: ")
      leia (n1)
      escreval ("")
      leia (n2)
      escreval ("")
      leia (n3)
      escreval ("")
      nota <- (N1 + N2 + N3) / 3
      se (nota >= 6) então
         escreval ("Aluno APROVADO! com media", nota)
         escreval ("")
      fimse
      se (nota < 6) entao
         escreval ("Aluno EM RECUPERAÇÃO! ")
         ESCREVAL ("")
         escreval ("NOTA DA RECUPERAÇÃO!")
         escreval ("")
         leia (n4)
         nota <- n4
         se (nota >= 6) então
            escreval ("Aluno APROVADO! com media", nota)
            escreval ("")
         senao
            se (nota <= 6) entao
               escreval ("Aluno REPROVADO! com media", nota)
               escreval ("")
            fimse
         fimse
      fimse
   fimpara
fimalgoritmo