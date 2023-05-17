# Sabendo que str( ) converte valores numéricos para string,
# calcule quantos dígitos há em 2 elevado a um milhão.

# Pegar o resultado e converter para STRING
# Calcular o tamanho da string com LEN

# Esse cálculo pode demorar um pouco ...

s = str(2**1000000)
print ("A quantidade de dígitos é: %d" %len(s) )
