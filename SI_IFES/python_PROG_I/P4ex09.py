# Jogo de Craps. Faça um programa que implemente um jogo de Craps. O jogador lança
# um par de dados, obtendo a soma entre 2 e 12. Se na primeira jogada você tirar 7 ou 11,
# você ganhou. Se você tirar 2, 3 ou 12 na primeira jogada, isto é chamado de "craps" e
# você perdeu. Se na primeira jogada você somou 4, 5, 6, 8, 9 ou 10, este é seu "Ponto".
# Seu objetivo agora é continuar jogando os dados até tirar este número novamente. Você
# perde, no entanto, se tirar um 7 antes de tirar este “Ponto” novamente. Utilize as
# funções
# abaixo

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

#-----------------------main---------------------------
def main():
    res1 = primeiraVez()
    if res1 == True :
        print("Voce ganhou!!!")
    else:
        print("Voce perdeu!!!")
main()
