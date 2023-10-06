#!/bin/bash
echo "Digite o valor que quer começar a zeragem: "
read valor;
i=0
while [ $valor -ge 0 ];
 do
  echo $valor
  ((valor=$valor-1))
done
