import time
print('''
##############################################################################
#                                                                            #
#                       Operador Condicional Ternário                        #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''idade = int(input("Escreva um número: "))
mensagem = "Você é maior de idade." if idade >= 18 else "Você é menor de idade."
print(mensagem)
''')
idade = int(input("Escreva um número: "))
mensagem = "Você é maior de idade." if idade >= 18 else "Você é menor de idade."
print(mensagem)
time.sleep(30)