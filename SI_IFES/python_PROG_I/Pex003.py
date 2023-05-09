dias = int(input('Que dia e hoje?'))
horas = int(input('Que horas sao?'))
minutos = int(input('Quantos minutos sao agora?'))
segundos = int(input('Quantos segundos sao agora?'))
calculomin_seg = minutos * 60 
calculohoras_seg = horas * 3600 
calculodia_seg = dias * 86400
calculofinal = calculomin_seg + calculohoras_seg + calculodia_seg + segundos
print('Nesse momento sao %d:%d:%d:%d , totalizando exatamente %d segundos'%(dias, horas, minutos, segundos, calculofinal))