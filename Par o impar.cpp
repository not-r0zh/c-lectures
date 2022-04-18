/* PROGRAMA PARA QUE NO DIGA SI UN NUMERO ES PAR O IMPAR CON WHILE MIENTRAS SE INTRODUZCA CERO*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <string>


main()
{
	setlocale(LC_ALL,"spanish");
	int num = 0;
	printf("INDTRODUCE UN NUMERO ENTERO\n");
	scanf("%d",&num);
	while(num!=0){
		if(num%2==0){
			printf("es par\n",num);
		}
		else{
			printf("es impar\n",num);
		}
		printf("INDTRODUCE OTRO NUMERO ENTERO\n");
		scanf("%d",&num);
	}
	printf("0 no vale pringao XD\n");
	system("pause");
}
