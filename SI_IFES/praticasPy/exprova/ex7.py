# Uma grande emissora de televisão quer fazer uma enquete entre os seus 
# telespectadores para saber qual o melhor jogador após cada jogo. Para 
# isto, faz-se necessário o desenvolvimento de um programa, que será 
# utilizado pelas telefonistas, para a computação dos votos. Sua equipe 
# foi contratada para desenvolver este programa, utilizando a linguagem 
# de programação Python. Para computar cada voto, a telefonista
# digitará um número, entre 1 e 25, correspondente ao número da camisa 
# do jogador. Um número de jogador igual zero, indica que a votação foi 
# encerrada. Se um número inválido for digitado, o programa deve 
# ignorá-lo, mostrando uma breve mensagem de aviso, e voltando a pedir 
# outro número. Após o final da votação, o programa deverá exibir:
#  O total de votos computados;
#  Os números e respectivos votos de todos os jogadores que receberam 
# votos;
#  O percentual de votos de cada um destes jogadores;
#  O número do jogador escolhido como o melhor jogador da partida, 
# juntamente com o número de votos e o percentual de votos dados a ele. 


#-----------------funçoes------------------
#pedir o numero do jogador
def pedirJogador(vetor):
    jogador = int(input("Digite o numero da camisa do jogador:"))
    while jogador < 0 or jogador > 25 :
        print("Numero Invalido")
        jogador = int(input("Digite o numero da camisa do jogador:"))
    if jogador == 0 :
        return False
    adicionarPonto(vetor,jogador)

#adicionar mais 1 ponto para o jogador desejado
def adicionarPonto(vetor,i):
    vetor[i] += 1
    vetor[0] += 1

#imprimir o total de votos computados
def imprimirTotal(vetor):
    print("----------TOTAL DE VOTOS----------")
    print("O total de votos e: %s"%vetor[0])
    print("----------------------------------")

#percentual
def percentual(vetor,i):
    return vetor[i] * 100 / vetor[0]

#imprimir a linha
def imprimirLinha(vetor):
    i = 1
    while i < len(vetor):
        if vetor[i] != 0 and i != 0:
            print(i,end="               ")
            print(vetor[i],end="         ")
            p = percentual(vetor,i)
            print(p)
        i += 1

#imprimir a tabela com os jogadores, votos e %
def imprimirRegistro(vetor):
    print("-------------REGISTRO-------------")
    print("Jogador", end="              ")
    print("Votos", end="       ")
    print("% votos")
    imprimirLinha(vetor)
    print("----------------------------------------------")

#escolher o melhor jogador
def escolheMelhor(vetor):
    i = 1
    melhor = 0
    while i < len(vetor):
        if vetor[i] > melhor:
            melhor = i
        i += 1
    imprimirMelhorJog(vetor,i)


#imprimir o melhor jogador
def imprimirMelhorJog(vetor,i):
    print("-----------MELHOR JOGADOR DA RODADA-----------")
    a = i
    b = vetor[i]
    c = percentual(vetor,i)
    print("O melhor jogador foi o número %d, com %d votos,"%(a,b))
    print(" correspondendo a %.2f do total de votos."%c)
    print("----------------------------------------------")


#-----------------main---------------------
votos = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
pontos = True
while pontos != False:
    jog = pedirJogador(votos)
    pontos = jog
imprimirTotal(votos)
imprimirRegistro(votos)
escolheMelhor(votos)