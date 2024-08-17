#!/usr/bin/python

# Exercícicio HameKameKa
# Link: https://judge.beecrowd.com/pt/problems/view/2591
# Tiago Rios da Rocha
# 17 de Agosto de 2024

# IDEIA DE SOLUÇÃO:
#
# 1 - LEIO AS ENTRADAS
#
# 2 - DIVIDO A ENTRADA EM 2 PARTES:
#    - ANTES DO 'k'
#    - DEPOIS DO 'k'
#
# 3 - CONTO QUANTOS 'a' EXISTEM
#
# 4 - MULTIPLICO UMA QTD PELA OUTRA
#
# 5 - GERO A SAÍDA
#

##########################################################
############# LEITURA DE DADOS DA ENTRADA ################
##########################################################

#leitura primeira linha (quantidade de linhas)
qtdLinhas = int( input() ) #converto para o tipo int

#leitura das outras linhas e armazenamento em um vetor
vetor = []
for _ in range(qtdLinhas):
    vetor.append(input())


##########################################################
################   PROCESSAMENTO    ######################
##########################################################

#para cada palavra informada na entrada, eu rodo o algoritmo abaixo:
for elemento in vetor:
    #divido em 2 strings
    pedaco = elemento.split('k')
    
    contadorPrimeiraParte = 0;
    contadorSegundaParte = 0;

    #conto quantos 'a' eu encontro na primeira parte
    contadorPrimeiraParte = pedaco[0].count('a')

    #conto quantos 'a' eu encontro na segunda parte
    contadorSegundaParte = pedaco[1].count('a')
    
    #calcula a quantidade de a necessária para ser impresso
    total_a = contadorPrimeiraParte * contadorSegundaParte;
    
    #formato a saída
    stringResultado = 'k'
    for _ in range(total_a):
        stringResultado += 'a'
    
    #imprime o resultado:
    print(stringResultado)
