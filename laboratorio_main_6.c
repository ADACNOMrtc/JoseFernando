#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,sum=0,n=0;
	
	do{
		printf("\nIngrese un numero >=0 para seguir la operacion");
		scanf("%d",&x);
        		
		if(x>=0){
		sum=sum+x;
		n++;
		}
	}while(x>=0);

	printf("\nLa mediana es %d",sum/n);
	return 0;
}
