hora = float(input('Que horas sao agora?'))
if 0 <= hora < 5 :
    print('Hora de mimir')
if 5 <= hora < 12 :
    print('Bom dia')
if 12 <= hora < 18 :
    print('Boa tarde')
if 18 <= hora < 24 :
    print('Boa noite')
if hora >= 25 :
    print('Voce quebrou o espaço tempo')
