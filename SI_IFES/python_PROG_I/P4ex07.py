# Faça um programa em Python utilizando funções para calcular o IMC 
# (Índice de Massa Corpórea). Você deve fazer uma função para 
# ler e validar o peso e outra para ler e validar
# a altura de uma pessoa. Depois faça uma função para 
# calcular o IMC, de acordo com a
# seguinte fórmula:
# IMC = (peso) / (altura * altura)
# Em seguida faça outra função para imprimir o resultado, de 
# acordo com a tabela abaixo:
# Categoria IMC
# Abaixo do peso Abaixo de 18,5
# Peso normal 18,5 ≤ IMC < 25,0
# Sobrepeso 25,0 ≤ IMC < 30,0
# Obeso leve 30,0 ≤ IMC < 35,0
# Obeso moderado 35,0 ≤ IMC < 40,0
# Obeso mórbido 40,0 e acima
# O seu programa principal deve conter apenas chamadas para 
# as funções criadas.

#------------------funçoes----------------------------
#dizer o resultado
def resultado(imc):
    print("Seu IMC é: %.2f"  %imc)
    
    if imc < 18.5 :
        print("Abaixo do peso")
    elif imc < 25 :
        print("Peso Normal")
    elif imc < 30 :
        print("Sobrepeso")
    elif imc < 35 :
        print("Obeso Leve")
    elif imc < 40 :
        print("Obeso Moderado")
    else :
        print("Obeso Morbido")

#pedir peso
def pedirPeso():
    peso = float(input("Digite o valor do peso: "))
    while peso < 1.25 :
        print("Peso Invalido")
        peso = float(input("Digite o valor do peso,novamente: "))
    return peso

#pedir altura
def pedirAltura():
    altura = float(input("Digite o valor da altura: "))
    while altura < 0.65 or altura > 3.00 :
        print("Altura Invalida")
        altura = float(input("Digite o valor da altura,novamente: "))
    return altura

#calcular o imc
def calIMC(peso,altura):
    calculo = peso / altura * altura
    return calculo


#------------------main-------------------------------
def main():
    peso = pedirPeso()
    altura = pedirAltura()
    imc = calIMC(peso,altura)
    resultado(imc)
main()