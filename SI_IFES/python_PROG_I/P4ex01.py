# Faça um programa que leia um nome de usuário e a sua senha. 
# A senha não pode ser
# igual ao nome do usuário, nem menor que 6 caracteres. 
# Caso ocorra o erro, mostre a
# mensagem de erro e volte a pedir as informações. 
# No final imprima o nome e a senha.

#---------------funçoes--------------------------------
#funçao para pedir e validar o nome
def nomePedir() :
    nomeUsuario = str(input("Digite o nome do usuario: ")).title()
    contagemNome = len(nomeUsuario)
    while contagemNome <= 2 :
        print("Nome invalido")
        nomeUsuario = str(input("Digite o nome do usuario: ")).title()
        contagemNome = len(nomeUsuario)
    return nomeUsuario
    

#funçao para pedir e validar a senha
def senhaPedir(recebeNome) :
    senha = str(input("Digite a senha do usuario: "))
    contagemSenha = len(senha)
    while senha == recebeNome or contagemSenha < 6 :
        print("Senha invalida")
        senha = str(input("Digite a senha do usuario: "))
        contagemSenha = len(senha)
    return senha


#----------------main----------------------------------

def main() :
    outroUsuario = "SIM"
    while outroUsuario == "SIM" :
        recebeNome = nomePedir()
        recebeSenha = senhaPedir(recebeNome)
        print("O nome do usuario e: %s"%recebeNome)
        print("A senha do usuario e: %s"%recebeSenha)
        outroUsuario = str(input("Voce deseja fazer login de outro usuario?")).upper()
main()