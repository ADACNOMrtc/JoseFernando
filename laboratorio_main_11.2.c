#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int func(int x,int y,int p){
	p=x*y;
	return  p     ;
}

int main(int argc, char *argv[]) {
	int arr[3][3];
	int i,y,z,p,x,d,res;
	
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
		res=func(arr[i][y],x,p);
		arr[i][y]=res;
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
