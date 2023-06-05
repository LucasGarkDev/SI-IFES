# A série de Fibonacci é formada pela sequência 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que 
# gere a série até que o valor seja maior que 500.

#iniciaçao
num0 = 0
num1 = 1
num2 = 1
proxNum = num1 + num2
cont = 0

#petiçao do tamanho da sequencia
tamanhoSequencia = int(input("Digite o tamanho que voce deseja que a sequencia de Fibonacci tenha: "))

#variavel para iniciar toda a sequencia 
inicio = "A sequencia e:"
#primeira leitura(para caso o numero de vezes selecionado seja 4 ou menor)
print(inicio)
if tamanhoSequencia <= 4 :
    if tamanhoSequencia <= 1 :
        print("%d"%num0)
    elif tamanhoSequencia <= 2 :
        print("%d"%num0) 
        print("%d"%num1)
    elif tamanhoSequencia <= 3 :
        print("%d"%num0)
        print("%d"%num1)
        print("%d"%num2)
    else :
        print("%d"%num0)
        print("%d"%num1)
        print("%d"%num2)
        print("%d"%proxNum)     
else:
        print("%d"%num0)
        print("%d"%num1)
        print("%d"%num2)
        print("%d"%proxNum) 
    #redefiniçao
        cont = 4
        while cont <= tamanhoSequencia :
            num1 = num2
            num2 = proxNum
            proxNum = num1 + num2
            print("%d"%proxNum)
            cont = cont + 1

