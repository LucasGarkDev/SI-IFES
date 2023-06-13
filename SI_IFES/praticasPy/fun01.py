# Faça um programa, com uma função que necessite de três argumentos,
# e que forneça a soma desses três argumentos através de uma função.
# Seu script também deve fornecer a média dos três números, através
# de uma segunda função que chama a primeira.

import biblifun
#------------------main----------------
outroNum = "sim"
recebeSoma = 0
cont = 1
while outroNum == "sim":
    n = biblifun.pedirNum()
    recebeSoma = biblifun.soma(recebeSoma,n)
    cont = cont + 1
    outroNum = biblifun.outroN()
recebeMedia = biblifun.media(recebeSoma,cont)
print("A soma desses numeros e: %d"%recebeSoma)
print("A media desse numeros e: %.2f"%recebeMedia)