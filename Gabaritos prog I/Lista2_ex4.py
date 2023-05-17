# LISTA 2 - Ex. 4

# Faça um programa que peça a hora atual e mostre uma mensagem
# na tela de acordo com os intervalos

hora = int(input("Informe a hora entre 0 e 23: "))

if hora < 0 or hora >= 24:
    print ("Hora inválida")
elif hora < 5:
    print ("Vai dormir...")
elif hora < 12:
    print ("BOM DIA")
elif hora < 18:
    print ("BOA TARDE")
else:
    print ("BOA NOITE")


    
