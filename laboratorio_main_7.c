#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i,y,p;
	do{
		printf("Ingrese un numero entre 0 al 100 ");
		scanf("%d",&x);
	}while(x<=0||x>100);
	
	for(i=1;i<=x;i++){
		p=0;
		
		for(y=1;y<=i;y++){	
		if(i%y==0){
			p++;
		}
		}
	if(p<=2){
		printf("\n%d es un numero primo",i);
	}
	}
	return 0;
}
