distancia = float(input('Qual e a distancia que voce percorrera nessa viagem'))
velocidade = float(input('Qual e a velociade media que voce pretende usar para viajar?(em km/h)'))
calculo_do_tempo = distancia / velocidade
print('Levando em consideraçao a distancia de %5f e a velociade de %5f'%(distancia, velocidade))
print('O tempo que voce gastara para essa viagem e %5f horas'%calculo_do_tempo)