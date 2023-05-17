valorSacar = int(input('Quanto voce quer sacar?'))
if valorSacar < 0 :
    print('Operaçao impossivel')
else :
    if valorSacar >= 100 :
        nota100 = valorSacar // 100
    else:
        nota100 = 0
elif valorSacar >= 50 :
    nota50 = valorSacar // 50
            if valorSacar >= 10 :
                nota10 = valorSacar // 10
                if valorSacar >= 5 :
                    nota5 = valorSacar // 5
                    if valorSacar >= 1 :
                        nota1 = valorSacar // 1
                    else :
                        nota1 = 0
                else :
                    nota5 = 0
            else: 
                nota10 = 0
else:
    nota50 = 0

print('O valor que voce pediu e %d'%valorSacar)
print('O valor de notas de 100 e %d'%nota100)
print('O valor de notas de 50 e %d'%nota50)
print('O valor de notas de 10 e %d'%nota10)
print('O valor de notas de 5 e %d'%nota5)
print('O valor de notas de 1 e %d'%nota1)
