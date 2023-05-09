fraseanalise = str(input('Insira uma frase:')).strip().upper()
contagem = fraseanalise.count('A')
posicaoinicial = fraseanalise.find('A')[:5]
posicaofinal = fraseanalise.find('A')[25:]
print('Na frase que voce me enviou existe um total de: \n %s de A(s)'%contagem)
print('Sendo que o primeiro A esta na posiçao %s \n e o ultimo na posiçao %s'%(posicaoinicial, posicaofinal))
