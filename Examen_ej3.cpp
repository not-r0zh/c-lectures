/* Ejercicio 3 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"spanish");
	float sueldo,ext,irpf,sueldo_fin;
	printf("Introduzca sueldo\n");
	scanf("%f",&sueldo);
	printf("Introduzca el tanto por ciento de la extraordinaria\n");
	scanf("%f",&ext);
	printf("Introduzca el IRPF\n");
	scanf("%f",&irpf);
	sueldo_fin = sueldo + sueldo*ext/100 - (sueldo + sueldo*ext/100)*irpf/100;
	printf("El sueldo anual con %f %% de extraordinaria y %f %% de IRPF es %f\n",ext,irpf,sueldo_fin);
	system("pause");
}
