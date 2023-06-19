# Faça uma função que retorne o reverso de um número inteiro informado.
# Por exemplo: 127 -> 721.


#------------------------funçoes----------------------
#pedir o numero inteiro
def pedirNum():
    n = int(input("Digite um numero:"))
    while n <= 0 :
        print("Numero Invalido")
        n = int(input("Digite novamente:"))
    return n

#inverter o numero
def inverte(n):
    if n <= 9 :
        return n
    elif n <= 99 :
        r = duasCasas(n,10)
        return r
    elif n <= 999 :
        r = tresCasas(n,100)
        return r
    elif n <= 9999:
        r = quatroCasas(n,1000)
        return r
    
#funçao de inversao de 2 casas
def duasCasas(n,divisor):
    cal1 = n // divisor
    cal2 = n % divisor
    final = str(cal2)+str(cal1)
    return final

#inversao de 3 casas
def tresCasas(n,divisor):
    cal1 = n // divisor
    cal2 = n % divisor
    divisor = divisor // 10
    cal3 = cal2 // divisor
    cal4 = cal2 % divisor
    final = str(cal4)+str(cal3)+str(cal1)
    return final

#inversao de 4 casas
def quatroCasas(n,divisor):
    cal1 = n // divisor
    cal2 = n % divisor
    divisor = divisor // 10
    cal3 = cal2 // divisor
    cal4 = cal2 % divisor
    divisor = divisor // 10
    cal5 = cal4 // divisor
    cal6 = cal4 % divisor
    final = str(cal6)+str(cal5)+str(cal3)+str(cal1) 
    return final

#------------------------main-------------------------
num = pedirNum()
res = inverte(num)
print("O inverso do numero: %d é: %s "%(num,res))