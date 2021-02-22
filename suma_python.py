#Autor: Jorge Alberto Chí León 31/01/2019
#Entradas: numero.
#Salidas: suma de factores
#Procedimiento general:Dado N perteneciente a los naturales, calcular suma de los factores primos 9= 3*3*1 =7


#Entradas:
#preguntamos por el número
print( "Dame un número:" ) 

#se le asigna como entero al número
numero = int(input())

#se declara un divisor 
div = int(numero - 1)
suma = int(0)

#Proceso
if numero == 1 :
	print( "La suma es 0." )
else:
	if numero == 0 :
		print( "La suma es 0." ) 
	else:
		while div != 1:
			if numero % div == 0 :
				numero = int(numero / div)
				suma = int(suma + numero)
				div = int(numero - 1)
			else:
				div = int(div - 1)

#Salidas
		print( "La suma es",suma )
