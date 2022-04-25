/* La empresa que fabrica un modelo de máquinas expendedoras de refrescos necesita un programa para estas máquinas que realice
el cálculo de cuántas monedas de cada tipo debe devolver. Para ello, en primer lugar, se introducirá por teclado la cantidad a
devolver en euros (múltiplo de 5 céntimos, que es la moneda más pequeña de la que se dispone), es decir, se tecleará 1.85 para 1
euro con 85 céntimos. Este progra ma escribirá en pantalla cuántas monedas de cada tipo hay que devolver teniendo en cuenta
que:
• Se dispone de monedas de 50 céntimos, 20 céntimos, 10 céntimos y 5 céntimos.
• Siempre se dispone de las monedas necesarias de cada tipo.
• Se debe devolver el menor número de monedas posible, es decir, intentar devolver con las de mayor valor.
Ejemplos:
• Si se introduce la cantidad de 1 euro con 85 céntimos, el programa debe imprimir: 3 monedas de 50 cént imos, 1 moneda de 20 céntimos, 1 moneda de 10 céntimos, 1 moneda de 5 céntimos.

• Si se introduce la cantidad de 1 euro con 20 céntimos, el programa debe imprimir: 2 monedas de 50 céntimos, 1 moneda de 20 céntimos, 0 monedas de 10 c éntimos, 0 monedas de 5 céntimos.





Este problema consiste en determinar cuántas monedas de cada tipo se necesitan para formar la cantidad que debe devolver la máquina expendedora, teniendo en cuenta que se debe utilizar el menor número posible de monedas de cada tipo.
Esto supone que, hay un único dato de entrada (la cantidad a devolver), mientras que se tienen varios datos de salida (el número de monedas de cada tipo). Así:
• datos de entrada: cantidad a devolver
• datos de salida: cuántas monedas de 50 céntimos, cuántas de 20 céntimos,
cuántas de 10 céntimos y cuántas de 5 céntimos se necesitan
• proceso: determinar cuántas monedas de cada tipo hacen falta para formar
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
