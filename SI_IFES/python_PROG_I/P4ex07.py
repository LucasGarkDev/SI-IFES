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
#pedir peso
def pedirPeso() :
    peso = float(input("Digite o peso: "))
    while peso < 2.5 :
        print("Peso Invalido")
        peso = float(input("Digite o peso, novamente: "))
    return peso

#pedir a altura
def pedirAltura() :
    altura = float(input("Digite a altura: "))
    while altura < 0.62 :
        print("Altura Invalida")
        altura = float(input("Digite a altura, novamente: "))
    return altura

#calcular o IMC
def imc(p,a):
    calculo = p / (a * a)
    return calculo 

#determinar a categoria do IMC
def categoria(imc) :
    if imc < 18.5 :
        print("Abaixo do peso")
    elif imc <= 25.0 :
        print("Peso Normal") 
    elif imc <= 30.0 :
        print("Sobrepeso")
    elif imc <= 35.0 :
        print("Obeso Leve")
    elif imc <= 40.0 :
        print("Obseo Moderado")
    else:
        print("Obeso Morbido")

#------------------main-------------------------------
def main() :
    peso = pedirPeso()
    altura = pedirAltura()
    resIMC = imc(peso,altura)
    categoria(resIMC)

main()