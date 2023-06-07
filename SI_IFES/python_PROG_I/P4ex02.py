# Faça um programa que leia e valide as seguintes informações:
# Nome: maior que 3 caracteres;
# Idade: entre 0 e 150;
# Salário: maior que zero;
# Sexo: 'f' ou 'm';
# Estado Civil: 's', 'c', 'v', 'd'; (maiúsculas e minúsculas)
# Se alguma informação estiver errada, informar o erro e continuar 
# pedindo a informação
# certa. No final imprima todos os dados.

#------------funçoes-----------------------
#funçao de pedir e validar o nome
def pedirNome() :
    nome = str(input("Digite o seu nome: ")).title()
    contagemNome = len(nome)
    while contagemNome < 3 :
        print("Nome invalido")
        nome = str(input("Digite o seu nome: ")).title()
        contagemNome = len(nome)
    return nome

#funçao de pedir a idade
def pedirIdade() :
    idade = int(input("Digite a sua idade: "))
    while idade < 0 or idade > 150 :
        print("Idade invalida")
        idade = int(input("Digite a sua idade: "))
    idade = str(idade)
    return idade

#funçao de pedir salario
def pedirSalario() :
    salario = float(input("Digite seu salario atual: "))
    while salario <= 0 or salario > 10000 :
        print("Esse Salario nao consta")
        salario = float(input("Digite seu salario atual: "))
    salario = str(salario)
    return salario

#funçao de pedir o sexo
def pedirSexo() :
    sexo = str(input("Digite a letra indicadora do seu sexo(F/M): ")).upper()
    while sexo != "F" and sexo != "M" :
        print("O sexo que voce digitou nao existe")
        sexo = str(input("Digite a letra indicadora do seu sexo(F/M): ")).upper()
    return sexo

#funçao de pedir o estado civil
def pedirEstCivil() :
    estadoCivil = str(input("Qual e seu Estado Civil atualmente(S/C/V/D): ")).upper()
    while estadoCivil != "S" and estadoCivil != "C" and estadoCivil != "V" and estadoCivil != "D":
        print("Estado Civil Invalido")
        estadoCivil = str(input("Qual e seu Estado Civil atualmente(S/C/V/D): ")).upper()
    return estadoCivil

#------------main--------------------------
def main() :
    recebeNome = pedirNome()
    recebeIdade = pedirIdade()
    recebeSalario = pedirSalario()
    recebeSexo = pedirSexo()
    recebeEstCivil = pedirEstCivil()
    print("O seu nome e: %s"%recebeNome)
    print("A sua idade e: %s anos"%recebeIdade)
    print("O salario que voce ganha atualmente e: %s"%recebeSalario)
    print("O seu sexo e: %s"%recebeSexo)
    print("O seu estado civil atual e: %s"%recebeEstCivil)
    
main()




