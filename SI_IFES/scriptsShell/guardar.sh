#!/bin/bash
echo "Seu nome de usuario e:"
whoami
echo "Info de hora atual e tempo que o computador esta ligado:"
uptime
echo "O script esta executando do diretorio:"
pwd

#!/bin/bash
site=www.ifes.edu.br
meu_numero_favorito=13
_cidade="Baixo Guandu"
echo "Um ótimo site para voce aprender a programar e: $site"
echo "Meu numero favorito e: $meu_numero_favorito"
echo "Minha cidade natal é: $_cidade"
#!/bin/bash
echo "Qual o nome de uma de suas musicas favoritas:"
read nome_musica;
echo "Você gosta de ouvir $nome_musica"

#!/bin/bash
site=www.ifes.edu.br
meu_numero_favorito=13
_cidade="Baixo Guandu"
echo "Um ótimo site para voce aprender a programar e: $site"
echo "Meu numero favorito e: $meu_numero_favorito"
echo "Minha cidade natal é: $_cidade"
#!/bin/bash
echo "Qual o nome de uma de suas musicas favoritas:"
read nome_musica;
echo "Você gosta de ouvir $nome_musica"

#!/bin/bash
echo "Digite um numero qualquer: "
read numero;
if [ "$numero" -gt 20 ]
then
  echo "Este numero e maior que 20!"
fi
#!/bin/bash
echo "Digite um numero qualquer:"
read numero;
if [ "$numero" -ge 0 ]
 then
  echo "O numero $numero e positivo!"
else
 echo "O numero $numero e negativo!"
fi
#!/bin/bash
echo "Digite um numero qualquer:"
read numero;
if [ "$numero" -ge 0 ]
 then
  echo "O numero $numero e positivo!"
else
 echo "O numero $numero e negativo!"
fi
#!/bin/bash
echo "Selecione uma opção:"
echo "1 - Exibir data e hora do sistema"
echo "2 - Exibir o resultado da divisao 10/2"
echo "3 - Exibir uma mensagem"
read opcao;
if [ $opcao == "1" ]
then 
 data=$(date + "%T, %d/%m/%y, %A")
 echo "$data"
elif [ $opcao == "2" ] 
then
  result=$((10/2))
  echo "divisao de 10/2 = $result"
elif [ $opcao == "3" ] 
then 
 echo "Informe o seu nome:"
 read nome;
 echo "Bem-vindo ao mundo do shell script, $nome!"
fi
#!/bin/bash
  echo "Selecione uma opção:"
  echo "1 - Exibir data e hora do sistema"
  echo "2 - Exibir o resultado da divisão 10/2"
  echo "3 - Exibir uma mensagem"
 read opcao;
  case $opcao in "1")
      data=$(date +"%T, %d/%m/%y, %A")
      echo "$data"
      ;;
   "2")
     result=$((10/2))
     echo "divisao de 10/2 = $result"
   ;;
   "3")
    echo "Informe o seu nome:"
    read nome;
    echo "Bem-vindo ao mundo do shell script, $nome!"
  ;;
esac
#!/bin/bash
 echo "Testando o loop for"
 for i in {10..0};
 do
   echo “$i”
 done
#!/bin/bash
 echo "Testando o comando seq"
 for i in $(seq 1 5 100);
 do
  echo "$i"
done
#!/bin/bash
 echo "Testando o loop for"
 for i in {10..0};
 do
   echo $i 
   ping www.ufes.br
 done
#!/bin/bash
  echo "Informe o que você quiser, -1 para sair"
  read dado;
  while [ $dado != "-1" ];
  do
    echo "Você digitou $dado"
  read dado;
done
#!/bin/bash
echo "Informe até que valor positivo e maior que zero contar:"
read valor;
i=1
while [ $i -le $valor ];
 do
  echo $i
  ((i=$i+1))
done
