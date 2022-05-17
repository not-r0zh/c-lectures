/* Ejercicio 4 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"spanish");
	float temperatura;
	printf("Introduzca la temperatura\n");
	scanf("%f",&temperatura);
	if(temperatura<10 and temperatura>=0){
		printf("FRIO\n");
	}
	else if(temperatura>=10 and temperatura<20){
		printf("SUAVE\n");
	}
	else if(temperatura>=20 and temperatura<30){
		printf("CALIDO\n");
	}
	else if(temperatura>=30 and temperatura<=50){
		printf("CALOR\n");
	}
	else{
		printf("No se contemplan temperaturas fuera del rango[0,50]\n");
	}
	system("pause");
}
