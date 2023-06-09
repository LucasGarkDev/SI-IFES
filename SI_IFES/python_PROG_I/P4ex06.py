# Faça um programa com uma função chamada somaImposto. A função possui 
# dois parâmetros formais: taxaImposto, que é a quantia de ,
# imposto sobre vendas expressa em
# porcentagem; e valorCusto, que é o custo de um item 
# antes do imposto. A função retorna
# o valor de custo acrescentado com o imposto sobre vendas. 

#----------------funçoes------------------------
#funçao de somar o imposto
def somaImposto(taxaImposto,valorCusto) :
    somatorio = valorCusto + (valorCusto * taxaImposto)
    return somatorio

#funçao de perguntar a taxa do imposto
def taxaImposto() :
    taxa = float(input("Quanto e a taxa de imposto? "))
    taxa = taxa / 100
    return taxa

#funçao de perguntar o valor de custo
def valorCusto() :
    valor = float(input("Qual era o valor antes do imposto? "))
    return valor
#----------------main---------------------------
def main() :
    valorCus = valorCusto()
    taxaImpo = taxaImposto()
    soma = somaImposto(taxaImpo,valorCus)
    print(soma)

main()