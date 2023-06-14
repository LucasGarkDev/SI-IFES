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
def primeiraVezs(saldo,aposta):
    soma = vezJogador()
    guardar = guardarPonto(soma,saldo,aposta)
    if guardar != (guardar < saldo) and guardar != (guardar > saldo):
        salva = armazenaPonto(guardar)
    return guardar

#funçao armazenar o ponto
def armazenaPonto(ponto) :
    pontoNecessario = pontoNecessario + ponto
    return pontoNecessario

#funçao para guardar os pontos:
def guardarPonto(ponto,saldo,aposta) :
    if ponto == 11 or ponto == 7 :
        acrescimo = mudouSaldo(saldo,aposta)
        print("Voce ganhou!!!")
        return acrescimo
    elif ponto == 2 or ponto == 3 or ponto == 12 :
        decrescimo = mudouSaldo(saldo,-aposta)
        print("Voce perdeu!!!")
        return decrescimo
    else :
        pontoAtual = 0
        pontoNecessario = armazenaPonto(pontoAtual,ponto)
        print("--------------------------------")
        print("      O SEU PONTO E %d      "%ponto)
        print("--------------------------------")
        return pontoNecessario

#funçao ganhou ou perdeu
def mudouSaldo(saldo,aposta) :
    saldo = saldo + aposta
    return saldo   

#funçao para as proximas vezes
def proximasVezes(salva,saldo,aposta) :
    soma = vezJogador()
    decisao = ganhouPerdeu(soma,salva,saldo,aposta)
    if decisao == (decisao < saldo) or decisao == (decisao > saldo):
        salva = armazenaPonto(decisao)
        return salva
    else:
        outraVez = "nao"
        return outraVez  

#funçao pare verificar se ganhou ou perdeu
def ganhouPerdeu(rolagem,ponto,saldo,aposta) :
    if rolagem == 7:
        decrescimo = mudouSaldo(saldo,-aposta)
        print("Voce perdeu!!!")
        return decrescimo
    elif rolagem == ponto :
        acrescimo = mudouSaldo(saldo,aposta)
        print("Voce ganhou!!!")
        return acrescimo


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

#funçao encerra
def encerra(outraVez) :
    if outraVez == "nao" :
        outraVez = "nao"
        return outraVez
#-----------------------main---------------------------
def main():
    saldo = 100.00
    encerramento = "sim"
    while encerramento == "sim" :
        aposta = valorAposta(saldo)
        primeiraVez = primeiraVezs(saldo,aposta)
        outraVez = outroN()
        encerramento = encerra(outraVez)
        proximaVez = False
        if primeiraVez != (primeiraVez < saldo) and primeiraVez != (primeiraVez > saldo):
            while proximaVez == False :
                proximaVez = proximasVezes(primeiraVez,saldo,aposta)
                outraVez = outroN()
                encerramento = encerra(outraVez)          
        encerramento = encerra(outraVez)
main()

