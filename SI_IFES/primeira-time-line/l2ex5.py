num1 = int(input('Digite o primeiro numero:'))
num2 = int(input('Digite o segundo numero:'))
num3 = int(input('Digite o terceiro numero:'))
if num1 >= num2 and num1 >= num3 :
    if num2 > num3 :
        print('A ordem vai ficar %d,%d,%d'%(num1,num2,num3))
    else :
        print('A ordem vai ficar %d,%d,%d'%(num1,num3,num2))
elif num2 >= num3 :
    if num3 > num1:
        print('A ordem vai ficar %d,%d,%d'%(num2,num3,num1))
    else :
        print('A ordem vai ficar %d,%d,%d'%(num2,num1,num3))
else :
    if num2 > num1 :
        print('A ordem vai ficar %d,%d,%d'%(num3,num2,num1))
    else :
        print('A ordem vai ficar %d,%d,%d'%(num3,num1,num2))
