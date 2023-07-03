# Faça um programa que peça o peso e a altura de várias pessoas, 
# armazene cada informação no seu respectivo vetor (você precisará de 
# dois vetores). Faça outra função que percorra esses dois vetores e 
# para cada iteração calcule o IMC e armazene-o em um terceiro vetor 
# (essa função receberá os três vetores como parâmetros).
# IMC = peso / (altura * altura)
# DICA: utilize o mesmo contador para os dois vetores. 


#-----------------funçoes------------------
#pedir o peso
def pedirPeso(vetor,c):
    peso = float(input("Digite o valor do peso do individuo %d: "%c))
    while peso <= 0 :
        print("Peso Invalido")
        peso = float(input("Digite o peso do individuo %d,novamente: "%c))
    vetor.append(peso)

#pedir a altura
def pedirAltura(vetor,c):
    altura = float(input("Digite o valor da altura do individuo %d: "%c))
    while altura <= 0 or altura > 5.0 :
        print("Peso Invalido")
        altura = float(input("Digite a altura do individuo %d,novamente: "%c))
    vetor.append(altura)

#pergunta se deseja continuar
def desejaContinuar():
    denovo = str(input("Voce deseja continuar(s/n)? ")).upper()
    while denovo != "S" and denovo != "N":
        print("Nao entendi o seu desejo")
        denovo = str(input("Voce deseja continuar(s/n)? ")).upper()
    return denovo

#calcular o IMC
def calculaIMC(pesos,alturas,imcs):
    i = 0
    while i < len(pesos):
        res = pesos[i]/(alturas[i] * alturas[i])
        imcs.append(res)
        i += 1

#imprimir os imcs
def imprimirImcs(vetor):
    i = 0
    c = 1
    print("---------IMC'S ARMAZENADOS---------")
    while i < len(vetor):
        print("O imc do individuo %d e: %s"%(c,vetor[i]))
        c += 1
        i += 1
    print("-----------------------------------")


#-----------------main---------------------
def main():
    pesos = []
    alturas = []
    contNum = 1 
    outraVez = "S"
    while outraVez == "S":
        pedirPeso(pesos,contNum)
        pedirAltura(alturas,contNum)
        contNum += 1
        outraVez = desejaContinuar()
    imcs = []
    calculaIMC(pesos,alturas,imcs)
    imprimirImcs(imcs)

main()