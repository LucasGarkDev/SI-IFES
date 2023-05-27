# Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. 
# O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser 
# conforme o exemplo abaixo:
# Tabuada de 5:
# 5 X 1 = 5
# 5 X 2 = 10
# ...
# 5 X 10 = 50


#inicio
cont = 0
outraTabuada = "SIM"
while outraTabuada == "SIM" :

    #pedir a tabuada
    numTabuada = int(input("Digite o numero que voce deseja ver a tabuada: "))

    #tabuada em si
    cont = 0
    while cont <= 10 :
        calculo = numTabuada * cont
        print("%d vezes %d e: %d"%(numTabuada,cont,calculo))
        cont = cont + 1
    outraTabuada = str(input("Voce deseja ver a tabuada de mais algum numero?")).upper()