#include <stdio.h>
/*
Autor: Carlos Chan Gongora 30/Enero/19
Entradas: 9, 10, 1, 0
Salidas: 7, 8, 1, 0
Procedimiento general:
- Divide el numero entre 2 y si el modulo es cero le suma a la variable resultado el numero por el cual fue dividido
  si no es divisible entre 2 aumenta el divisor en 1 y repite el proceso hasta que el numero sea menor a 1 y luego le suma 1 al resultado.
*/

int main(int argc, char *argv[]) {
	int numero = 0;
	int numeroDividido = 0;
	int resultado = 0;
	int divisor = 2;
	/*Entradas*/
	do{
		printf("\nIngresa un numero natural: ");
		scanf("%d", &numero); 	
	}while(numero < 0);
	numeroDividido = numero;
	
	/*Procedimiento*/
	if(numero == 0){
		resultado = 0;
	}
	else if(numero == 1){
		resultado = 1;
	}
	else{
		while(numeroDividido > 1){
			if(numeroDividido%divisor == 0){
				numeroDividido = numeroDividido / divisor;
				resultado += divisor;
				divisor = 2;
			}
			else{
				divisor++;	
			}
		}
		resultado += 1;
	}

	/*Salidas*/
	printf("La suma de los factores de %d es: %d", numero, resultado);
	
	getchar();
	return 0;
}