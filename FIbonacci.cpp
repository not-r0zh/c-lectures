/* Hacer un programa en C++ que calcule la serie de Fibonacci. Debe pedir el número de elementos. La serie de Fibonacci es la sucesión de números:




0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...



Cada número se calcula sumando los dos anteriores a él.


Pista, debeis declarar las siguientes variables con estos valores iniciales:

int n, x = 0, y = 1, z = 1;

Teneis 1 captura del resultado. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int n, x = 0, y = 1, z = 1;
	printf("¿CUANTOS NUMEROS DE LA SERIE DE FIBONACCI QUIERES?\n");
	scanf("%d",&n);
	printf("0 1 ");
	for(int i = 1; i < n;i++){
		z = x + y;
		printf("%d ",z);
		x = y;
		y = z;
	}
	system("pause");
}
