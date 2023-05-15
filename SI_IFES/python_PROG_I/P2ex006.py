perguntacombustivel = str(input('Qual combustivel voce usa para abasteçer, Gasulina(G)ou Alcool(A)?')).upper()
litros = float(input('Quantos litros voce deseja desse combustivel?'))
if perguntacombustivel == 'A' and litros <= 20 :
    desconto = (3.20 * litros) - (litros * (3/100))
elif perguntacombustivel == 'A' and litros > 20 :
    desconto = (3.20 * litros) - (litros * (5/100))
elif perguntacombustivel == 'G' and litros <= 20 :
    desconto =(3.90 * litros) - (litros * (4/100))
else :
    desconto =(3.90 * litros) - (litros * (6/100))
print('O valor total que voce gastou para absteçer e %.2f'%desconto)
