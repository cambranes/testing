/*Autor:ChaosWizard 26/Enero/17
	Entradas:1
	Salidas:1
	Procedimiento general: determina el numero de digitos de una cifra dada, por medio de una libreria externa.
*/
#include <stdio.h>
#include "conio.h"

int main(int argc, char *argv[]) {
	/*se declaran las variables*/
	int control = 10;
	int contador = 1;
	int numero;
	/*se imprimen las instrucciones*/
	printf("Escriba su numero: ");
	/*se captura el numero a trabajar*/
	scanf("%d",&numero);
	/*se divide el numero entre 10, hasta que la division de como resultado 0. se cuentan las veces que se dividio el numero dado*/
	while( control <= numero){
		 contador = contador +1;
		 control = control *10;
	}
	/*se imprimen las veces que se dividio el número para determinar los digitos*/
	printf("La cantidad de cifras del numero es: %d",contador);
	
	return 0;
}
