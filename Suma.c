/*
Autor:Jose Eduardo Mendez Verdejo 02/Febrero/19
Entradas: numeros
Salidas: suma de numeros
Procedimiento general: Calcular la suma de numeros primos un numero dado
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int numero;
	
	//Se solicita un numero
	printf("Ingresa un numero al azar entero");
	scanf("%i",&numero);
	
  /*Procedimiento*/
	int div = 2;
	
	//inicializa el sumador
	int sumadorprimos = 0;
	
	if (numero == 1)
	{
		sumadorprimos = 1;
	}
	else
	{
		//cuando el numero es mayor a 1
		while (numero != 1)
		{
			if (numero % div == 0)
			{
				//obteniendo un numero primo
				numero = numero/div;
				sumadorprimos = sumadorprimos + div;
				div = numero - 1;
			}
			else 
			{
				div = div + 1;
			}
		}
	}
	
  /*Salidas*/
	printf("la suma de los numeros primos es: %i",sumadorprimos+1);
}
