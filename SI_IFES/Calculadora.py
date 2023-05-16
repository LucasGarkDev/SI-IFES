#---------MAIN----------

perguntacompleta = str(input('Insira por extenso uma operaçao matematica que voce queira:')).upper()
elementos = perguntacompleta.split(" ")
repetir = False
num1 = elementos[0]
operacao = elementos[1]
num2 = elementos[2]
complemento = elementos['POR','A','DE']
if elementos[2] == 'DIVIDIDO':
    num2 = elementos[4]
    complemento = 'POR'
    complemento = elementos[3]
elif elementos[2] == 'ELEVADO' :
    num2 = elementos[4]
    complemento = 'A'
    complemento = elementos[3]
elif elementos[2] == 'RAIZ' :
    num2 = elementos[4]
    complemento = 'DE'
    complemento = elementos[3]
else :
    while repetir:
    if (num2 != 'DIVIDIDO') or (num2 != 'ELEVADO') or (num2 != 'RAIZ') :

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

if num2 == "UM" :
    num2 = int(1)
elif num2 == "DOIS" :
    num2 = int(2)
elif num2 == "TRES" :
    num2 = int(3)
elif num2 == "QUATRO" :
    num2 = int(4)
elif num2 == "CINCO" :
    num2 = int(5)
elif num2 == "SEIS" :
    num2 = int(6)
elif num2 == "SETE" :
    num2 = int(7)
elif num2 == "OITO" :
    num2 = int(8)
elif num2 == "NOVE" :
    num2 = int(9)

#------------------------

if operacao == 'MAIOR QUE' :
    if num1 > num2 :
        print('Isso esta correto....')
    else :
        print('Ta errado isso ai individuo....')
elif operacao == 'MENOR QUE' :
    if num1 < num2 :
        print('Isso esta correto...')
    else:
       print('Ta errado isso ai individuo....')




#------------------------
if operacao == 'MAIS' :
    calculo = num1 + num2
elif operacao == 'MENOS' :
    calculo = num1 - num2
elif operacao == 'VEZES' :
    calculo = num1 * num2
elif operacao == 'DIVIDIDO POR' :
    calculo = num1 / num2
elif operacao == 'ELEVADO A' :
    calculo = num1 ** num2
elif operacao == 'RAIZ DE' :
    calculo = num1 ** (1/num2)
else :
    print('Operaçao nao conhecida, por acaso voce nao leu?')

#---------------------------

print('O valor da operaçao que voce pediu e %d'%calculo)
