import time
print('''
##############################################################################
#                                                                            #
#                         Objeto de Bytes Imutável                           #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''           seq_bytes = [72, 101, 108, 108, 111] # Cód ASCII para 'Hello' 
            obj_bytes = bytes(seq_bytes)
            print(obj_bytes)  
''')
seq_bytes = [72, 101, 108, 108, 111]  
obj_bytes = bytes(seq_bytes)
print(obj_bytes) 


time.sleep(30)