# Faça um programa que peça o peso e a altura de várias pessoas, 
# armazene cada informação no seu respectivo vetor (você precisará de 
# dois vetores). Faça outra função que percorra esses dois vetores e 
# para cada iteração calcule o IMC e armazene-o em um
# terceiro vetor (essa função receberá os três vetores como parâmetros).
# IMC = peso / (altura * altura)
# DICA: utilize o mesmo contador para os dois vetores.

#-----------------------funçoes------------------------
#pedir o peso
def pedirPeso(pesos):
    peso = float(input("Digite o valor do peso: "))
    while peso < 1.25 :
        print("Peso Invalido")
        peso = float(input("Digite o valor do peso,novamente: "))
    pesos.append(peso)

#pedir a altura
def pedirAltura(alturas):
    altura = float(input("Digite o valor da altura: "))
    while altura < 0.65 or altura > 3.00 :
        print("Altura Invalida")
        altura = float(input("Digite o valor da altura,novamente: "))
    alturas.append(altura)

#percorrer os vetores
def percorrerVetor(p,a,imcs):
    i = 0
    while i < len(p):
        imc = p[i] / a[i] ** 2
        imcs.append(imc)
        i = i + 1

#imprimir os imc's
def imprimir(i):
    print(i)

#-----------------------main---------------------------
def main():
    pesos = []
    alturas = [] 
    imcs = []
    p = pedirPeso(pesos)
    a = pedirAltura(alturas)
    percorrerVetor(pesos,alturas,imcs)
    imprimir("O valor do IMC é: %s"%imcs)
main()
