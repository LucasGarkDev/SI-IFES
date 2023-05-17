# Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
#  Álcool:
# a. até 20 litros, desconto de 3% por litro. 
# b. acima de 20 litros, desconto de 5% por litro. 
#  Gasolina:
# a. até 20 litros, desconto de 4% por litro. 
# b. acima de 20 litros, desconto de 6% por litro
# Escreva um programa que leia o número de litros vendidos, o tipo de combustível
# (codificado da seguinte forma: A-­álcool, G-­gasolina), calcule e imprima o
#   valor aser pago pelo cliente sabendo­ se 
#  que o preço do litro da gasolina é R$ 3,90 e o preçodo litro do álcool é R$ 3,20

combustivelRequerido = str(input('Qual tipo de combustivel voce deseja A-alcool ou G-gasolina?')).lower()
litros = float(input('Quantos litros do respectivo combustivel voce deseja?'))
precoGasulina = 3.90
precoAlcool = 3.20
if combustivelRequerido == 'a' or combustivelRequerido == 'alcool' :
    total = litros * precoAlcool
    combustivelRequerido = 'A-alcool'
    if litros >= 20 :
        desconto = (3/100) * total
        total = total - desconto
    else :
        desconto = (5/100) * total
        total = total - desconto
elif combustivelRequerido == 'g' or combustivelRequerido == 'gasolina' :
    total = litros * precoGasulina
    combustivelRequerido = 'G-gasolina'
    if litros >= 20 :
        desconto = (4/100) * total
        total = total - desconto
    else :
        desconto = (6/100) * total
        total = total - desconto
else :
    print('Combustivel nao reconhecido')
print('O combustivel escolhido foi %s,sendo %.2f litros dele e custando %.2f'%(combustivelRequerido,litros,total))
