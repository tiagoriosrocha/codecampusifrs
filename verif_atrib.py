import time
print('''
##############################################################################
#                                                                            #
#                             Verifica Atributo                              #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''           class Carro: 
            modelo = "Toyota" 
            carro = Carro()
            print(hasattr(carro, 'modelo')) 
            print(hasattr(carro, 'ano')) 
''')
class Carro: 
    modelo = "Toyota" 
carro = Carro()
print(hasattr(carro, 'modelo')) 
print(hasattr(carro, 'ano')) 


time.sleep(30)