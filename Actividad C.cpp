/* contador */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{
	setlocale(LC_ALL,"spanish");
	while(1==1){
		int num1,num2,suma=0;
		printf("DAME NUMERO\n");
		scanf("%d",&num1);
		printf("DAME NUMERO\n");
		scanf("%d",&num2);
		if(num1<num2){
			for(num1;num1<=num2;num1++){
				if(num1%2==0){
					printf("%d\n",num1);
					suma+=num1;
				}
			}
			printf("LA SUMA DE ESTOS ES: %d\n",suma);
			break;
		}
		else{
			printf("El segundo numero es mayor que el primero puto tonto, vuele a intentartlo\n");
		}
	}	
	system("pause");
}
