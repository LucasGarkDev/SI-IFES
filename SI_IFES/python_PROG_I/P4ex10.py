# DESAFIO: Cassino. Altere o Jogo de Craps da questão anterior para que o jogador possa
# apostar. Ele começa com R$ 100,00. No início de cada rodada ele informa quanto quer
# apostar. Se perder, perde esse valor. Se ganhar, ganha o dobro do que apostou. No final
# de cada rodada informe o total que ele tem em dinheiro e pergunte se quer continuar
# jogando ou se quer parar.

import random
#-----------------------funçoes------------------------
#funçao de jogar os dados 
def lancarDado():
 return random.randint(1,6)

#funçao para fazer a soma de dados
def rolagem():
    input("Pressione ENTER para lançar os dados.")
    d1 = lancarDado()
    d2 = lancarDado()
    soma = d1 + d2
    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("SOMA: %d" %soma)
    print("---------------------")
    return soma

#funçao primeira vez
def primeiraVez():
    soma = rolagem()
    return ganhouPerdeuPonto(soma)

#funçao para comparar: ganhou, perdeu ou ponto
def ganhouPerdeuPonto(soma):
   if soma == 7 or soma == 11:
        return True
   elif soma == 2 or soma == 3 or soma == 12:
        return False
   else:
       print("--------------------------------")
       print("      O SEU PONTO É: %d         "%soma)
       print("--------------------------------")
       return proximasVezes(soma)
    
#funçao proximas vezes
def proximasVezes(ponto):
    soma = rolagem()
    while soma != 7 and soma != ponto:
        soma = rolagem()
    return ganhouPerdeu(soma)

#funçao para comparar: ganhou, perdeu ou ponto v.2
def ganhouPerdeu(soma):
    if soma == 7 :
        return False
    else :
        return True

#funçao para o valor da aposta
def valorAposta(saldo):
    aposta = float(input("Digite o valor da aposta: "))
    while aposta < 0 or aposta > saldo :
        print("Operaçao Impossivel")
        aposta = float(input("Digite o valor da aposta,novamente: "))
    return aposta

#perguntar se quer continuar
def again():
    denovo = str(input("Voce deseja continuar jogando(s/n)? ")).upper()
    while denovo != "S" and denovo != "N" :
        print("Voce nao respondeu a pergunta")
        denovo = str(input("Voce deseja continuar jogando(s/n)? ")).upper()
    return denovo

#-----------------------main---------------------------
def main():
    saldo = 100.00
    print("Voce esta com: %.2f"%saldo)
    outraVez = "S"
    while outraVez == "S":
        aposta = valorAposta(saldo)
        res1 = primeiraVez()
        if res1 == True :
            print("Voce ganhou!!!")
            saldo = saldo + (aposta * 2)
            print("Voce esta com: %.2f"%saldo)
        else:
            print("Voce perdeu!!!")
            saldo = saldo - aposta
            print("Voce esta com: %.2f"%saldo)

        if saldo <= 0:
            outraVez = "N"
        else:
            outraVez = again()
main()
