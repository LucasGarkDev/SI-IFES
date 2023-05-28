# O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da 
# tabelinha, que já é um sucesso na sua loja de 1,99. Você foi contratado para desenvolver o 
# programa que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão 
# informado pelo usuário, conforme o exemplo abaixo:
# Preço do pão: R$ 0.18
# Panificadora Pão de Ontem - Tabela de preços
# 1 - R$ 0.18
# 2 - R$ 0.36
# ...
# 50 - R$ 9.00

#pedir o numero de paes
paes = int(input("Digite o numero de produtos: "))

#preço do pao
precoPao = float(input("Digite o preço do pao em kg: "))

#tabela
cont = 1
num = 1
while cont <= paes:
    tab = num * precoPao    
    print("O valor se quantidade de produtos for %d e: %.2f"%(num,tab))
    num = num + 1
    cont = cont + 1
    