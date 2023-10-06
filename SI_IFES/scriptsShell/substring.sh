#!/bin/bash
clear;
if [ $# == 2 ] 
then
 sub=$1;
 string=$2;
else
 echo “Informe um trecho da palavra:”;
 read sub;
 echo “Informe a palavra:”;
 read string;
 echo $string | grep $sub >> /dev/null;
 result=$?;
if [ $result == 0 ] 
then
 echo –e “$sub está em #string\n”;
fi;
