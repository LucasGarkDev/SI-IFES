perguntacombustivel = str(input('Qual combustivel voce usa para abasteçer, Gasulina(G)ou Alcool(A)?'))
litros = float(input('Quantos litros voce deseja desse combustivel?'))
if perguntacombustivel == 'A' and litros >= 20 :
    desconto = (3.20 * litros) - (litros * (3/100))
else :
    desconto = (3.20 * litros) - (litros * (5/100))
if perguntacombustivel == 'G' and litros >= 20 :
    desconto =(3.90 * litros) - (litros * (4/100))
else :
    desconto =(3.90 * litros) - (litros * (6/100))
print('O valor total que voce gastou para absteçer e %f'%desconto)