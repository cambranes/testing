#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int rango;
	char numero[1];
	printf("Escriba su numero: ");
	scanf ("%s", numero);
	/*-------------------------*/
	rango = strlen(numero); 
	printf ("Su numero tiene rango %d ", rango);
	
	return 0;
}
