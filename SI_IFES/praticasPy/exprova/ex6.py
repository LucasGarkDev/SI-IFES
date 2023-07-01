# Faça um programa que peça o peso e a altura de várias pessoas, 
# armazene cada informação no seu respectivo vetor (você precisará de 
# dois vetores). Faça outra função que percorra esses dois vetores e 
# para cada iteração calcule o IMC e armazene-o em um terceiro vetor 
# (essa função receberá os três vetores como parâmetros).
# IMC = peso / (altura * altura)
# DICA: utilize o mesmo contador para os dois vetores. 


#-----------------funçoes------------------
#pedir o peso
def pedirPeso(numeracao,vetor):
    peso = float(input("Digite o peso do individuo %d: "%numeracao))
    while peso < 0 :
        print("Peso Invalido")
        peso = float(input("Digite o peso do individuo %d, novamente: "%numeracao))
    if peso == 0 :
        return False
    else:
        return vetor.append(peso)
    
#pedir altura
def pedirAltura(numeracao,vetor):
    altura = float(input("Digite a altura do individuo %d: "%numeracao))
    while altura < 0 :
        print("Altura Invalida")
        altura = float(input("Digite a altura do individuo %d, novamente: "%numeracao))
    if altura == 0 :
        return False
    else :
        return vetor.append(altura)

#calcular IMC
def calcularIMC(peso,altura,imcs):
    i = 0
    while i < len(peso):
        imc = peso[i] / (altura[i] * altura[i])
        imcs.append(imc)
        i += 1

#imprimir
def imprimirFinal(vetor):
    i = 0
    print("----------TODOS OS IMCS-----------")
    while i < len(vetor):
        print("individuo %s: %s"%(i,vetor[i]))
        print("-------------------------------")
        i += 1


#-----------------main---------------------
pesos = []
alturas = []
c = 1
peso = True
altura = True
while peso != False and altura != False:
    peso = pedirPeso(c,pesos)
    altura = pedirAltura(c,alturas)
    c += 1
imcs = []
calcularIMC(pesos,alturas,imcs)
imprimirFinal(imcs)


