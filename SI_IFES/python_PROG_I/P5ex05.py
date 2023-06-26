# Faça um programa que peça as três notas de um aluno, calcule e armazene 
# num vetor apenas a média desse aluno. Repita isso para vários alunos, 
# até o usuário desejar encerrar. Imprima somente as médias que são 
# maiores ou igual a 7.0

#-----------------------funçoes------------------------
#pedir as notas
def pedirNota(c,notas):
    nota = float(input("Digite a nota %d do aluno(0 a 10): "%c))
    while nota < 0 or nota > 10 :
        print("Nota Invalida")
        nota = float(input("Digite a nota %d novamente: "%c))
    notas.append(nota) 

#calcular a media e armazenar no vetor
def calcularMedia(notas,medias):
    soma = notas[0] + notas[1] + notas[2]
    media = soma / len(notas)
    medias.append(media)

#perguntar se deseja continuar
def outraVez():
    again = str(input("Voce deseja inserir outro aluno?(s/n) ")).upper()
    while again != "S" and again != "N" :
        print("Não entendi seu desejo")
        again = str(input("Voce deseja inserir outro aluno?(s/n) ")).upper()
    return again

#comparar as medias para ver se sao >= 7.0
def comparaMedias(i,media,res):
    if media >= 7.0 :
        res.append(media)
    
#imprimir as medias comparadas
def imprimir(o):
    print("As medias aceitaveis sao: %s"%o)

#primeira parte da main
def main1(contNotas,medias,novamente): 
    while novamente == "S":
        notas = []
        i = contNotas[0]
        while i <= len(contNotas):
            pedirNota(i,notas)
            i = i + 1
        calcularMedia(notas,medias)
        novamente = outraVez()

#segunda parte da main
def main2(mediasFinais,i2,medias):
    while i2 < len(medias):
        comparaMedias(i2,medias[i2],mediasFinais)
        i2 = i2 + 1
    imprimir(mediasFinais)

#-----------------------main---------------------------
def main():
    contNotas = [1,2,3]
    medias = []
    novamente = "S"
    main1(contNotas,medias,novamente)
    mediasFinais = []
    i2 = 0
    main2(mediasFinais,i2,medias)
main()
