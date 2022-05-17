/* Ejercicio 2 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num;
	printf("Introduzca un numero entero\n");
	scanf("%d",&num);
	printf("La tabla del %d es:\n",num);
	for(int i=0;i<=10;i++){
		printf("%d x %d = %d\n",num,i,num*i);
	}
	system("pause");
}
