/*Programa que calcule la suma de los números pares e impares entre 1 y 50. FOR e IF*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	int suma;
	setlocale(LC_ALL,"spanish");
	for(int i=0;i<=50;i++){
		if(i%2==0){
			suma = suma + i;
		}
	}
	printf("%d",suma);
	system("pause");
}
