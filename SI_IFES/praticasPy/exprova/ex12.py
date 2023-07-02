# A ACME Inc., uma empresa de 500 funcionários, está tendo 
# problemas de espaço em disco no seu servidor de arquivos. 
# Para tentar resolver este problema, o Administrador de Rede 
# precisa saber qual o espaço ocupado pelos usuários, e 
# identificar os usuários com maior espaço ocupado. Através de 
# um programa, baixado da Internet, ele conseguiu gerar o seguinte 
# arquivo, chamado "usuarios.txt": (238.370.684.928 bytes de arma)
# alexandre       456123789
# anderson        1245698456
# antonio         123456456
# carlos          91257581
# cesar           987458
# rosemary        789456125
# Neste arquivo, o nome do usuário possui 15 caracteres. A partir
# deste arquivo, você deve criar um programa que gere um relatório,
# chamado "relatório.txt", no seguinte formato:
# ACME Inc.               Uso do espaço em disco pelos usuários
# -------------------------------------------------------------
# Nr.  Usuário        Espaço utilizado     % do uso

# 1    alexandre       434,99 MB             16,85%
# 2    anderson       1187,99 MB             46,02%
# 3    antonio         117,73 MB              4,56%
# 4    carlos           87,03 MB              3,37%
# 5    cesar             0,94 MB              0,04%
# 6    rosemary        752,88 MB             29,16%

# Espaço total ocupado: 2581,57 MB
# Espaço médio ocupado: 430,26 MB
# O arquivo de entrada deve ser lido uma única vez,
# e os dados armazenados em memória, caso sejam necessários,
# de forma a agilizar a execução do programa. A conversão da
# espaço ocupado em disco, de bytes para megabytes deverá ser
# feita através de uma função separada, que será chamada pelo
# programa principal. O cálculo do percentual de uso também
# deverá ser feito através de uma função, que será chamada pelo
# programa principal.

import random
#-----------------funçoes------------------
#perguntar o total do disco
def perguntaDisco():
    armazenamento = int(input("Digite a quantidade de armazenamento do disco da empresa,em GB: "))
    while armazenamento < 1024 or armazenamento > 4096 :
        print("O armazenamento não util se deseja desempenho")
        armazenamento = int(input("Digite a quantidade de armazenamento do disco da empresa,em GB: "))
    return armazenamento


#pedir o nome dos usuarios
def pedirUsuarios(cont,vetor):
    usuario = str(input("Digite o nome do usuario %d: "%cont)).title()
    while usuario.isdigit() == True:
        print("Nome Invalido")
        usuario = str(input("Digite novamente o nome do usuario %d: "%cont)).title()
    vetor.append(usuario)


#converter o armazenamento para Bytes
def conversao(hd):
    return hd * 1024 

#verificar quanto cada usuario gasta no disco
def verificarUserArmazen(usuarios,espacoHD,hd):
    repete = False
    while repete == False :
        i = 0
        max = (10//100) * hd
        min = (1//100) * hd
        while i < len(usuarios):
            n = gerarNumAleatorio(min,max)
            espacoHD.append(n)
            i += 1  
        soma = somaHd(espacoHD)
        if soma > hd :
            repete = True 

# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#somar todos os valores que cada um ocupa no hd
def somaHd(espacoHD):
    soma = 0
    i2 = 0
    while i2 < len(espacoHD):
        soma += espacoHD[i2]
        i2 += 1
    return soma


#porcentagem de uso
def porcentagemUso(hd,espacoHD,porcentUso):
    i = 0
    while i < len(espacoHD):
        calculo = (espacoHD[i] * 100) / hd
        porcentUso.append(calculo)
        i += 1

#imprimir os dados
def imprimirDados(usuarios,espacoHD,porcentUso):
    print("ACME Inc.               Uso do espaço em disco pelos usuários")
    print("-------------------------------------------------------------")
    print("Mr", end="          ")
    print("Nome", end="     ")
    print("Espaço Ocupado", end="          ")
    print("% no uso")
    imprimirLinha(usuarios,espacoHD,porcentUso)

#imprimir linha
def imprimirLinha(usuarios,espacoHD,porcentUso):
    cont = 1
    i = 0 
    while i < len(usuarios):
        print(cont, end="          ")
        print(usuarios[i], end="     ")
        print(espacoHD[i], end="          ")
        print(porcentUso[i])
        cont += 1
        i += 1

#imprimir a quantidade gasta do hd
def imprimirQtdeGasta(espacoHD,hd):
    soma = somaHd(espacoHD)
    res = hd - soma
    print("---------------------------------------")
    print("Espaço total ocupado: %d"%res)
    print("---------------------------------------")
    media = soma / len(espacoHD)
    print("---------------------------------------")
    print("Espaço médio ocupado: %d"%media)
    print("---------------------------------------")


#-----------------main---------------------
hd = perguntaDisco()
hd = conversao(hd)
contNum = 0
usuarios = []
c = 0
while c < 10 :
    contNum += 1
    pedirUsuarios(contNum,usuarios)
    c += 1
espacoHD = []
verificarUserArmazen(usuarios,espacoHD,hd)
porcentUso = []
imprimirDados(usuarios,espacoHD,porcentUso)
imprimirQtdeGasta(espacoHD,hd)





