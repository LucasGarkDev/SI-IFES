# Faça um programa que receba a temperatura média de cada mês 
# do ano e armazene-as em uma lista. Após isto, calcule a 
# média anual das temperaturas e mostre todas as temperaturas
# acima da média anual, e em que mês elas ocorreram 
# (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro,
#  . . . ).


#-----------------funçoes------------------
#pedir a media mensal
def pedirMedia(vetor,cont):
    i = 0
    while i < 12 :
        temp = float(input("Digite a temperatura media do mes de %s: "%cont[i]))
        while temp <= 0 or temp > 100 :
            print("Media Mensal Invalida")
            temp = float(input("Digite novamnete a media do mes de %s: "%cont[i]))
        vetor.append(temp)
        i += 1


#somar as medias mensais
def somaMedias(vetor):
    i = 0
    soma = 0
    while i < len(vetor):
        soma += vetor[i]
        i += 1
    return soma

#calcular a media anual
def mediaAnual(vetor):
    soma = somaMedias(vetor)
    media = soma / 12
    return media

#descobrir as medias que estao acima da media anual
def mediasAcimaMedia(vetor,media,cont):
    print("-----------MEDIAS QUE FORAM MAIORES QUE A MEDIA ANUAL-----------")
    i = 0
    while i < len(vetor):
        if vetor[i] > media:
            print("No mes %s com %s Celsius "%(cont[i],vetor[i]))
        i += 1
    print("----------------------------------------------------")


#-----------------main---------------------
meses = ["Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"]
mediasMensais = []
pedirMedia(mediasMensais,meses)
mediaAno = mediaAnual(mediasMensais)
mediasAcimaMedia(mediasMensais,mediaAno,meses)
