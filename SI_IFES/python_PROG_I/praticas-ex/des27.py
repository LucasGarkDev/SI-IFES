# Ler dois números inteiros positivos e determinar o máximo divisor comum entre eles.
# DICA: Repita de 1 até chegar a um dos dois números lidos. A cada iteração verificar se
# esse contador divide os dois números. Se dividir, guarde ele em uma variável. Um número
# é divisível por outro se o resto da divisão for zero.

#inicializaçao
divisor = 2
menorNum = 1

#pedir o primeiro numero
num1 = int(input("Digite o primeiro numero: "))
while num1 <= 0 :
    print("Numero invalido")
    num1 = int(input("Tente novamente: "))

#pedir o segundo numero
num2 = int(input("Digite o segundo numero: "))
while num2 < 0 :
    print("Numero invalido")
    num2 = int(input("Tente novamente: "))

#determinar qual numero e o menor deles
if num1 > num2 :
    menorNum = num2
else :
    menorNum =  num1

#calcular o mdc
while divisor < menorNum :
    if num1 % divisor == 0 and num2 % divisor == 0 :
        mdc = divisor
    divisor = divisor + 1

#leitura final
print("O MDC de(%d,%d) e: %d"%(num1,num2,mdc))