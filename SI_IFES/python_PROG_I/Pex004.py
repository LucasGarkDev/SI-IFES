salario = float(input('Quanto voce recebe de salario?'))
porcenAumento = int(input('Quanto,em porcentagem, voce recebeu de aumento?'))
calculo = salario + (porcenAumento * salario / 100)
print('O seu salario era %f e depois de um aumento de %d%%, o seu salario passou a ser %f'%(salario, porcenAumento, calculo))