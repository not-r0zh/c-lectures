/* Ejercicio 1 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num1,num2;
	printf("Introduce el primer numero\n");
	scanf("%d",&num1);
	printf("Introduce el segundo numero\n");
	scanf("%d",&num2);
	printf("\n");
	if(num1>num2){
		for(num1;num1>=num2;num1--){
			printf("%d\n",num1);
		}
	}
	else if(num1<num2){
		for(num2;num1<=num2;num2--){
			printf("%d\n",num2);
		}
	}
	else{
		printf("Los numeros son iguales");
	}
	system("pause");
}
