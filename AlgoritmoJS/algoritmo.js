//Para un número entero, calcular suma de los factores primos

let number = prompt();  //Preguntamos la información al usuario
let factors = []; //Creamos Array para almacenar los factores
let sumOfFactors; //Creamos variable para almacenar la suma de factores

//Usamos bucle for para iterar através de los posibles factores del número
for (let divisible = 2; divisible <= number; divisible++) {
  //Si es factor, lo añadimos al arreglo de factores
  if((number % divisible) === 0) {
    factors.push(divisible);
    number = number/divisible;
  }
}

/*Comprobamos tamaño de arreglo de factores, si el tamaño es 0, 
significa que el número en cuestión es 0, sino, le añadimos el factor 1*/
if(factors.length >= 1){
  factors.push(1);  
}else {
  factors.push(0);
}

//Hacemos la suma de factores
sumOfFactors = factors.reduce(function(a,b) {
  return a + b;
});

//Imprimimos en la página
document.write(factors);
document.write(" sum: " + sumOfFactors);





