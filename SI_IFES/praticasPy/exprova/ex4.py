# Utilize a função criada nos exercícios anteriores para gerar agora um 
# vetor com 100 números aleatórios. Faça uma função que receba como 
# parâmetro esse vetor e dois índices (início e fim) e retorne a soma 
# dos números apenas do intervalo entre os índices [início, fim]. 
# Lembre-se de fazer a validação: início >= 0, fim < 100 e início <= fim.

import random
#-----------------funçoes------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#preencher o vetor
def preencheVetor(vetor):
    i = 0
    min = 1
    max = 100
    while i < 100 :
        n = gerarNumAleatorio(min,max)
        vetor.append(n)
        i += 1

#pedir o fim
def pedirFim(vetor):
    f = int(input("Qual sera o indice final da soma: "))
    while f <= 0 or f > len(vetor):
        print("Indice Invalido")
        f = int(input("Qual sera o indice final da soma: "))
    return f

#pedir o inicio
def pedirInicio(f):
    i = int(input("Qual sera o indice inicial da soma: "))
    while i < 0 or i > f :
        print("Indice Invalido")
        i = int(input("Qual sera o indice inicial da soma: "))
    return i

#somar os numeros entre o inicio e o fim
def somaInicioFim(inicio,fim,vetor):
    i = inicio
    soma = vetor[i]
    while i < fim:
        i += 1
        soma += vetor[i]
    return soma
        
#imprimir o resultado
def imprimir(soma,vetor,i,f):
    v = len(vetor)
    print("------------IMPRESSÃO FINAL------------")
    print("O numero total de elementos do vetor: %d"%v)
    print("O indice de começo da soma: %d"%i)
    print("O indice do final da soma: %d"%f)
    print("O valor da soma entre o inicio e o fim: %d"%soma)
    print("----------------------------------------")

#-----------------main---------------------
def main():
    numeros = []
    preencheVetor(numeros)
    fim = pedirFim(numeros)
    inicio = pedirInicio(fim)
    soma = somaInicioFim(inicio,fim,numeros)
    imprimir(soma,numeros,inicio,fim)
main()
