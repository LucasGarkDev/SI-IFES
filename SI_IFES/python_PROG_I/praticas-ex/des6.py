# Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

cont = 1
numeroImpares = 0
while cont <= 50 :
    if (cont % 2 == 1) :
        numeroImpares = cont
        print("O numero %d e impar"%numeroImpares)
    cont = cont + 1