/* contador */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	int num1,num2;
	printf("Te presentare los n�meros que hay del segundo n�mero al primero.\n");
	printf("Inserte el primer n�mero\n");
	scanf("%d",&num1);
	printf("Inserte el segundo n�mero\n");
	scanf("%d",&num2);
	printf("\n");
	if(num2<num1){
		for(num2;num2<=num1;num2++){
			printf("%d\n",num2);
		}
	}
	else if(num2>num1){
		for(num2;num2>=num1;num2--){
			printf("%d\n",num2);
		}
	}
	system("pause");
}
