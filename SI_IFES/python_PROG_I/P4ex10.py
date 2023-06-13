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
    if guardar == 0:
        encerra = True
        return encerra
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
        perdeu = 0
        print("Voce perdeu!!!")
        return perdeu
    else :
        pontoAtual = ponto
        print("--------------------------------")
        print("      O SEU PONTO E %d      "%ponto)
        print("--------------------------------")
        return pontoAtual

#funçao para guardar o valor apostado
def valorInicial(saldo) :
    saldo = 100.00
    valorAposta = float(input("Digite o valor da aposta: "))
    while valorAposta > saldo :
        print("Voce nao tem dinheiro para a aposta")
        valorAposta = float(input("Digite o valor da aposta: "))
    return valorAposta


#-----------------------main---------------------------
def main():
    saldo = 100.00
    aposta = valorInicial(saldo)
    primeiraVez = vezJogador()
    if primeiraVez == True :
        saldo = saldo * aposta
        print("Voce esta %.2f reais"%saldo)
        encerra = True
        return encerra
    proximaVez = False
    if primeiraVez == 0 :
        saldo = saldo - aposta
        print("Voce esta %.2f reais"%saldo)
    while proximaVez == False :
        proximaVez = proximasVezes(primeiraVez)
        if proximaVez == True :
            saldo = saldo * aposta
            print("Voce esta %.2f reais"%saldo)
            encerra = True
            return encerra
        if proximaVez == 0 :
            saldo = saldo - aposta
            print("Voce esta %.2f reais"%saldo)
       
main()
