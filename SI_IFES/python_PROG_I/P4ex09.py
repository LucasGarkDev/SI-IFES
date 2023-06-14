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

#funçao principal
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
    return soma

#funçao para fazer a primeira vez
def primeiraVezs():
    soma = vezJogador()
    comparar = comparando(soma)
    return comparar

#funçao para guardar os pontos:
def comparando(ponto) :
    if ponto == 11 or ponto == 7 :
        encerra = True
        return encerra
    elif ponto == 2 or ponto == 3 or ponto == 12 :
        perdeu = False
        return perdeu
    else :
        print("--------------------------------")
        print("      O SEU PONTO E %d      "%ponto)
        print("--------------------------------")
        r = proximasVezes(ponto)
        return r
        
#funçao para as proximas vezes
def proximasVezes(ponto) :
    soma = vezJogador()
    decisao = ganhouPerdeu(soma,ponto)
    while soma != 7 and soma != ponto :
        soma = vezJogador()
        decisao = ganhouPerdeu(soma,ponto)
    return decisao
        

#funçao compara ganhou ou perdeu
def ganhouPerdeu(soma,ponto):
    if soma == 7 :
        res = False
        return res
    elif soma == ponto:
        res = True
        return res
        
#-----------------------main---------------------------
def main():
    resposta = primeiraVezs()
    if resposta == True:
        print("Voce ganhou!!!")
    else :
        print("Voce perdeu!!!")
       
main()
