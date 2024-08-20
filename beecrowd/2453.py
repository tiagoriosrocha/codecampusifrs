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

entrada = input()

entrada = entrada.replace("pp", "1")

entrada = entrada.replace("p", "")

entrada = entrada.replace("1", "p")

print(entrada)