/*
Autor: Zeus Sarmiento 25/Enero/18

Entradas:
Números con no más de 5 dígitos

Salidas:
La cantidad de dígitos del número entrada

Procedimiento general:
Se calcula la cantidad de dígitos de un número usando un ciclo con 
en el que se identifiquen en qué rango se encuentra el número y así, 
obtener su número de dígitos
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int valor, exponente=1, numeroDigitos, banderaNegativo=0, i=1;
	
	/*Entradas*/
	scanf("%d",&valor);
	
	/*Procedimiento*/
	if(valor<0){
		valor = valor * -1;    /*Si el valor es negativo, lo convertimos positivo para contar sus digitos*/
	}
	for(i=1 ; i<=5 ; i=i+1){
		exponente = exponente * 10;
		if(exponente >= valor){		/*Asignamos el valor de digitos cuando lleguemos a este punto*/
			numeroDigitos = i;
			break;
		}
	}
	
	/*Salidas*/
	printf("El numero tiene %d digito(s)",numeroDigitos);
	return 0;
}
/* QA
E      | S | R |
12     | 2 | 1 |
0      | 1 | 1 |
-65    | 2 | 1 |
6000000| 8 | 0 |
*/
