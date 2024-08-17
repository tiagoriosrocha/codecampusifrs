import time
print('''
##############################################################################
#                                                                            #
#                              Obter Iterador                                #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''       lista = [1, 2, 3, 4] 
            iterador = iter(lista)
            print(next(iterador)) 
            print(next(iterador))
''')
lista = [1, 2, 3, 4] 
iterador = iter(lista)
print(next(iterador)) 
print(next(iterador))

time.sleep(30)