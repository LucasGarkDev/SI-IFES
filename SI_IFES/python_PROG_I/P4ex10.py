# DESAFIO: Cassino. Altere o Jogo de Craps da questão anterior para que o jogador possa
# apostar. Ele começa com R$ 100,00. No início de cada rodada ele informa quanto quer
# apostar. Se perder, perde esse valor. Se ganhar, ganha o dobro do que apostou. No final
# de cada rodada informe o total que ele tem em dinheiro e pergunte se quer continuar
# jogando ou se quer parar.

import random
#-----------------------funçoes------------------------
#funçao de jogar um dado
def lancarDado():
 return random.randint(1,6)

#funçao para fazer a primeira vez
def vezJogador(rodar):
    print("------------Vez do jogador---------------")
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    win = deuVitoria(soma)
    guarda = win 
    guardarPonto(win,rodar,guarda)
    encerra = False
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    return encerra

#funçao para as proximas vezes
def proximasVezes() :
    

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
    if d == 3 or d == 2 :
        perdeu = True
        if perdeu == True :
            print("Voce perdeu!!!,voce tirou: %d"%d)
            encerra = True
            return encerra
    
#funçao para guardar os pontos:
def guardarPonto(ponto,rodar,pontoAtual) :
    if ponto == True :
        print("Voce ganhou!!!")
        encerra = True
        return encerra
    else :
        if rodar == 1:
            pontoAtual = ponto
            return pontoAtual
        else :
            if ponto == pontoAtual :
                print("Voce ganhou!!!")
                encerra = True
                return encerra

#-----------------------main---------------------------
def main():
    rodar = 1
    turno = False
    # saldo1 = 100.00
    # saldo2 = 100.00
    while turno == False:
        cont = 1
        turno = vezJogador(rodar)
    print("Jogo encerrado.")

main()
