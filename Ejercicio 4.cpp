/* Programa que muestre los múltiplos de siete (hasta 150). FOR */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	for(int i=7;i<=150;i = i+7){
		printf("%d\n",i);
	}
	system("pause");
}
