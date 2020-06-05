#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[3][3];
	int i,y,z,p,x,d;
	
	for(i=0;i<3;i++){
		
		for(y=0;y<3;y++){
			printf("Ingrese valor ");
			scanf("%d",&d);
			arr[i][y]=d;
		}
	}
	printf("Ingrese numero entero a multiplicar la matriz");
	scanf("%d",&x);
	for(i=0;i<3;i++){
		
		for(y=0;y<3;y++){
			p=arr[i][y]*x;
		arr[i][y]=p;
		}
	}
		for(i=0;i<3;i++){
			printf("\n");
		for(y=0;y<3;y++){
		printf("%d\t",arr[i][y]);
		}

	}
	return 0;
}
