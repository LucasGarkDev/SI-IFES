num1 = int(input('Digite um numero:'))
num2 = int(input('Digite um numero:'))
num3 = int(input('Digite um numero:'))
print('Os numeros selecionados sao %d , %d , %d'%(num1, num2, num3))
if num1 > num2 > num3 :
    print('A ordem sera %d, %d, %d'%(num1,num2,num3))
elif num1 > num3 > num2 :
    print('A ordem sera %d, %d, %d'%(num1, num3, num2))
elif num2 > num3 > num1 :
    print('A ordem sera %d, %d,%d'%(num2,num3,num1))
elif num2 > num1 > num3 :
    print('A ordem sera %d, %d, %d'%(num2, num1, num3))
elif num3 > num1 > num2 :
    print('A ordem sera %d, %d, %d'%(num3, num1, num2))
else :
    print('A ordem sera %d, %d, %d'%(num3, num2, num1))
    