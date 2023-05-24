#INICIALIZAÇÃO
contPares = 0
contImpares = 0
somaPares = 0
somaImpares = 0

maior = -1
menor = 9999999

# LER O PRIMEIRO NUMERO
num = int ( input("Número: "))
while num > 1000:
    print("Número inválido!")
    num = int ( input("Número: "))

#maior = num
#menor = num

while num > 0 :

    # CALCULOS
    if num%2 == 0:
        #PAR
        somaPares = somaPares + num
        contPares = contPares + 1
    else:
        #IMPAR
        somaImpares = somaImpares + num
        contImpares = contImpares + 1

    # MAIOR
    if num > maior:
        maior = num

    # MENOR
    if num < menor:
        menor = num

    # LER O NUMERO
    num = int ( input("Número: "))
    while num > 1000:
        print("Número inválido!")
        num = int ( input("Número: "))

# RESULTADO
mediaPares = somaPares / contPares
mediaImpares = somaImpares / contImpares

print("Resultado: ")
print("Pares: %d" %contPares)
print("Ímpares: %d" %contImpares)
print("Média dos Pares: %.1f" %mediaPares)
print("Média dos Ímpares: %.1f" %mediaImpares)
print("Soma total: %d" %(somaPares + somaImpares) )
print("Maior: %.d" %maior)
print("Menor: %.d" %menor)