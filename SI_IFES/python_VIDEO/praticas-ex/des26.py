# Faça um programa para ler vários números positivos entre 1 e 1000, validar e só parar
# quando o usuário digitar -1. No final imprima o maior número, a quantidade de números
# pares e a quantidade de números ímpares, a média dos números pares e a média dos
# números ímpares e a soma total de todos os números lidos.


#inicializar
num = 1 
soma = 0
maiorNum = 1
somaPar = 0
somaImpar = 0
quantidadePar = 0
quantidadeImpar = 0
#pedir o numero
while num >= 0 and num <= 1000:
    num = int(input("Digite um numero(de 1 a 1000): "))
    while num < -1 or num > 1000:
        print("Numero invalido")
        num = int(input("Digite um numero(de 1 a 1000): "))

    #perguntar se ele e o maior
    if num > maiorNum :
        maiorNum = num

    #se e par ou impar
    if num % 2 == 0 :
        somaPar = somaPar + num
        quantidadePar = quantidadePar + 1
    else :
        somaImpar = somaImpar + num
        quantidadeImpar = quantidadeImpar + 1

    soma = soma + 1

#media dos pares
mediaPar = somaPar / quantidadePar
#meida dos impares
mediaImpar = somaImpar / quantidadeImpar
print("O maior numero e: %d"%maiorNum)
print("A quantidade de numeros pares e: %d"%quantidadePar)
print("A quantidade de numeros impares e: %d"%quantidadeImpar)
print("A media dos numeros pares e: %.2f"%mediaPar)
print("A media dos numeros impares e: %.2f"%mediaImpar)
print("O total de numeros em geral e: %d"%soma)


