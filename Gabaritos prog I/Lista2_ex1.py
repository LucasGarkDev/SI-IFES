# LISTA 2 - Ex. 1
#Faça um programa que peça dois números e imprima o maior deles.

numero1 = float ( input("Informe o primeiro número: ") )
numero2 = float ( input("Informe o segundo número: ") )

if numero1 > numero2:
    print("O maior numero é o: %f" % numero1)
else:
    if numero1 < numero2:
        print("O maior numero é o: %f" % numero2)
    else:
        print("Os números são iguais: %f" % numero1)
    
