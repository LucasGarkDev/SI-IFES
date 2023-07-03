# Uma empresa de pesquisas precisa tabular os resultados da 
# seguinte enquete feita a um grande quantidade de 
# organizações: "Qual o melhor Sistema Operacional para uso 
# em servidores?"
# As possíveis respostas são:
# 1- Windows Server
# 2- Unix
# 3- Linux
# 4- Netware
# 5- Mac OS
# 6- Outro
# Você foi contratado para desenvolver um programa que leia
# o resultado da enquete e informe ao final o resultado da
# mesma. O programa deverá ler os valores até ser informado
# o valor 0, que encerra a entrada dos dados. Não deverão 
# ser aceitos valores além dos válidos para o programa 
# (0 a 6). Os valores referentes a cada uma das opções 
# devem ser armazenados num vetor. Após os dados terem 
# sido completamente informados, o programa deverá calcular
# a percentual de cada um dos concorrentes e informar o
# vencedor da enquete. O formato da saída foi dado pela
# empresa, e é o seguinte:
# Sistema Operacional     Votos   %
# -------------------     -----   ---
# Windows Server           1500   17%
# Unix                     3500   40%
# Linux                    3000   34%
# Netware                   500    5%
# Mac OS                    150    2%
# Outro                     150    2%
# -------------------     -----
# Total                    8800

# O Sistema Operacional mais votado foi o Unix, com
# 3500 votos, correspondendo a 40% dos votos.


#-----------------funçoes------------------
#imprimir o menu
def mostrarMenu():
    print("-------------------------------------")
    print("1- Windows Server")
    print("2- Unix")
    print("3- Linux")
    print("4- Netware")
    print("5- Mac OS")
    print("6- Outro")
    print("Qual o melhor Sistema Operacional para uso em servidores?")
    print("-------------------------------------")

#pedir os votos
def pedirVoto(cont,vetor):
    voto = int(input("Para o indivíduo %d: " % cont))
    while voto < 0 or voto > 6:
        print("Número Inválido")
        voto = int(input("Digite novamente o voto do indivíduo %d: " % cont))
    if voto == 0:
        return 0
    vetor[voto] += 1
    vetor[0] += 1

#imprimir o resultado da votação
def imprimirRes(vetor):
    sO = ["t", "Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"]
    print("Sistema Operacional", "Votos", "%")
    print("-------------------   -----   ---")
    imprimirLinha(vetor, sO)
    print("-------------------   -----")
    print("Total", end="                    ")
    imprimirTotal(vetor)
    imprimirMaisVotado(vetor, sO)

#imprimir linha do resultado
def imprimirLinha(vetor, sO):
    i = 2
    while i < len(vetor):
        print(sO[i], end="     ")
        print(vetor[i], end="   ")
        res = percentual(vetor, i)
        print(res)
        i += 1

#percentual individual do concorrente
def percentual(vetor, i):
    return vetor[i] * 100 / vetor[0]

#mostrar o total de votos
def imprimirTotal(vetor):
    print(vetor[0])

#imprimir mais votado
def imprimirMaisVotado(vetor, sO):
    i = decideMaior(vetor)
    res2 = percentual(vetor, i)
    print("O Sistema Operacional mais votado foi o %s, \n com %s votos, correspondendo a %d%% dos votos." % (sO[i], vetor[i], res2))

#decidir o maior
def decideMaior(vetor):
    i = 1
    maior = 0
    while i < len(vetor):
        if vetor[i] > maior:
            maior = i
        i += 1
    return maior

#-----------------main---------------------
def main():
    mostrarMenu()
    contNum = 1
    votos = [0, 0, 0, 0, 0, 0, 0]
    r = 1
    while r != 0:
        r = pedirVoto(contNum, votos)
        contNum += 1
    imprimirRes(votos)

main()