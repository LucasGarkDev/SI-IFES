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
anterior = num1
atual = num2
resto = anterior % atual
while resto != 0:
    anterior = atual
    atual = resto
    resto = anterior % atual
print("MDC(%d,%d)=%d" %(num1,num2,atual))
# divisor = 2
# cont = 0
# quantidadeDeNumeros = 1
# while num1 != 0 and num2 != 0 :
#     if (divisor > 1) and (divisor // (2 ** (1/2)) == False) :
#         if (num1 % divisor == 0) and (num2 % divisor == 0):
#             acumulo = acumulo * divisor
#             cont = cont + 1
#             quantidadeDeNumeros = quantidadeDeNumeros + 1
#         else :
#             cont = cont + 1
#     else :
#         cont = cont + 1
# mdc = acumulo ** (1/quantidadeDeNumeros)
# print("O MDC desses dois numeros e: %.2f"%mdc)