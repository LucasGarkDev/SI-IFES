# DESAFIO: Cassino. Altere o Jogo de Craps da questão anterior para que o jogador possa
# apostar. Ele começa com R$ 100,00. No início de cada rodada ele informa quanto quer
# apostar. Se perder, perde esse valor. Se ganhar, ganha o dobro do que apostou. No final
# de cada rodada informe o total que ele tem em dinheiro e pergunte se quer continuar
# jogando ou se quer parar.

import random

# Função para jogar um dado
def lancarDado():
    return random.randint(1, 6)

# Função principal para a vez do jogador
def vezJogador():
    print("------------Vez do jogador---------------")
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" % d1)
    print("Dado 2: %d" % d2)
    print("SOMA: %d" % soma)
    print("---------------------")
    return soma

# Função para fazer a primeira vez
def primeirasVez(saldo,valorAposta):
    soma = vezJogador()
    guardar = guardarPonto(soma)
    if guardar == 1:
        saldo = saldo + valorAposta * 2
        print("Você ganhou! Seu saldo atual: R$ %.2f" % saldo)
    else:
        saldo = saldo - valorAposta
        print("Você perdeu! Seu saldo atual: R$ %.2f" % saldo)
    return saldo

# Função para guardar os pontos
def guardarPonto(ponto):
    if ponto == 11 or ponto == 7:
        encerra = 1
        print("Você ganhou!!!")
        return encerra
    elif ponto == 2 or ponto == 3 or ponto == 12:
        perdeu = 0
        print("Você perdeu!!!")
        return perdeu
    else:
        pontoAtual = ponto
        print("--------------------------------")
        print("      O SEU PONTO É %d      " % ponto)
        print("--------------------------------")
        return pontoAtual

# Função para as próximas vezes
def proximasVezes(pontoGuardado,saldo,valorAposta):
    encerra = False
    soma = vezJogador()
    decisao = ganhouPerdeu(soma, pontoGuardado)
    if decisao == True:
        saldo = saldo + valorAposta * 2
        print("Você ganhou! Seu saldo atual: R$ %.2f" % saldo)
        encerra = True
    else:
        saldo = saldo - valorAposta
        print("Você perdeu! Seu saldo atual: R$ %.2f" % saldo)
        if saldo <= 0:
            print("Você não tem saldo suficiente para continuar jogando.")
            encerra = True
    return encerra, saldo

# Função para verificar se ganhou ou perdeu
def ganhouPerdeu(rolagem, ponto):
    if rolagem == 7:
        encerra = True
        print("Você perdeu!!!")
        return encerra
    elif rolagem == ponto:
        encerra = True
        print("Você ganhou!!!")
        return encerra
    else:
        encerra = False
        return encerra

# Função principal
def main():
    saldo = 100.00
    continuar = True

    while continuar:
        print("Saldo atual: R$ %.2f" % saldo)
        valorAposta = float(input("Digite o valor da aposta: "))

        if valorAposta <= saldo:
            primeiraVez = primeirasVez(saldo,valorAposta)
            saldo = primeiraVez

            if saldo <= 0:
                print("Você não tem saldo suficiente para continuar jogando.")
                continuar = False
            else:
                opcao = input("Deseja continuar jogando? (s/n): ")
                if opcao.lower() != "s":
                    continuar = False
        else:
            print("Você não tem saldo suficiente para fazer essa aposta.")

    print("Obrigado por jogar! Seu saldo final: R$ %.2f" % saldo)

# Execução do jogo
main()
