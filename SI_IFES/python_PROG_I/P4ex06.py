# Faça um programa com uma função chamada somaImposto. A função possui 
# dois parâmetros formais: taxaImposto, que é a quantia de ,
# imposto sobre vendas expressa em
# porcentagem; e valorCusto, que é o custo de um item 
# antes do imposto. A função retorna
# o valor de custo acrescentado com o imposto sobre vendas. 

#----------------funçoes------------------------
#funçao de pedir taxa imposto
def taxaImposto():
    taxa = float(input("Digite o valor, em porcentagem,da taxa de imposto sobre vendas: "))
    while taxa < 0 :
        print("Porcentagem nao existente")
        taxa = float(input("Digite novamente: "))
    return taxa

#funçao de pedir valor custo
def valorCusto() :
    valorInicial = float(input("Digite o preço o valor do preço de custo do produto: "))
    while valorInicial < 0 :
        print("Custo nao compativel")
        valorInicial = float(input("Digite novamente:"))
    return valorInicial
        
#funçao soma imposto
def somaImposto(valor,taxa):
    taxamento = (taxa/100) * valor
    soma = valor + taxamento
    return soma

#----------------main---------------------------
def main():
    valor = valorCusto()
    taxa = taxaImposto()
    res = somaImposto(valor,taxa)
    print("O valor de custo inical e: %.2f"%valor)
    print("O valor da taxa de imposto e: %.2f "%taxa)
    print("O valor de custo apos o acrescimo de imposto e: %.2f"%res)
main()
