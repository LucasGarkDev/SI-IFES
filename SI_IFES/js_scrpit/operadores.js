/* os operadores no js sao usados para atribuir valores, comparar, executar operaçoes matematicas e etc...
Sao divididos em 6 categorias:
1)Operadores artimeticos (matematicos)
2)Operadores de atribuiçao
3)Operadores de sequencia
4)Operadores de comparaçao
5)Operador condicional (Ternario)
6)Operadores logicos

*/

//var valor1, valor2, valor3;
//valor1 = 5;
//valor2 = 2;
//valor3 = 8;

//total = valor1 + valor2
//total = total + valor3
//total = ++valor1
//total = --total

//alert('O total ficou' , total);

//valor1 += valor2;
//valor1 = valor1 + valor2;

//valor1 = 'Gabriel ';
//valor2 = 'Macaco';
//total = valor1 + valor2;

//valor1 = 5;
//valor2 = 3;
//valor3 = '5';

//total = (valor1 == valor2); //true or false
//total2 = (valor1 == valor3);
//total3 = (valor1 === valor3);
//total4 = (valor1 != valor2);
//total5 = (valor1 >= valor2);

var idade, eleitor, resultado, confir;
idade = 63;
eleitor = (idade <= 16) ? ' Nao tem idade':' Esse pode ser eleitor';

resultado = (idade > 60 && idade < 70);//true //false
confir = (idade === 63 || idade === 72);
//alert('O individuo que voce me falou a idade e' + eleitor);

alert('o cadastro 1 esta validade em :' + resultado);
alert('o cadastro 2 foi confirmado em: ' + confir);

