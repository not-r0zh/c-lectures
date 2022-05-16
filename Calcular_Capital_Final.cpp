/* Calcular el capital final de un interés simple */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	float Capital_Inicial,Capital_Final,Interes,Tiempo;
	printf("¿Cual es el capital inical?\n");
	scanf("%f",&Capital_Inicial);
	printf("¿Cual es el interes?\n");
	scanf("%f",&Interes);
	printf("¿Cuanto tiempo?\n");
	scanf("%f",&Tiempo);
	Capital_Final=Capital_Inicial+Capital_Inicial*(Interes/100)*Tiempo;
	setlocale(LC_ALL,"spanish");
	printf("El capital final es %f\n",Capital_Final);
	system("pause");
}
