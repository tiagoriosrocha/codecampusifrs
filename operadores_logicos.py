import time
print('''
##############################################################################
#                                                                            #
#                            Operadores Lógicos                              #
#                                                                            #
##############################################################################
#                                                                            #
#                    Autor: Joaquim Rossolen Debiasi                         #
#                       Data de Criação: 22/07/2024                          #
#                                                                            #
##############################################################################''')

print('''           tem_internet = True 
            tem_wifi = False 
            if tem_internet and not tem_wifi: 
            print("Você está conectado à internet, mas sem Wi-Fi.")
''')
tem_internet = True 
tem_wifi = False 
if tem_internet and not tem_wifi: 
    print("Você está conectado à internet, mas sem Wi-Fi.") 

time.sleep(30)