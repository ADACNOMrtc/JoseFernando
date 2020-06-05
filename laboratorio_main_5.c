#include <stdio.h>
#include <stdlib.h>


int main() {
		float x,sum=0,n=0;
	float prom;
	
		printf("\nIngrese un numero >=0 para seguir la operacion");
		scanf("%f",&x);
			if(x>=0){
		sum=sum+x;
		n++;
		}
     	while(x>=0){
		   			printf("\nIngrese un numero >=0 para seguir la operacion");
		scanf("%f",&x);
		if(x>=0){
		sum=sum+x;
		n++;
		}

}
prom=(sum/n);
	printf("\nLa mediana es %f",prom);
	
	return 0;
}
