# Faça um programa que peça as três notas de um aluno, calcule e 
# armazene num vetor apenas a média desse aluno. Repita isso para vários 
# alunos, até o usuário desejar encerrar. Imprima somente as médias que 
# são maiores ou igual a 7.0

#-----------------funçoes------------------
#pedir nota
def pedirNota(nCont):
    nCont += 1
    nota = float(input("Digite o valor da nota %d : "%nCont))
    while nota < 0 or nota > 10 :
        print("Nota Invalida")
        nota = float(input("Digite,novamente o valor da nota %d : "%nCont))
    return nota

#pedir as 3 notas e entregar a soma
def pedir3Notas():
    cont = 0
    soma = 0
    while cont < 3 :
        n = pedirNota(cont)
        soma += n
        cont += 1
    return soma

#calcular a media
def calcularMedia(soma,vetor):
    media = soma / 3
    vetor.append(media)

#perguntar se deseja encerrar
def desejaEncerrar():
    deseja = str(input("Voce deseja encerrar?(S/N) ")).upper()
    while deseja != "S" and deseja != "N" :
        print("Não compreendi o que deseja fazer")
        deseja = str(input("Voce deseja encerrar?(S/N) ")).upper()
    return deseja

#imprimir as notas aceitaveis
def imprimirMedias(vetor):
    print("As medias azuis sao:")
    print("-------------------------------------")
    i = 0 
    while i < len(vetor):
        if vetor[i] >= 7.0:
            imprimir(vetor[i])
        i += 1

#imprimir customizado
def imprimir(media):
    print(media)
    print("-------------------------------------")

#-----------------main---------------------
medias = []
outraVez = "N"
while outraVez == "N":
    soma = pedir3Notas()
    calcularMedia(soma,medias)
    outraVez = desejaEncerrar()
imprimirMedias(medias)

