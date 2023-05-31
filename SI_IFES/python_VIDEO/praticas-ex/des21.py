# Faça um programa que peça um numero inteiro positivo e em seguida mostre este numero invertido.
# Exemplo:
#   12376489
#   => 98467321

#pedir o numero 
num = int(input("Digite um numero inteiro de 1 a 1000: "))
while num < 1 or num > 1000 :
    print("Numero invalido")
    num = int(input("Digite um numero inteiro de 1 a 1000: "))


#separador de unidades
if num <= 9:
    print("O inverso desse número é: %d" % num)
elif num <= 99:
    separar = num // 10
    resto = num % 10
    print("O inverso desse número é: %d%d" % (resto, separar))
else:
    separar1 = num // 100
    resto1 = num % 100
    separar2 = resto1 // 10
    resto2 = resto1 % 10
    print("O inverso desse número é: %d%d%d" % (resto2, separar2, separar1))

    