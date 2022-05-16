/*Programa que escriba los números del 50 al 1 en pantalla. FOR*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	for(int i=50;i>=1;i--){
		printf("%d\n",i);
	}
	system("pause");
}
