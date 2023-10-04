#!/bin/bash
echo "------------RESULTADO------------"
echo "Digite um numero qualquer: "
read numero1;
echo "Digite outro numero qualquer: "
read numero2;
if [ "$numero1" -gt "$numero2" ];
then
  echo "O numero $numero1 e maior que $numero2!"
 elif [ "$numero1" -lt "$numero2" ];
 then
  echo "O numero $numero1 e menor que $numero2!"
 elif [ "$numero1" -eq "$numero2" ];
 then
  echo "O numero $numero1 e igual a $numero2!"
fi
