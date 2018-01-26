/*
Autor: Rodrigo Moguel Gamboa 25/Enero/18
Entradas: numero(Numero del cual se van a contar sus digitos)
Salidas: contador(Contador de los digitos)
Procedimiento general: Se pide un numero y luego se va dividiendo un numero
entre 10 hasta que ya no se pueda dividir mas y se van contando las veces que
se divide.
*/

#include <stdio.h>

int main() {
	/*Entradas*/
	int numero,contador;
	contador=0;
	/*Se pide el numero con el que se va a trabajar*/
	printf("Escriba el numero del cual quiere saber la cantidad de digitos: \n");
	scanf("%d",&numero);
	/*Procedimiento*/
	/*Se utiliza un while para ir dividiendo el número entre 10 e ir contando
	los digitos*/
	while(numero>0){
		numero=numero/10;
		contador++;
	}
	/*Salidas*/
	/*Se imprime el numero de digitos*/
	printf("Su numero tiene %u digitos",contador);
	return 0;
}

