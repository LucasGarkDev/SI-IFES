#---------MAIN----------
num1 = str(input('Insira um numero por extenso:'))
operacao = str(input('Insira a operaçao que voce deseja(soma,subtraçao,multiplicaçao,divisao):')).upper()
num2 = str(input('Insira outro numero para a operaçao:'))
#------------------------

if num1 == "UM" :
    num1 = int(1)
elif num1 == "DOIS" :
    num1 = int(2)
elif num1 == "TRES" :
    num1 = int(3)
elif num1 == "QUATRO" :
    num1 = int(4)
elif num1 == "CINCO" :
    num1 = int(5)
elif num1 == "SEIS" :
    num1 = int(6)
elif num1 == "SETE" :
    num1 = int(7)
elif num1 == "OITO" :
    num1 = int(8)
elif num1 == "NOVE" :
    num1 = int(9)

#------------------------

if operacao == 'SOMA' :
    calculo = num1 + num2
elif operacao == 'SUBTRAÇAO' :
    calculo = num1 - num2
elif operacao == 'MULTIPLICAÇAO' :
    calculo = num1 * num2
elif operacao == 'DIVISAO' :
    calculo = num1 / num2
else :
    print('Operaçao nao conhecida, por acaso voce nao leu?')

#---------------------------

print('O valor da operaçao que voce pediu e %d'%calculo)

