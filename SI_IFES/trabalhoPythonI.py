#----------------------funçoes-----------------------------
def menu() :
    op = ""
    while op.isdigit() == False or int(op) < 0 or int(op) > 6:

        print("\n" * 130)        
        print("NOME DO SEU SISTEMA:")
        print("1-Inserir produto")
        print("2-Pesquisar por código")
        print("3-Aumentar preço")
        print("4-Maior preço")
        print("5-Excluir")
        print("6-Listar")
        print("0-Sair")
        op = input("Escolha sua opção: ")
    return int(op)

def percorreVet(vetor,e):
    i = 0
    while i < len(vetor):
        if vetor[i] == vetor[e]:
            return vetor[e]
        i += 1  

def pesquisar(vetor, pesqui):
    for i, e in enumerate(vetor): 
        if e == pesqui: 
            return i
    return -1

def inserirProduto(vetor1,vetor2):
    cod = pedirCodigo(vetor1)
    vetor1.append(cod)
    preco = pedirPreco()
    vetor2.append(preco)

def pedirCodigo(vetor1):
    codigo = input("Digite o numero do codigo: ")
    while codigo.isdigit() == False:
        print("Não é possível usar letras, palavras ou números com vírgula aqui.")
        codigo = input("Digite o numero do codigo, novamente: ")
    
    codigo = int(codigo)
    ver = pesquisar(vetor1, codigo) 
    while ver != -1 :
        print("Codigo ja existente")
        codigo = int(input("Digite o numero do codigo, novamente: "))
        ver = pesquisar(vetor1, codigo)
    return codigo
    
        
def pedirPreco():
    preco = float(input("Digite o preço desse produto: "))
    while preco <= 0 :
        print("Preço impossível de existir no estoque")
        preco = float(input("Digite o preço desse produto, novamente: "))
    return preco


def imprimirResPesquisa(item, vetor1, vetor2, i):
    if item == -1:
        print("O produto sugerido não foi encontrado")
    else:
        print("----------------------------------")
        print("O produto de código %d tem o preço: %.2f" % (vetor1[item], vetor2[item]))
        print("----------------------------------")


def somar(vetor2):
    i = 1
    soma = 0
    while i < len(vetor2):
        soma += vetor2[i]
        i += 1
    return soma


def porcentagem(indice, vetor2, porcentagem):
    cal = vetor2[indice]
    aumento = cal * (porcentagem / 100)
    return cal + aumento


def obter_codigo_valido(vetor1):
    codigo = input("Digite o código do produto: ")

    if codigo.isdigit():
        codigo_int = int(codigo)
        for cod in vetor1:
            if cod == codigo_int:
                return codigo_int

    print("Código inválido ou não encontrado no vetor.")
    return obter_codigo_valido(vetor1)


def aumentarPreco(vetor2, vetor1):
    codigo = obter_codigo_valido(vetor1)

    percentual = input("Digite o valor da porcentagem de aumento: ")
    while float(percentual) <= 0:
        print("Porcentagem inválida.")
        percentual = input("Digite o valor da porcentagem de aumento novamente: ")

    codigo = int(codigo)
    indice = pesquisar(vetor1, codigo)
    calporcentagem = porcentagem(indice, vetor2, float(percentual))

    print("-----------------------------------------")
    print("     O valor do produto %d subirá de %.2f \n" % (vetor1[indice], vetor2[indice]))
    vetor2[indice] = calporcentagem
    print("     para %.2f." % vetor2[indice])
    print("-----------------------------------------")
    

def maiorPreco(vetor2,vetor1):
    maiorPreco = 0  
    codigoMaiorPreco = -1
    i = 1
    while i < len(vetor2):
        if vetor2[i] > maiorPreco:
            maiorPreco = vetor2[i]
            codigoMaiorPreco = vetor1[i]
        i += 1

    if codigoMaiorPreco != -1:
        print("----------------------------------")
        print("O produto de código %d tem o maior preço: %.2f" % (codigoMaiorPreco, maiorPreco))
        print("----------------------------------")
    else:
        print("Nenhum produto encontrado")


def excliur(vetor1, vetor2):
    codigo = input("Digite o código do produto a ser excluído: ")
    while codigo.isdigit() == False:
        print("Não é possível usar letras, palavras ou números com vírgula aqui.")
        codigo = input("Digite o código do produto a ser excluído, novamente: ")
    
    codigo = int(codigo)
    indice = pesquisar(vetor1, codigo)
    if indice != -1:
        del(vetor1[indice])
        del(vetor2[indice])
        print("Produto de código %d excluído com sucesso!" % codigo)
    else:
        print("Produto de código %d não encontrado." % codigo)
    

def listar(vetor1, vetor2):
    i = 0
    o = 1
    print("----------------------PRODUTOS----------------------")
    while i < len(vetor1):
        print("O vetor de ordem %d tem o codigo %d" % (o, vetor1[i]))
        print("E possui o preço em %.2f" % vetor2[i])
        print("-----------------------------------------------------")
        i += 1
        o += 1

###### PRINCIPAL ##########
def main():
    op = 1
    vetorCod = []
    vetorPreco = []
    while op != 0:
        op = menu()
        
        if op == 0:
            print("\n\nFim do programa!!!\n\n")
            
        elif op == 1:
            print("\n\nINSERIR PRODUTO\n\n")
            inserirProduto(vetorCod,vetorPreco)

            
        elif op == 2:
            print("\n\nPESQUISAR POR CODIGO\n\n")
            itemPesquisa = int(input("Digite o código do produto: "))
            ver = pesquisar(vetorCod, itemPesquisa)
            imprimirResPesquisa(ver, vetorCod, vetorPreco, itemPesquisa)


        elif op == 3:
            print("\n\nAUMENTAR O PREÇO\n\n")
            if len(vetorCod) == 0:
                print("Não a nada no vetor para poder aumentar")
            else:
                aumentarPreco(vetorPreco,vetorCod)
            


        elif op == 4:
            print("\n\nMAIOR\n\n")
            if len(vetorCod) == 0:
                print("Não a nada no vetor para exisitir um maior")
            else:
                maiorPreco(vetorPreco,vetorCod)



        elif op == 5:
            print("\n\nEXCLUIR\n\n")
            if len(vetorCod) == 0:
                print("Não a nada no vetor para poder excluir")
            else:
                excliur(vetorCod,vetorPreco)


        elif op == 6:
            print("\n\nLISTAR\n\n")
            if len(vetorCod) == 0:
                print("Não a nada no vetor para poder listar")
            else:
                listar(vetorCod,vetorPreco)


        else:
            print("Opção inválida!")

        input("Pressione <enter> para continuar ...")
main()
