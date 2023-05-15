print('Ola muito bom dia por requisitar o serviço da loja de tintas Suvinil!')
print('Voce deseja pintar a sua casa ou algum comodo..certo?')
print('Ok, vamos começar...atentando para o fato das tintas serem vendidas em latas inteiras de 18 litros cada')
area = float(input('Quantos metros quadrados tem a superfice que voce quer pintar?'))
litros = area // 3
quantidadeDeLatas = litros // 18
if litros <= 18.00 :
    preco = 80.00
    quantidadeDeLatas = 1
else :
    preco = 80.00 * quantidadeDeLatas
print('A quantidade de latas que voce vai gastar e %d e o preço total e de %.2f'%(quantidadeDeLatas,preco))