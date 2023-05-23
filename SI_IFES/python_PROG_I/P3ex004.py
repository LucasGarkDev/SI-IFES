# Faça um programa para ler vários números positivos entre 1 e 1000, 
# validar e só parar quando o usuário digitar -1. 
# No final imprima o maior número, a quantidade de números
# pares e a quantidade de números ímpares, 
# a média dos números pares e a média dos
# números ímpares e a soma total de todos os números lidos.

#leitura e soma dos numeros
acumulador = 0
contador = 1
num = int(input("Digite um numero: "))
while num > 0 :
    num = int(input("Digite um numero: "))
    soma = soma + acumulador
    contador = contador + 1


#lembrar de tentar usar o contador como divisor da media, pois voce vai ter que fazer esse codigo
#todo dentro de um While, alem disso o acumulador devera valer o mesmo valor de "num"


