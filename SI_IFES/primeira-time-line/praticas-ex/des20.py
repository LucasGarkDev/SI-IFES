# Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. 
# Os códigos utilizados são:
# 1 , 2, 3, 4  - Votos para os respectivos candidatos 
# (você deve montar a tabela ex: 1 - Jose/ 2- João/etc)
# 5 - Voto Nulo
# 6 - Voto em Branco
# Faça um programa que calcule e mostre:
# O total de votos para cada candidato;
# O total de votos nulos;
# O total de votos em branco;
# A percentagem de votos nulos sobre o total de votos;
# A percentagem de votos em branco sobre o total de votos. 
# Para finalizar o conjunto de votos tem-se o valor zero.

#perguntar quantas pessoas vao votar
quantVotos = int(input("Digite a quantidade de pessoas que vao votar, hoje: "))
while quantVotos <= 0 :
    print("Quantidade invalida")
    quantVotos = int(input("Digite novamente: "))

#pedir a tabela
tabela = str(input("Voce deseja ver a tabela(sim/nao)? ")).upper()
#tabela dos candidatos
if tabela == "SIM" :
    print("1 - Richiele")
    print("2 - Eliane")
    print("3 - Lastenio")
    print("4 - Ze da Egua")
    print("5 - Voto Nulo")
    print("6 - Voto em Branco")
voto1 = 0
voto2 = 0
voto3 = 0
voto4 = 0
voto5 = 0
voto6 = 0

#pedir o codigo
contVotos = 1
while contVotos <= quantVotos :
    codigo = int(input("Digite o codigo para confirmar o seu voto: "))
    while codigo != 1 and codigo != 2 and codigo != 3 and codigo != 4 and codigo != 5 and codigo != 6 :
        print("Codigo invalido")
        codigo = int(input("Digite digite novamente: "))

    #quantidade de votos para cada candidato
    if codigo == 1 :
        voto1 = voto1 + 1
    elif codigo == 2 :
        voto2 = voto2 + 1
    elif codigo == 3 :
        voto3 = voto3 + 1
    elif codigo == 4 :
        voto4 = voto4 + 1
    elif codigo == 5 :
        voto5 = voto5 + 1
    else :
        voto6 = voto6 + 1

    contVotos = contVotos + 1

#porcentagem de votos nulos e em branco sobre o total de votos 
calculoNulos = (voto5 * 100) / contVotos
calculoBranco = (voto6 * 100) / contVotos

#leitura final
print("A quantidade de votos do candidato 1: %d"%voto1)
print("A quantidade de votos do candidato 2: %d"%voto2)
print("A quantidade de votos do candidato 3: %d"%voto3)
print("A quantidade de votos do candidato 4: %d"%voto4)
print("A quantidade de votos nulos e: %d"%voto5)
print("A quantidade de votos em branco e: %d"%voto6)
print("A porcentagem de votos nulos em relaçao ao total foi: %.2f"%calculoNulos)
print("A porcentagem de votos em branco em relaçao ao total foi: %.2f"%calculoBranco)





