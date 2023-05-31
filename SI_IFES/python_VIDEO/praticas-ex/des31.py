# Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. 
# Um número primo é aquele que é divisível somente por ele mesmo e por 1

#inicializaçao
divisor = 2
numPrimo = True

#pedir o numero
num = int(input("Digite um numero: "))
while num <= 0 :
    print("Numero invalido")
    num = int(input("Digite um numero: "))

#verificar se ele e primo
if num > 1 :
    while divisor < num : #para o numero ser um numero primo o num e o divisor devem ser iguais
        if num % divisor == 0 :#nao podendo ser divisiveis, um numero primo so divide por ele mesmo
            numPrimo = False
            print("O numero %d nao e Primo"%num)
            divisor = num + 1
        else :
            divisor = divisor + 1

    if numPrimo == True :
        print("O numero %d e Primo"%num)

else :
    print("Para um numero ser primo ele precisa ser maior que 1") 
    num = int(input("Digite novamente: "))