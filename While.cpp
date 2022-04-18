/* PROGRAMA PARA IMPRIMIR LOS PRIMEROS 10 NUMEROS CON WHILE */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int cont=1;
	while(cont<=10){
		printf("%d\n",cont);
		cont++;
	}
	system("pause");
}
