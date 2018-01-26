/*
Autor: Elena Soledad Medina Favela 25/Enero/18
Entradas: 
numero(Numero del cual se van a contar sus digitos)
Salidas: 
numeroDigitos(Variable que almacena el número de digitos)
Procedimiento general: Se pide un numero y luego se va dividiendo un numero
entre 10 hasta que ya no se pueda dividir mas y se van contando las veces que
se divide.*/
	
#include <stdio.h>
#include <math.h>

int main(void) {
	/*Entradas*/
	int numero = 0;
	int numeroDigitos = 0;
	int i=0;
	int j=0;
	
	printf("\nIngrese un numero entero positivo:\n");
	scanf("%d",&numero);
	
	/*Procedimiento*/
	for (i=0; i<5; i++){
		j=i+1;
		if (numero >= pow(10,i) && numero <= ((pow(10,j))-1)){
			numeroDigitos = i+1;
		}  
	}
		/*Salidas*/
		printf("El numero antes ingresado tiene ");
		printf("%d", numeroDigitos);
		printf(" digitos");
	return 0;
}

/*QAEntrada 		Salida			Resultado0				0				112345			5				543				2				22				1				1*/
