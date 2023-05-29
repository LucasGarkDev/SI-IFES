#41)
#valor da divida
valorDivida = float(input("Digite o valor da divida que voce tem: "))
while valorDivida < 0 :
    print("Uai! entao voce esta com lucro?")
    valorDivida = float(input("Digite novamente: "))


#inicializaçao 
cont = 1
numParcelas = int(input("Voce deseja ver o valor ate qual parcela?: "))
contJuros = 1
parcelas = 1

#quantidade de parcelas
calculoParcelas = 0
while cont <= numParcelas :
    calculoParcelas = valorDivida / parcelas
    print("O total de parcelas %d resulta no valor: %.2f por parcela"%(parcelas,calculoParcelas))
    parcelas = parcelas + 3
    cont = cont + 1

#juros por parcela
juros = 1
calculoJuros = 1
if numParcelas == 1 :
    print("O total de juros e: %d %, para %d parcelas"%(juros,calculoJuros))
juros = 10
parcelas = 3
calculoJuros = juros / parcelas
if numParcelas == 2 :
    print("Aumento de juros vai ser %.2f para cada %d parcela"%(calculoJuros,parcelas))
if numParcelas > 2 :
    while contJuros <= numParcelas :
        juros = juros + 5
        parcelas = parcelas + 3
        calculoJuros = juros / parcelas
        print("Aumento de juros vai ser %.2f para cada %d parcela"%(calculoJuros,parcelas))
        contJuros = contJuros + contJuros
