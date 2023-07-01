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
def perguntaJogador(p,voto):
    j = int(input("Digite o numero do jogador que deseja votar(1 a 25): "))
    while j < 0 or j > 25:
        print("Numero Invalido")
        j = int(input("Digite o numero do jogador que deseja votar(1 a 25): "))
    if j == 0 :
        return False
    else :
        adicionarPonto(j,p,voto)

#adicionar ponto
def adicionarPonto(j,p,voto):
    voto[j] = voto[j] + 1
    voto[0] = voto[0] + 1
    p = voto
    return p


#-----------------main---------------------
votos = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
jog = True
p = 0
while p != False :
    jog = perguntaJogador(p,votos)
    p = jog
    print(votos)
