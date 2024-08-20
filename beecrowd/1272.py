################################################################
#    Instituto Federal do Rio Grande do Sul - Câmpus Ibirubá
#    Curso de Ciência da Computação
#    Olimpíada de Programação 2023
#
#    Alunos:
#    - Eduardo Hüther
#    - Athirson Lamonato
#    - Gustavo Gewehr
################################################################

quantidade = input()

frases = []
for i in range(int(quantidade)):
    frases.insert(i, input())

resultado = []
i=0
for frase in frases:
    
    parcial = ""
    
    palavras = frase.split(" ")
    
    for palavra in palavras:
    
        if palavra != "":
            letra = palavra[0]
            parcial += letra
        
    resultado.insert(i, parcial)
    i += 1

for result in resultado:
    print(result)