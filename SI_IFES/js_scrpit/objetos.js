const carro = {
    marca:"ford",
    modelo: "ka",
    ano: 2015, 
    placa: "abhsfs",
    buzina: function(){
        alert("biiiiiiii")
    },
    mostraAno: function(){
        return "O ano e " + this.ano;
    }
};

console.log(carro.mostraAno());

//---------------------------------------
function realParaDolar(precoReal,covnDolar){
    precoDolar = precoReal * covnDolar
    return precoDolar
}
var precoReal, covnDolar;
precoReal = 19
covnDolar = 4.92

document.getElementById("texto").innerHTML = "O valor e:" + realParaDolar(precoReal,covnDolar)
