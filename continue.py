import time
print('''
##############################################################################
#                                                                            #
#                                Continue                                    #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''           for i in range(5): 
            if i == 2: 
            continue
            print(i)
''')
for i in range(5): 
    if i == 2: 
        continue
print(i)

time.sleep(30)