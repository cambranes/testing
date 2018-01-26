#include <stdio.h>
#include "conio.h"

int main(int argc, char *argv[]) {
	int control = 10;
	int contador = 1;
	int numero;
	printf("Escriba su numero: ");
	scanf("%d",&numero);
	/*-------------------------*/
	
	while( control <= numero){
		 contador = contador +1;
		 control = control *10;
	}
	
	printf("La cantidad de cifras del numero es: %d",contador);
	
	return 0;
}
