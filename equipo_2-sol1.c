/*
Autor:ChaosWizard 26/Enero/17
Entradas:1
Salidas:1
Procedimiento general: determina el numero de digitos de una cifra dada, por medio de una libreria externa.
*/
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
	/*se declaran las variables*/
	int rango;
	char numero[1];
	/*se imprime un mensaje de instruccion*/
	printf("Escriba su numero: ");
	/*se captura el numero a trabajar*/
	scanf ("%s", numero);
	/*se obtiene el rango, por medio de una funcion de la libreria*/
	rango = strlen(numero);
	/*se imprime la cantidad de digitos del número*/
	printf ("Su numero tiene rango %d ", rango);
	
	return 0;
}
