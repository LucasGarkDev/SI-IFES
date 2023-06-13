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
def vezJogador(saldo,aposta):
    print("------------Vez do jogador---------------") 
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    guardar = guardarPonto(soma,saldo,aposta)
    return guardar

#funçao para guardar os pontos:
def guardarPonto(ponto,saldo,aposta) :
    if ponto == 11 or ponto == 7 :
        ganhou = True
        print("Voce ganhou!!!")
        saldoAjuste(saldo,aposta)
        return ganhou
    elif ponto == 2 or ponto == 3 or ponto == 12 :
        perdeu = True
        print("Voce perdeu!!!")
        saldoAjuste(saldo,-aposta)
        return perdeu
    else :
        pontoAtual = ponto
        print("--------------------------------")
        print("      O SEU PONTO E %d      "%ponto)
        print("--------------------------------")
        return pontoAtual

#funçao para as proximas vezes
def proximasVezes(pontoGuardado,saldo,aposta) :
    encerra = False
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    decisao = ganhouPerdeu(soma,pontoGuardado,saldo,aposta)
    if decisao == True:
        encerra = True
        return encerra
    return encerra


#funçao pare verificar se ganhou ou perdeu
def ganhouPerdeu(rolagem,ponto,saldo,aposta) :
    if rolagem == 7:
        encerra = True
        print("Voce perdeu!!!")
        calculo = saldoAjuste(saldo,-aposta)
        registraSaldo(calculo,saldo)
        outroN()
        return encerra
    elif rolagem == ponto :
        encerra = True
        print("Voce ganhou!!!")
        calculo = saldoAjuste(saldo,aposta)
        registraSaldo(calculo,saldo)
        outroN()
        return encerra
    else :
        encerra = False
        return encerra


#funçao para guardar o valor apostado
def valorInicial(saldo) :
    saldo = saldo
    valorAposta = float(input("Digite o valor da aposta: "))
    while valorAposta > saldo :
        print("Voce nao tem dinheiro para a aposta")
        valorAposta = float(input("Digite o valor da aposta: "))
    return valorAposta

#funçao para perguntar se quer continuar
def outroN() :
    again = str(input("Voce deseja continuar? ")).upper()
    while again != "SIM" and again != "NAO" :
        print("Impossivel operaçao")
        again = str(input("Voce deseja continuar? ")).upper()
    return again

#funçao para adicionar ou retirar saldo
def saldoAjuste(saldo,soma) :
    saldo = saldo + (soma)
    print("Voce esta com %.2f"%saldo)
    return saldo

#funçao para guardar saldo
def registraSaldo(saldo,saldoRegistrado) :
    saldoRegistrado = saldoRegistrado + saldo
    return saldoRegistrado
#-----------------------main---------------------------
def main():
    outraVez = "SIM"
    primeiraVez = False
    saldo = 100.00
    registrarSaldo = 0
    while outraVez == "SIM" :
        saldor = registrarSaldo
        aposta = valorInicial(saldo)
        primeiraVez = vezJogador(saldo,aposta)
        proximaVez = False
        while proximaVez == False :
            proximaVez = proximasVezes(primeiraVez,saldo,aposta)
        registrarSaldo = registraSaldo(saldor,saldo)
        outraVez = outroN()
       
main()
