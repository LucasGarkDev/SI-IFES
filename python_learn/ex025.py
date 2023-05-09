nomedapessoa = str(input('Digite o nome completo de uma pessoa:')).strip()
print('O nome completo dessa pessoa e {}'.format(nomedapessoa.title()))
print('E o substantivo Silva no nome dessa pessoa e, de fato, na possiçao {}'.format(nomedapessoa.title().find('Silva')))
