/* Programa que calcula el precio de un objeto sin el impuesto de valor
añadido (IVA). Se pide el precio y se le descuenta el 21% */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	float precio;
	printf("Introduce el precio con iva\n");
	scanf("%f",&precio);
	printf("El precio del objeto sin IVA es %f\n",precio/1.21);
	system("pause");
}
