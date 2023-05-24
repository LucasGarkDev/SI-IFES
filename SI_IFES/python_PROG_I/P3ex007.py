#digitando o tamanho da sequencia
numDigitado = int(input("Digite um numero inteiro para determinar o tamanho da sequencia de fibonacci"))

#montar a sequencia de fibonaticci
cont = 1
if numDigitado > 3 :
    if numDigitado == 3 :
        if numDigitado == 2 or numDigitado > 2:
            if numDigitado == 1 or numDigitado > 1:
                num1 = 1
                print(num1,)
            num2 = 1
            print(num2,)
        proxNum = num2 + num1
        print(proxNum,)
    num1 = 1
    print(num1,)
    num2 = 1
    print(num2,)
    proxNum = num1 + num2
    print(proxNum,)
    while cont <= numDigitado :
        num1 = num2
        num2 = proxNum
        proxNum = num1 + num2
        print(proxNum,)
        cont = cont + 1




