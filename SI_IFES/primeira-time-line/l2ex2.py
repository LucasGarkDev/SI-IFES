# Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
# Conformealetra,escrever: F -­ Feminino, M -­ Masculino ou Sexo Inválido.
letra = str(input('Digite uma letra de acordo com o seu sexo:')).upper()
if letra == "F" :
    print('F-Feminino')
    if letra == "M" :
        print('M-Masculino')
    else:
        print('Sexo Invalido')