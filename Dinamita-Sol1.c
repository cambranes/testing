#include <stdio.h>

int main(int argc, char *argv[]) 
{	
	/*Autor: José de la Rosa Baeza Pérez
	
	Intoduccion: El programa va recibir un numero,
	ya teniendo esto se analizara con un ciclo for
	para luego determinar cuantos digitos tiene ese numeron
		Se definen las variables*/
	
	/* QA: César González
	Entrada:88 ;Salida:2 
	Entrada:-457 ;Salida:1 
	Entrada:0 ;Salida:1 
	Entrada:123456 ;Salida:0 
	Entraa:12345; Salida:5
	
	El programa funciona para todos los valores que tienen de 1 a 5 decimales 
	*/
		int l,numero,i,salida,n=1; /*variables*/
		
		/*Entrada*/
		printf("Ingrese el numero deseado \n");
		scanf("%i",&numero);
		
		/*Procedimiento: Aqui se van contando la canditidad de digitos que tinen el numero que se dio anteriormente*/
		for(i=1;i<=5;i++)
		{
			n=n*10;
			l=n-1;
			if(numero<=l)/*Esta condicion nos sirve ya que, cuando se cumpla guarda la candidad de digitos en la variable salida*/
			{
				salida=i;
				break;	
			}
		}
		/*Salida: En este momento se imprime la variable la cual indica la cantidad de digitos que tiene dicho numero*/
		printf("La cantidad de digitos que tiene este numero es %d",salida);
	
	return 0;
}

