# Uma grande emissora de televisão quer fazer uma enquete entre os seus telespectadores
# para saber qual o melhor jogador após cada jogo. Para isto, faz-se necessário o
# desenvolvimento de um programa, que será utilizado pelas telefonistas, para a
# computação dos votos. Sua equipe foi contratada para desenvolver este programa,
# utilizando a linguagem de programação Python. Para computar cada voto, a telefonista
# digitará um número, entre 1 e 25, correspondente ao número da camisa do jogador. Um
# número de jogador igual zero, indica que a votação foi encerrada. Se um número inválido
# for digitado, o programa deve ignorá-lo, mostrando uma breve mensagem de aviso, e
# voltando a pedir outro número. Após o final da votação, o programa deverá exibir:
#  O total de votos computados;
#  Os números e respectivos votos de todos os jogadores que receberam votos;
#  O percentual de votos de cada um destes jogadores;
#  O número do jogador escolhido como o melhor jogador da partida, juntamente com
# o número de votos e o percentual de votos dados a ele.
# DICA 1: Utilize um vetor para armazenar os votos. O índice do vetor é o número do
# jogador. Então quando um jogador recebe um voto, o elemento do vetor
# correspondente a essa posição soma mais um.
# DICA 2: Esse vetor deve ser inicializado com ZERO nas 25 posições.
# OBS: Observe que os votos inválidos e o zero final não devem ser computados como
# votos. O resultado aparece ordenado pelo número do jogador. O programa deve fazer
# uso de vetores. O programa deverá executar o cálculo do percentual de cada jogador
# através de uma função. Esta função receberá dois parâmetros: o número de votos de
# um jogador e o total de votos. A função calculará o percentual e retornará o valor
# calculado. Abaixo segue uma tela de exemplo.

#-----------------------funçoes------------------------
#imprimir o total de votos
def imprimirTotal(v):
    print("Resultado da Votaçao:")
    print("----------------------------------")
    print("O total de votos foi: %d"%v[0])

#imprimir os numeros e os votos dos jogadores que foram votados
def imprimriCompleta(votos):
    print("Jogador:")
    imprimirNum(votos)
    print("Pontos:")
    imprimirPontos(votos)
    print("Percentual:")
    imprimirPercentual(votos)
    

#imprimir os numeros
def imprimirNum(v):
    i = 0
    while i < len(v):
        if v[i] != 0 and v[i] != v[0]:
            print(i," "*20)
            i = i + 1
        else:
            i = i + 1

#imprimir os votos
def imprimirPontos(v):
    i = 0
    while i < len(v):
        if v[i] != 0 and v[i] != v[0]:
            print(v[i]," "*20)
            i = i + 1
        else:
            i = i + 1

#O percentual de votos de cada um destes jogadores
def percentual(v,i):
    return v[i] * 100 / v[0]
    

#imprimir percentual
def imprimirPercentual(v):
    i = 0
    while i < len(v):
        if v[i] != 0 and v[i] != v[0]:
            r = percentual(v,i)
            print(r," "*20)
            i = i + 1
        else:
            i = i + 1

#descobrir o jogador mais votado
def melhorJog(v):
    i = 0
    melhor = 0
    mp = 0
    mj= 0
    mpr = 0
    while i < len(v):
        if v[i] > melhor:
            mp = v[i]
            mj = i
            r = percentual(v,i)
            mpr = r
            i = i + 1
        else :
            i = i + 1
    print("O melhor jogador foi o número %s, com %s votos, correspondendo a %s no total de votos."%(mj,mp,mpr))
            
#pedir o numero do jogador e adicionar no vetor 
def pedirJogador(p,voto):
    j = int(input("Digite o numero do jogador que deseja votar(1 a 25): "))
    while j < 0 or j > 25:
        print("Numero Invalido")
        j = int(input("Digite o numero do jogador que deseja votar(1 a 25): "))
    if j == 0 :
        return False
    else :
        contabilizarPonto(j,p,voto)

        
#adicionar o voto no vetor
def contabilizarPonto(j,p,voto):
    voto[j] = voto[j] + 1
    voto[0] = voto[0] + 1
    p = voto
    return p

#-----------------------main---------------------------
votos = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
jog = True
p = 0
while jog != False :
    jog = pedirJogador(p,votos)
    p = jog
imprimirTotal(votos)
imprimriCompleta(votos)
melhorJog(votos)


