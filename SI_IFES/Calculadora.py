#---------MAIN----------
print('Ola eu sou a calculadora que calculo atravez de String, voce gostaria de fazer alguma conta?')
print('Se estiver se prepare eu vou perguntar ja ja...so uma observaçao eu so tenho conheço numeros ate o numero 20, ok?!')
perguntacompleta = str(input('Insira por extenso uma operaçao matematica que voce queira:')).upper()
elementos = perguntacompleta.split(" ")
repetir = True
num1 = elementos[0]
operacao = elementos[1]
num2 = elementos[2]
if elementos[1] == 'DIVIDIDO':
    num2 = elementos[3]
    complemento = 'POR'
    complemento = elementos[2]
elif elementos[1] == 'ELEVADO' :
    num2 = elementos[3]
    complemento = 'A'
    complemento = elementos[2]
elif elementos[1] == 'RAIZ' :
    num2 = elementos[3]
    complemento = 'DE'
    complemento = elementos[2]
elif elementos[1] == 'MAIOR' :
    num2 = elementos[3]
    complemento = 'QUE'
    complemento = elementos[2]
elif elementos[1] == 'MENOR' :
    num2 = elementos[3]
    complemento = 'QUE'
    complemento = elementos[2]
else :
    num2 = elementos[2]

    

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

if (operacao == 'MAIOR') and (complemento == 'QUE') :
    if num1 > num2 :
        calculo = True
        print('Isso esta correto....')
    else :
        calculo = False
        print('Ta errado isso ai individuo....')
elif (operacao == 'MENOR') and (complemento == 'QUE') :
    if num1 < num2 :
        calculo = True
        print('Isso esta correto...')
    else:
        calculo = False
        print('Ta errado isso ai individuo....')
else :
 print(' ')



#------------------------
if operacao == 'MAIS' :
    calculo = num1 + num2
elif operacao == 'MENOS' :
    calculo = num1 - num2
elif operacao == 'VEZES' :
    calculo = num1 * num2
elif operacao == 'DIVIDIDO' and complemento == 'POR' :
    calculo = num1 / num2
elif operacao == 'ELEVADO' and complemento == 'A':
    calculo = num1 ** num2
elif operacao == 'RAIZ' and complemento == 'DE' :
    calculo = num1 ** (1/num2)
else :
    print(' ')

#---------------------------

print('O valor da operaçao que voce pediu e %d'%calculo)
