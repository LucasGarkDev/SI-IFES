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
#pedir os votos
def perguntaJogador(votos,pontos):
    jogador = int(input("Digite o numero da camisa do jogador que considera o melhor(1 a 25): "))
    while jogador < 0 or jogador > 25 :
        print("Esse jogador nao existe")
        jogador = int(input("Digite o numero da camisa do jogador que considera o melhor(1 a 25): "))
    if jogador == 0 :
        return False
    else :
        adicionarPonto(jogador,votos,pontos)

#adicionar ponto
def adicionarPonto(i,vetor,pontos):
    vetor[i] = vetor[i] + 1 
    vetor[0] = vetor[0] + 1
    pontos = vetor
    return pontos


#-----------------main---------------------
votos = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
jog = True
pontos = 0
while pontos != False :
    jog = perguntaJogador(votos,pontos)
    pontos = jog
    print(votos)
