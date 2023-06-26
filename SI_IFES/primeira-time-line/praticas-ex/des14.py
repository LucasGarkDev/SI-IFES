# Faça um programa que calcule o valor total investido por um colecionador 
# em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá 
# informar a quantidade de CDs e o valor para em cada um.,

#perguntar quantos CD's o colecionador tem
numcd = 0
numcd = int(input("Digite o numero total de CD's que voce tem: "))
while numcd < 1 :
    print("Voce e um colecionador de CD's e nao tem um CD?")
    numcd = int(input("Digite novamente: "))
cd = 0
soma = 0
if numcd >= cd :
    outroCD = "SIM"
    while outroCD == "SIM" :
        cd = int(input("Digite o numero de CD's que voce comprou: "))

        #perguntar o preço que ele pagou em cada CD
        precoCD = float(input("Digite o preço que voce pagou nesse tipo de CD: "))
        if precoCD == 0 :
            print("Uai voce ganhou?")
        while precoCD < 0 :
            print("Roubar CD's para a coleçao nao pode")
            precoCD = float(input("Digite o preço que voce pagou nesse tipo de CD: "))

        #soma total dos CD's
        calculo = cd * precoCD
        soma = soma + calculo

        outroCD = str(input("Voce comprou outro tipo de CD, alem desses?: ")).upper()
#media dos preços dos CD's
media = soma / numcd  
print("O valor total de investimento nessa coleçao de CD's foi: %.2f"%soma)
print("A media dos valores de cada CD foi de: %.2f"%media)



