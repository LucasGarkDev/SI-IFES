# Utilizando listas faça um programa que faça 5 perguntas para uma 
# pessoa sobre um crime. As perguntas são:
# "Telefonou para a vítima?"
# "Esteve no local do crime?"
# "Mora perto da vítima?"
# "Devia para a vítima?"
# "Já trabalhou com a vítima?" 
# O programa deve no final emitir uma classificação sobre a 
# participação da pessoa no crime. Se a pessoa responder 
# positivamente a 2 questões ela deve ser classificada como 
# "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
# Caso contrário, ele será classificado como "Inocente".


#-----------------funçoes------------------
#perguntas a serem feitas
def perguntasFazer(perguntas,respostas):
    i = 0
    while i < 5 :
        perguntaIndividual(perguntas[i],respostas)
        i += 1  

#pergunta individual
def perguntaIndividual(pergun,vetorR):
    pergunta = str(input("Voce %s (Sim/Nao): "%pergun)).title()
    while pergunta != "Sim" and pergunta != "Nao" :
        print("Meu bom senhor(a), é Sim ou Nao")
        pergunta = str(input("%s ?(Sim/Nao): "%pergun)).title()
    vetorR.append(pergunta)

#medir a participaçao da pessoa no crime
def participacaoCrime(vetor):
    i = 0
    pontos = 0
    while i < len(vetor):
        if vetor[i] == "Sim":
            pontos += 1
        i += 1
    vereditoFinal(pontos)


#Falar a participaçao da pessoa no crime
def vereditoFinal(qtdeSim):
    print("--------------VEREDITO--------------")
    if qtdeSim < 2:
        print("Essa pessoa e Inocente perante ao Crime")
    elif qtdeSim == 2:
        print("Essa pessoa e Suspeita perante ao Crime")
    elif qtdeSim < 5 :
        print("Essa pessoa e Cumplice perante ao Crime")
    else :
        print("Essa pessoa e o Assasino do Crime")

#-----------------main---------------------
pergunt = ["Telefonou para a vítima?","Esteve no local do crime?","Mora perto da vítima?","Devia para a vítima?","Já trabalhou com a vítima?"]
respostas = []
perguntasFazer(pergunt,respostas)
participacaoCrime(respostas)


