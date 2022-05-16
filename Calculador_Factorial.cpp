/* 1. Realizar un programa en C que pida un número y calcule su factorial. Por ejemplo, calcula el factorial de 4:el factorial de un número es equivalente a la
multiplicación de todos los números enteros positivos menores o iguales
que él. Por lo tanto, para calcular el factorial de 4 tenemos que
multiplicar los números 1, 2, 3 y 4 .De modo que el factorial de 4 da como resultado 24.

4!=1*2*3*4=24

*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num, resultado = 1;
	printf("METE NUMERO Y TE DOY SU FACTORIAL\n");
	scanf("%d",&num);
	int cont_num = num;
	for(cont_num;cont_num>0;cont_num--){
		resultado = resultado*cont_num;
	}
	printf("EL FACTORIAL DE %d ES %d \n",num,resultado);
	system("pause");
}
