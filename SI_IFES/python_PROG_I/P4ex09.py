# Jogo de Craps. Faça um programa que implemente um jogo de Craps. O jogador lança
# um par de dados, obtendo a soma entre 2 e 12. Se na primeira jogada você tirar 7 ou 11,
# você ganhou. Se você tirar 2, 3 ou 12 na primeira jogada, isto é chamado de "craps" e
# você perdeu. Se na primeira jogada você somou 4, 5, 6, 8, 9 ou 10, este é seu "Ponto".
# Seu objetivo agora é continuar jogando os dados até tirar este número novamente. Você
# perde, no entanto, se tirar um 7 antes de tirar este “Ponto” novamente. Utilize as funções
# abaixo

import random
#-----------------------funçoes------------------------
#funçao de jogar um dado
def lancarDado():
 return random.randint(1,6)

#funçao para fazer a primeira vez
def vezJogador():
    print("------------Vez do jogador---------------")
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    guardar = guardarPonto(soma)
    return guardar

#funçao para as proximas vezes
def proximasVezes(pontoGuardado) :
    encerra = False
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    decisao = ganhouPerdeu(soma,pontoGuardado)
    if decisao == True:
        encerra = True
        return encerra
    return encerra


#funçao pare verificar se ganhou ou perdeu
def ganhouPerdeu(rolagem,ponto) :
    if rolagem == 7:
        encerra = True
        print("Voce perdeu!!!")
        return encerra
    elif rolagem == ponto :
        encerra = True
        print("Voce ganhou!!!")
        return encerra
    else :
        encerra = False
        return encerra

    
#funçao para guardar os pontos:
def guardarPonto(ponto) :
    if ponto == 11 or ponto == 7 :
        encerra = True
        print("Voce ganhou!!!")
        return encerra
    elif ponto == 2 or ponto == 3 or ponto == 12 :
        perdeu = True
        print("Voce perdeu!!!")
        return perdeu
    else :
        pontoAtual = ponto
        print("--------------------------------")
        print("      O SEU PONTO E %d      "%ponto)
        print("--------------------------------")
        return pontoAtual


#-----------------------main---------------------------
def main():
    primeiraVez = vezJogador()
    if primeiraVez == True :
        encerra = True
        return encerra
    proximaVez = False
    while proximaVez == False :
        proximaVez = proximasVezes(primeiraVez)
       
main()