 algoritmo "EXERCÍCIO 06."
 // DESCIPLINA : LABORATÓRIO DE ALGORITMOS
// DOCENTE    : DYEGO MAGNO OLIVEIRA SOUZA
// DISCENTE   : ROBERTO FERNANDES ROCHA
// DATA ATUAL : 2021
 var
    estado_civil :caractere
 inicio
       escreval ("QUAL O SEU ESTADO CIVIL")
       escreval ("[S] para SOLTEIRO(a): ")
       escreval ("[C] para CASADO(a): ")
       escreval ("[D] para DIVORCIADO(a): ")
       escreval ("[V] para VIÙVO(a): ")
       escreval ("[UE] para UNIÂO ESTÀVEL(a): ")
       leia (estado_civil)
       se (estado_civil = "S") entao
           escreval ("você esta solteiro :) ")
       senao
          se (estado_civil = "C") então
              escreval ("você esta casado :( ")
          senao
             se (estado_civil = "D") então
                 escreval ("você esta divorciado :( ")
             senao
                 se (estado_civil = "V") então
                     escreval ("você esta viúvo :( ")
                 senao
                     se (estado_civil = "UE") entao
                         escreval ("você esta em uma inião estável :)")
                     senao
                   fimse
                fimse
             fimse
          fimse
       fimse
 fimalgoritmo














I. Solteiro;
II. Casado;
III. Divorciado;
IV. Viúvo;
V. União Estável.
