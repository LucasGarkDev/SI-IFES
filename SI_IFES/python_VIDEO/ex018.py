import math
angulo = float(input('Digite o angulo:'))
conv = math.radians(angulo)
seno = math.sin(conv)
cosseno = math.cos(conv)
tangente = math.tan(conv)
print('O seno, o cosseno e a tangente do angulo {}, sao respectivamente, {} , {} , {}'.format(angulo, seno, cosseno, tangente))
