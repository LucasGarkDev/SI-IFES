# Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. 
# Um número primo é aquele que é divisível somente por ele mesmo e por 1

#inicializaçao
divisor = 2
numPrimo = True

#pedir o numero
num = int(input("Digite um numero: "))
while num <= 0 :
    print("Numero invalido")
    num = int(input("Digite um numero: "))

#verificar se ele e primo
if num > 1 :#toda a funçao abaixo apenas diz que o numero nao e primo, se nao cair na condiçao, entao e primo
    while divisor < num : #para o numero ser primo ele so pode dividir por ele,nunca nada abaixo dele
        if num % divisor == 0 :#caso ele caia aqui nos ja sabemos que ele nao e primo
            numPrimo = False
            print("O numero %d nao e Primo"%num)
            divisor = num + 1 #isso vai servir para quebrar esse loop
        else :
            divisor = divisor + 1
    
    if numPrimo == True :
        print("O numero %d e primo"%num)       
else :
    print("Para esse numero ser primo...")
    print("Ele precisa ser maior que 1")