import time
print('''
##############################################################################
#                                                                            #
#                              Deletar Atributo                              #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''           class Pessoa: 
            def __init__(self, nome, idade): 
            self.nome = nome 
            self.idade = idade 
            p = Pessoa('Ana', 25)
            print(p.idade) 
            delattr(p, 'idade')  
''')
class Pessoa: 
    def __init__(self, nome, idade): 
        self.nome = nome 
        self.idade = idade 
p = Pessoa('Ana', 25)
print(p.idade) 
delattr(p, 'idade')



time.sleep(30)