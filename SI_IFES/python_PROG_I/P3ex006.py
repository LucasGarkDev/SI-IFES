# digitar primeiro numero positivo
num1 = int(input("Digite um numero: "))
while num1 < 0 :
    print("Numero invalido"),
    num1 = int(input("Digite novamente: "))

# digitar segundo numero positivo
num2 = int(input("Digite outro numero: "))
while num2 < 0 :
    print("Numero invalido"),
    num2 = int(input("Digite novamente: "))

#calcular o MDC
menorNum = 0
maiorNum = 0
if num1 > num2 :
    maiorNum = num1
    menorNum = num2
else :
    maiorNum = num2 
    menorNum = num1
cont = 1
while cont <= menorNum :
    if (num1 % cont == 0) and (num2 % cont == 0) :
        mdc = cont
    cont = cont + 1
print("O MDC de(%d,%d) e: %d"%(num1,num2,mdc))
