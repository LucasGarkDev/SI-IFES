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

#funçao para fazer a vez de cada jogador
def vezJogador(cont,rodar):
    print("------------Vez do jogador %d---------------"%cont)
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    derrota = craps(d1)
    if derrota == True :
        print("Voce perdeu!!!,voce tirou: %d"%d1)
        encerra = True
        return encerra
    d2 = lancarDado()
    derrota = craps(d2)
    if derrota == True :
        print("Voce perdeu!!!,voce tirou: %d"%d2)
        encerra = True
        return encerra
    soma = d1 + d2
    win = deuVitoria(soma)
    if win == True :
        print("Voce ganhou!!!")
        encerra = True
        return encerra
    else :
        if rodar == 1:
            pontoAtual = guardarPonto(win)
        else :
            if win == pontoAtual :
                print("Voce ganhou!!!")
                encerra = True
                return encerra  
    encerra = False
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    return encerra

#funçao de verificar se teve ganhador
def verificaGanhou(ponto) :
    pontoAtual = ponto
    return pontoAtual


#funçao de verficar se deu ponto
def deuVitoria(soma) :
    if soma == 11  or soma == 7 :
        ganhou = True
        return ganhou
    if soma == 4 or soma == 5 or soma == 6 or soma == 8 or soma == 9 or soma == 10 :
        ponto = soma
        return ponto

#função para ver se deu craps
def craps(d) :
    if d == 3 or d == 2:
        perdeu = True
        return perdeu
    
#funçao para guardar os pontos:
def guardarPonto(ponto) :
    if ponto == 4 or ponto == 5 or ponto == 6 or ponto == 8 or ponto == 9 or ponto == 10 :
        pontoAtual = ponto
        return pontoAtual

#-----------------------main---------------------------
def main():
    rodar = 1
    while turno == False:
        cont = 1
        turno = vezJogador(cont,rodar)
        cont = 2
        turno = vezJogador(cont,rodar)
        rodar = rodar + 1
    print("Jogo encerrado.")

main()