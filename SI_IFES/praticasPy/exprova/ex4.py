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
def preencherVetor(min,max,vetor):
    cont = 0
    while cont < 100 :
        n = gerarNumAleatorio(min,max)
        vetor.append(n)
        cont += 1

#pedir o fim
def pedirFim():
    f = int(input("Digite o indice que voce deseja terminar a soma(indice < 100): "))
    while f > 100 :
        print("Indice invalido")
        f = int(input("Digite novamente o indice(indice < 100): "))
    return f

#pedir o inicio
def pedirInicio(f):
    i = int(input("Digite o indice de começo da soma(indice >= 0 )"))
    while i < 0 or i > f :
        print("Indice Invalido")
        i = int(input("Digite o indice novamente(indice >= 0 )")) 
    return i

#soma entre os valores do inicio ate o fim
def somaInicioFim(inicio,fim,vetor):  
    cont = inicio
    soma = 0 
    while cont <= fim :
        soma += vetor[cont]
        cont += 1
    return soma

#imprimir
def imprimir(elemento,i,f):
    print("A soma dos valores entre os indices %d e %d é: %d "%(i,f,elemento))

#-----------------main---------------------
def main():
    min = 0
    max = 100
    vetor = []
    preencherVetor(min,max,vetor)
    fim = pedirFim()
    inicio = pedirInicio(fim)
    soma = somaInicioFim(inicio,fim,vetor)
    imprimir(soma,inicio,fim)
main()
