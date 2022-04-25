/* La empresa que fabrica un modelo de m�quinas expendedoras de refrescos necesita un programa para estas m�quinas que realice
el c�lculo de cu�ntas monedas de cada tipo debe devolver. Para ello, en primer lugar, se introducir� por teclado la cantidad a
devolver en euros (m�ltiplo de 5 c�ntimos, que es la moneda m�s peque�a de la que se dispone), es decir, se teclear� 1.85 para 1
euro con 85 c�ntimos. Este progra ma escribir� en pantalla cu�ntas monedas de cada tipo hay que devolver teniendo en cuenta
que:
� Se dispone de monedas de 50 c�ntimos, 20 c�ntimos, 10 c�ntimos y 5 c�ntimos.
� Siempre se dispone de las monedas necesarias de cada tipo.
� Se debe devolver el menor n�mero de monedas posible, es decir, intentar devolver con las de mayor valor.
Ejemplos:
� Si se introduce la cantidad de 1 euro con 85 c�ntimos, el programa debe imprimir: 3 monedas de 50 c�nt imos, 1 moneda de 20 c�ntimos, 1 moneda de 10 c�ntimos, 1 moneda de 5 c�ntimos.

� Si se introduce la cantidad de 1 euro con 20 c�ntimos, el programa debe imprimir: 2 monedas de 50 c�ntimos, 1 moneda de 20 c�ntimos, 0 monedas de 10 c �ntimos, 0 monedas de 5 c�ntimos.





Este problema consiste en determinar cu�ntas monedas de cada tipo se necesitan para formar la cantidad que debe devolver la m�quina expendedora, teniendo en cuenta que se debe utilizar el menor n�mero posible de monedas de cada tipo.
Esto supone que, hay un �nico dato de entrada (la cantidad a devolver), mientras que se tienen varios datos de salida (el n�mero de monedas de cada tipo). As�:
� datos de entrada: cantidad a devolver
� datos de salida: cu�ntas monedas de 50 c�ntimos, cu�ntas de 20 c�ntimos,
cu�ntas de 10 c�ntimos y cu�ntas de 5 c�ntimos se necesitan
� proceso: determinar cu�ntas monedas de cada tipo hacen falta para formar
la cantidad a devolver. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	float devolver_total;
	printf("Introduce cuanto hay que devolver\n");
	scanf("%f",&devolver_total);
	int mon50 = 0, mon20 = 0, mon10 = 0, mon5 = 0;
	for(devolver_total;devolver_total%5==0;devolver_total-5){
		for(devolver_total;devolver_total%10==0;devolver_total-10){
			for(devolver_total;devolver_total%20==0;devolver_total-20){
				for(devolver_total;devolver_total%50==0;devolver_total-50){
					mon50 += 1;
				}
				mon20 += 1;
			}
			mon10 += 1;
		}
		mon5 += 1;
	}
	printf("Se necesitan %d monedas de 50 cent, %d monedas de 20 cent, %d monedas de 10 cent y %d monedas de 5 cent\n");
	
	system("pause");
}
