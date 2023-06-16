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
        return proximasVezes(ponto)
        
        
#funçao para as proximas vezes
def proximasVezes(ponto) :
    soma = vezJogador()
    while soma != 7 and soma != ponto :
        soma = vezJogador()
    return ganhouPerdeu(soma,ponto)
        

#funçao compara ganhou ou perdeu
def ganhouPerdeu(soma,ponto):
    if soma == 7 :
        return False
    elif soma == ponto:
        return True

#funçao para apostar
def valorAposta(saldo):
    aposta = float(input("Digite o valor da aposta: "))
    while aposta < 0 or aposta > saldo :
        print("Valor Impossivel")
        aposta = float(input("Digite o valor da aposta,novamente: "))
    return aposta


#funçao outra vez
def outroN() :
    again = str(input("Voce deseja continuar? ")).lower()
    while again != "sim" and again != "nao" :
        print("Impossivel operaçao")
        again = str(input("Voce deseja continuar? ")).lower()
    return again

#-----------------------main---------------------------
def main():
    outraVez = "sim"  
    saldo = 100.00
    print("Voce começa com: R$ %d"%saldo)
    while outraVez == "sim":
        aposta = valorAposta(saldo)
<<<<<<< HEAD
        primeiraVez = primeiraVezs(saldo,aposta)
        outraVez = outroN()
        encerramento = encerra(outraVez)
        aposta = valorAposta(saldo)
        if primeiraVez != (primeiraVez < saldo) and primeiraVez != (primeiraVez > saldo):
            while outraVez == "sim" :
                saldo = primeiraVez
                proximasVezes(primeiraVez,saldo,aposta)
                outraVez = outroN()
                encerramento = encerra(outraVez)          
=======
        resposta = primeiraVezs()
        if resposta == True:
            print("Voce ganhou!!!")
            saldo = saldo + aposta
        else :
            print("Voce perdeu!!!")
            saldo = saldo - aposta
        print("Voce esta com %.2f"%saldo)
        if saldo == 0:
            outraVez = "nao"
        else:
            outraVez = outroN()
       
>>>>>>> b45527602ae8090e51946af8ccc7cad4816cbb3c
main()
