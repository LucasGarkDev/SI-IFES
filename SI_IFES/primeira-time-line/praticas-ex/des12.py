fatorial = int(input("Digite um numero que voce deseja vr o fatorial: "))

#determinando o fatorial
cont = 1
num = fatorial
calculo = 1

#fazendo o fatorial
while cont <= fatorial:
    calculo = calculo * num
    num = num - 1
    cont = cont + 1

print("O fatorial de %d e: %d"%(fatorial,calculo))
