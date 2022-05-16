/* Indicar qué numero de dos introducidos por el usuario es mayor o si son iguales. IF */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num1,num2;
	printf("Introduce el primer numero\n");
	scanf("%d",&num1);
	printf("Introduce el segundo numero\n");
	scanf("%d",&num2);
	if(num1>num2){
		printf("El primero número(%d), es mayor que el segundo(%d)\n",num1,num2);
	}
	else if(num1==num2){
		printf("El primero número(%d), es igual que el segundo(%d)\n",num1,num2);
	}
	else{
		printf("El segundo número(%d), es mayor que el primero(%d)\n",num2,num1);
	}
	system("pause");
}
