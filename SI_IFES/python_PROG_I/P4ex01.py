# Faça um programa que leia um nome de usuário e a sua senha. 
# A senha não pode ser
# igual ao nome do usuário, nem menor que 6 caracteres. 
# Caso ocorra o erro, mostre a
# mensagem de erro e volte a pedir as informações. 
# No final imprima o nome e a senha.

#---------------funçoes--------------------------------
#funçao para pedir o nome
def pedirNome():
    nome = str(input("Digite o nome do usuario: ")).title()
    contNome = len(nome)
    while contNome <= 2 :
        print("Nome Invalido")
        nome = str(input("Digite o nome do usuario,novamente: ")).title()
        contNome = len(nome)
    return nome

#funçao para pedir senha
def pedirSenha(nome):
    senha = input("Digite a senha do usuario: ")
    contSenha = len(senha)
    while contSenha < 6 or senha == nome :
        print("Senha Invalida")
        senha = input("Digite a senha do usuario,novamente: ")
        contSenha = len(senha)
    return senha

#funçao para ler o nome e a senha
def lerNomeSenha():
    nome = pedirNome()
    senha = pedirSenha(nome)
    print("O nome do usuario e: %s"%nome)
    print("A senha do usuario e: %s"%senha)


#----------------main----------------------------------
def main():
    lerNomeSenha()

main()