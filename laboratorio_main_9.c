#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
 
int	  main(){
	int i,j=0,l=0,m=0,c=0,h,k,n=0;
	  char arr[20][7][200];
	  char nombrecompleto[20];
	char estudianteid[20],primernombre[20],segundonombre[20],cumple[20],grado[20],genero[20],carrera[20],school[20];
	
	
	do{
	
	printf("\nMatricula:");

	gets(estudianteid);
	for(i=0;i<=strlen(estudianteid)-1;i++){
		arr[i][0][c]=estudianteid[i];

}

do{
	fflush(stdin);
	printf("\nPrimer nombre:");
	gets(primernombre);

	fflush(stdin);
	printf("\nSegundo nombre:");
	gets(segundonombre);
		strcat(primernombre," ");
		strcat(primernombre,segundonombre);
	
		strcpy(nombrecompleto,primernombre);
			
	h=0;

 if(c>=1){
 for(i=1;i<=c;i++){
	
	
	for(j=0;j<=20;j++){
    
    if(nombrecompleto[j]==arr[j][1][i]){
    	h=1;
	}
		if(arr[j][2][i]==NULL){
			break;
		}
	}
	if(h==1){
		printf("\nNombre repertido intente otro: ");
		 system("pause");
		break;
	}
	
} 
}
	

}while(h==1);


	for(i=0;i<=strlen(nombrecompleto)-1;i++){
		arr[i][1][c]=nombrecompleto[i];		
}	
		fflush(stdin);
	printf("\nDia de nacimiento: ");
	gets(cumple);
	
	for(i=0;i<=strlen(cumple)-1;i++){
		arr[i][2][c]=cumple[i];
		
}

		fflush(stdin);
	printf("\nEscuela: ");
	gets(school);
		
	for(i=0;i<=strlen(school)-1;i++){
		arr[i][3][c]=school[i];
		
}

		fflush(stdin);
	printf("\nCarrera: ");
	gets(carrera);
		
	for(i=0;i<=strlen(carrera)-1;i++){
		arr[i][4][c]=carrera[i];
		
}
	
		fflush(stdin);
	printf("\nGrado: ");
gets(grado);

	

	for(i=0;i<=strlen(grado)-1;i++){
		arr[i][5][c]=grado[i];
		
}
	fflush(stdin);
	printf("\nGenero: ");
		gets(genero);
		
	for(i=0;i<=strlen(genero)-1;i++){
		arr[i][6][c]=genero[i];
	fflush(stdin);
}


	printf("Para ingresar mas estudiantes ingrese un numero diferente de 2: ");
	scanf("%d",&k);
if(k!=2){
	c++;
}
}while(k!=2);

	for(i=0;i<=c;i++){
		printf("\n\nAlumno\t %d ",i+1);
		for(n=0;n<=6;n++){
		printf("\n");
	for(j=0;j<=20;j++){
		
		printf("%c",arr[j][n][i]);
		if(arr[j][n][i]==NULL){
			break;
		}

}

}

}
	
 	return 0;
 }
