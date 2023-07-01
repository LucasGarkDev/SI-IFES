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
#pedir o jogador
def perguntaJogador(vetor,pontos):
    jogador = int(input("Digite o numero da camisa do jogador que voce achou o melhor(1 a 25): "))
    while jogador < 0 or jogador > 25 :
        print("Esse jogador nao existe")
        jogador = int(input("Digite o numero da camisa do jogador, novamente(1 a 25): "))
    if jogador == 0 :
        return False
    else :
        adicionaPonto(jogador,vetor,pontos)


#adiciona votos ao vetor
def adicionaPonto(i,vetor,p):
    vetor[i] += 1
    vetor[0] += 1
    p = vetor[i]
    return p

#imprimir o total de votos
def imprimirTotalVotos(vetor):
    print("----------------TOTAL DE VOTOS----------------")
    print("O total foi de: %s votos"%vetor[0])
    print("----------------------------------------------")

#imprimir os jogadores, os votos e o percentual
def imprimirTabela(vetor):
    print("---------------RELATORIO DE VOTOS---------------")
    print("Jogador", end="     ")
    print("Votos", end="          ")
    print("%")
    i = 0
    while i < len(vetor):
        imprimirLinha(vetor,i)
        i += 1


#imprimir uma linha da tabela
def imprimirLinha(vetor,i):
    if vetor[i] != 0 and vetor[i] != vetor[0]:
        print(i,end="              ")
        print(vetor[i],end="          ")
        percentual = calculaPercentual(i,vetor)
        print(percentual)

#calcular percentual
def calculaPercentual(i,vetor):
    return vetor[i] * 100 / vetor[0]

#define quem foi o melhor jogador
def melhorJog(vetor):
    melhor = 0
    i = 0
    mi = 0
    mp = 0
    while i < len(vetor):
        if vetor[i] > melhor and vetor[i] != vetor[0] :
            melhor = vetor[i]
            mi = i
            mp = calculaPercentual(i,vetor)
        i += 1
    print("-----------------MELHOR JOGADOR FOI:-----------------")
    print("O melhor jogador foi o camisa %d, com %s votos em um \n percentual de %.2f"%(mi,melhor,mp))
    print("-----------------------------------------------------")


#-----------------main---------------------
votos = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
jog = True
pontos = 0 
while jog != False :
    jog = perguntaJogador(votos,pontos)
    pontos = jog
imprimirTotalVotos(votos)
imprimirTabela(votos)
melhorJog(votos)

