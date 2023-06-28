# Utilize a função criada nos exercícios anteriores para gerar 
# agora um vetor com 100 números aleatórios. Faça uma função que 
# receba como parâmetro esse vetor e dois
# índices (início e fim) e retorne a soma dos números apenas do 
# intervalo entre os índices [início, fim]. Lembre-se de fazer a 
# validação: início >= 0, fim < 100 e início <= fim.

import random
#-----------------------funçoes------------------------
#pedir o fim
def pedirFim():
    f = int(input("Digite o indice de fim(menor que 100): "))
    while f >= 100:
        print("Indice invalido")
        f = int(input("Digite o indice de fim: "))
    return f

#pedir o inicio
def pedirInicio(f):
    i = int(input("Digite o indice de inicio(maior ou igual a 0): "))
    while i < 0  or i > f:
        print("Indice invalido")
        i = int(input("Digite o indice de inicio: "))
    return i

#criar o vetor
def criarVetor(vet):
    cont = 0
    while cont < 100 :
        n = gerarNumAleatorio(0,50)
        vet.append(n)
        cont = cont + 1

#pesquisar o inicio e o fim daquele vetor
def identificarIndices(vet,f,i):
    c = vet[i]
    soma = 0
    while c < vet[f]:
        soma = soma + vet[c]
        c = c + 1
    return vet[i] + soma + vet[f]
    

#gerar um número aleatório entre MIN e MAX
def gerarNumAleatorio(min, max):
    return random.randint(min, max)


#-----------------------main---------------------------
fim = pedirFim()
inicio = pedirInicio(fim)
vetor = []
criarVetor(vetor)
res = identificarIndices(vetor,fim,inicio)
print("O valor da soma desejada foi: %d"%res)
