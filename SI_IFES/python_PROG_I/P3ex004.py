#Inicializar
numerosPares = 0
numerosImpares = 0
num = int(input("Digite um numero: "))
while num > 1000 :
    print("Numero Invalido")
    num = int(input("Digite outro numero: "))
maiorNum = num
menorNum = 99999
#Loop de escrita dos numeros
while num > 0 :
    #par
    if (num % 2) == 0 :
        somaPares = somaPares + num
        numerosPares = numerosPares + 1
    #impar
    else :
        somaImpares = somaImpares + num
        numerosImpares = numerosImpares + 1

    #para ver se o numero e maior
    if num > maiorNum :
        maiorNum = num
        
     if num < menorNum :
        menorNum = num

    #leitura do numero
    num = int(input("Digite um numero: "))
    while num > 1000 :
        print("Numero Invalido")
        num = int(input("Digite outro numero: "))

mediaPares = somaPares / numerosPares
mediaImpares = somaImpares / numerosImpares
total = somaPares + somaImpares

print("")
print("")
print("")
print("")
print("")
