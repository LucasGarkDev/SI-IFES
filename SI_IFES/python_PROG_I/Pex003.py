dias = int(input('Que dia e hoje?'))
horas = int(input('Que horas sao?'))
minutos = int(input('Quantos minutos sao agora?'))
segundos = int(input('Quantos segundos sao agora?'))
conversaoDeSeg = (minutos * 60) + segundos
conversaoDeSeg = (horas * 60 * 60) + conversaoDeSeg
conversaoDeSeg = (dias * 24 * 60 * 60) + conversaoDeSeg
print('Nesse momento sao %d:%d:%d:%d , totalizando exatamente %d segundos'%(dias, horas, minutos, segundos, conversaoDeSeg))