# Faça uma função que informe a quantidade de dígitos de um 
# determinado número inteiro informado.

#------------------------funçoes----------------------
#pedir o numero inteiro
def pedirN():
    n = int(input("Digite um numero: "))
    while n < 0 :
        print("Esse numero nao e valido")
        n = int(input("Digite novamente: "))
    return n

#converter para string
def converterSTR(n):
    return str(n)

#fazer a contagem final dele
def contagem(conv):
    return len(conv)

#------------------------main-------------------------
def main():
    num = pedirN()
    conversao = converterSTR(num)
    contar = contagem(conversao)
    print("A quantidade de digitos desse numero e: %s"%contar)
main()