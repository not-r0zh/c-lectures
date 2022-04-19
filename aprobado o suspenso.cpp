/* contador */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	float nota;
	printf("INTRODUCE UNA NOTA\n");
	scanf("%f",&nota);
	while(nota<=10 && nota>=0){
		if(nota>=5){
			printf("APROBADO\n");
		}
		else{
			printf("SUSPENSO\n");
		}
		printf("INTRODUCE OTRA NOTA\n");
		scanf("%f",&nota);
	}
	printf("HAS INTRODUCIDO UNA NOTA NO VÁLIDA\n");
	system("pause");
}
