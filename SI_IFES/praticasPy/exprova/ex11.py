# As Organizações Tabajara resolveram dar um abono aos seus 
# colaboradores em reconhecimento ao bom resultado alcançado durante
# o ano que passou. Para isto contratou você para desenvolver a 
# aplicação que servirá como uma projeção de quanto será gasto com 
# o pagamento deste abono.Após reuniões envolvendo a diretoria 
# executiva, a diretoria financeira e os representantes do 
# sindicato laboral, chegou-se a seguinte forma de cálculo:
# a.Cada funcionário receberá o equivalente a 20% do seu salário 
# bruto de dezembro; 
# a.O piso do abono será de 100 reais, isto é, 
# aqueles funcionários cujo salário for muito baixo, recebem este 
# valor mínimo; Neste momento, não se deve ter nenhuma preocupação 
# com colaboradores com tempo menor de casa, descontos, impostos ou 
# outras particularidades. Seu programa deverá permitir a digitação 
# do salário de um número indefinido (desconhecido) de salários. 
# Um valor de salário igual a 0 (zero) encerra a digitação. Após a 
# entrada de todos os dados o programa deverá calcular o valor do 
# abono concedido a cada colaborador, de acordo com a regra definida
# acima. Ao final, o programa deverá apresentar:
# O salário de cada funcionário, juntamente com o valor do abono;
# O número total de funcionário processados;
# O valor total a ser gasto com o pagamento do abono;
# O número de funcionário que receberá o valor mínimo de 100 reais;
# O maior valor pago como abono; A tela abaixo é um exemplo de
# execução do programa, apenas para fins ilustrativos. Os valores 
# podem mudar a cada execução do programa.


#-----------------funçoes------------------
#perguntar o salario
def pedirSalario(cont,armazenamento):
    salario = float(input("Digite o salario do individuo %d : "%cont))
    while salario < 0 :
        print("Salario impossivel")
        salario = float(input("Digite novamente: "))
    if salario == 0:
        return 0
    armazenamento.append(salario)


#fazer o piso abono para os salarios menores
def pisoAbono(vetor,menores):
    i = 0
    while i < len(vetor):
        if vetor[i] <= 500 :
            vetor[i] += 100
            menores.append(vetor[i])
        else:
            vetor[i] += ((20/100) * vetor[i])
        i += 1

#imprimir os abonos de todos os funcionarios
def imprimirAbono(vetor):
    print("---------ABONOS DOS FUNCIONARIOS---------")
    cont = 1
    i = 0
    while i < len(vetor):
        print("Funcionario %d : %.2f"%(cont,vetor[i]))
        i += 1
        cont += 1
        
#numero total de funcionarios
def numFuncionarios(vetor):
    n = len(vetor)
    print("--------------------------------------------------")
    print("       O numero total de funcionarios: %s       "%n)
    print("--------------------------------------------------")

#O número de funcionário que receberá o valor mínimo de 100 reais
def numFuncinariosMenor(vetor):
    n = len(vetor)
    print("--------------------------------------------------")
    print(" O numero de funcinarios que receberam 100: %s "%n)
    print("--------------------------------------------------")

#os abonos de todos
def imprimirNumAbonos(vetor):
    i = 0
    maior = 0
    while i < len(vetor):
        if vetor[i] > maior:
            maior = vetor[i]
        i += 1 
    print("--------------------------------------------------")
    print("      O maior valor recebido de abono: %.2f       "%maior)
    print("--------------------------------------------------")

#-----------------main---------------------
contNum = 1
salarios = []
r = pedirSalario(contNum,salarios)
while r != 0 :
    contNum += 1
    r = pedirSalario(contNum,salarios) 
salariosMenores = []
pisoAbono(salarios,salariosMenores)
imprimirAbono(salarios)
numFuncionarios(salarios)
numFuncinariosMenor(salariosMenores)
imprimirNumAbonos(salarios)




