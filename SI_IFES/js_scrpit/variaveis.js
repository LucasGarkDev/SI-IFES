/* No JavaScript temos 3 palavras-chaves para declarar variaveis:
-> var (pode ser re-declarada)
-> let (nao pode ser re-declarada, porem ela nao mudara apenas dentro do seu escopo)
-> const (nao muda em nenhuma circunstancia)
*/

/*var pote = "Bombom";
var adicionar = " mais um Bombom";
var Bombom_total = pote + adicionar;
alert(Bombom_total);*/

//DECLARAÇAO DAS VARIAVEIS
//var a,b,c;

//ATRIBUIÇAO DOS VALORES
//a = 10011;
//b = 110001;
//c = a + b;

//alert(c);

//var a = 1011;
//alert(a);
/*
var nome, sobrenome, nome_completo;
nome = "Gabriel";
sobrenome = "Macaco da Silva"
nome_completo = nome + " " + sobrenome;

document.getElementById("texto").innerHTML = nome_completo;
*/
/*
var x = 10; //aqui o valor e 10

{
    var x = 5; //aqui o valor e 5
}

//aqui o valor tambem e 5
document.getElementById("texto").innerHTML = x;
*/
//Porem caso o let seja usada
let x = 10;

{
    let x = 2;
}
document.getElementById("texto").innerHTML = x;

