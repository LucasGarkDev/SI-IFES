#!/bin/bash
clear

if [[ $# == 0 ]]; then
  echo "Informe os termos separados por espaço:"
  read text
else
  text="$*"
fi

echo "$text"
echo "$text" | tr -d " "

