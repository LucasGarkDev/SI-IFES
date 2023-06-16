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
#funçao de pedir o nome
def pedirNome() :
    nome = str(input("Digite um nome: ")).title()
    contNome = len(nome)
    while contNome <= 3 :
        print("Nome Invalido")
        nome = str(input("Digite um nome,novamente: ")).title()
        contNome = len(nome)
    return nome

#funçao de pedir idade
def pedirIdade() :
    idade = int(input("Digite a idade: "))
    while idade <= 0 or idade > 150 :
        print("Idade Invalida")
        idade = int(input("Digite a idade,novamente: "))
    return idade

#funçao de pedir salario
def pedirSalario() :
    salario = float(input("Digite o valor de salario: "))
    while salario <= 0 :
        print("Salario não compativel")
        salario = float(input("Digite o valor de salario,novamente: "))
    return salario

#funçao de pedir sexo
def pedirSexo() :
    sexo = str(input("Digite o sexo(f/m): ")).upper()
    while sexo != "F" and sexo != "M" :
        print("Sexo Invalido")
        sexo = str(input("Digite o sexo(f/m),novamente: ")).upper()
    return sexo

#funçao de pedir estado civil
def pedirEstCivil() :
    estadoCivil = str(input("Digite o estado civil(s,c,v,d): ")).upper()
    while estadoCivil != "S" and estadoCivil != "C" and estadoCivil != "V" and estadoCivil != "D":
        print("Estado civil nao compativel")
        estadoCivil = str(input("Digite o estado civil(s,c,v,d): ")).upper()
    return estadoCivil

#funçao imprimir geral
def imprimir():
    nome = pedirNome()
    idade = pedirIdade()
    salario = pedirSalario()
    sexo = pedirSexo()
    estadoCivil = pedirEstCivil()
    print("O nome e: %s"%nome)
    print("A idade e: %d anos"%idade),
    print("O salario e: R$ %.2f"%salario)
    print("O sexo e: %s"%sexo)
    print("O estado civil e: %s"%estadoCivil)
#------------main--------------------------
def main():
    imprimir()

main()




