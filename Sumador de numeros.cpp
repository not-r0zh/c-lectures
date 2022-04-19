/* contador */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num,suma = 0;
	printf("TE VOY A SUMAR TODOS LOS NUMEROS QUE ME DES HASTA QUE ME DES UN NUMERO NEGATIVO ");
	printf("DAME NUMERO\n");
	scanf("%d",&num);
	while(num>=0){
		suma = num + suma;
		printf("DAME NUMERO\n");
		scanf("%d",&num);
	}
	printf("LA SUMA DE LOS NÚMERO INTRODUCIDOS ES %d\n",suma);
	system("pause");
}
		   
