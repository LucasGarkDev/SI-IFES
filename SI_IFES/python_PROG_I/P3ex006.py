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
divisor = 2
mdc = 1
quantidadeDeDivisoes = 0
while (divisor > 1) and (divisor % divisor != 0) :
    if (num1 % divisor == 0) and (num2 % divisor == 0) :
        mdc = mdc * divisor
        quantidadeDeDivisoes = quantidadeDeDivisoes + 1
        divisor = divisor + 1
    divisor = divisor + 1  
mdcReal = mdc / quantidadeDeDivisoes
print("o MDC desses numeros e: %d"%mdcReal)
    