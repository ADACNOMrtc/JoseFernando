#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 	
 struct rtv{
	
	 char  nombrecompleto[20];
     int estudianteid[20];
 
     char cumple[20];
     int grado[20];
     char genero[20];
     char carrera[20];
     char school[20];
}est[50];

int	  main(){
	char primernombre[20],segundonombre[20];
int i,j=0,h=0,k;
	do{

	printf("\nMatricula:");
	fflush(stdin);
	gets(est[j].estudianteid);

	

	
do{

	fflush(stdin);
	printf("\nPrimer nombre:");
	gets(primernombre);

	fflush(stdin);
	printf("\nSegundo nombre:");
	gets(segundonombre);
		strcat(primernombre," ");
		strcat(primernombre,segundonombre);
	h=0;
	for(i=0;i<j;i++){
		
	if(strcmp(primernombre,est[i].nombrecompleto)==0){
		h=1;
	}else{
		h=0;
	}
		}
		if(h==1){
			printf("Nombre repetido,Introduzca otro nombre");
			system("pause");
		}
}while(h==1);

strcpy(est[j].nombrecompleto,primernombre);
		fflush(stdin);
	printf("\nDia de nacimiento: ");
	gets(est[j].cumple);
	
	

		fflush(stdin);
	printf("\nEscuela: ");
	gets(est[j].school);
	
	

		fflush(stdin);
	printf("\nCarrera: ");
	gets(est[j].carrera);
		
	

		fflush(stdin);
	printf("\nGrado: ");
gets(est[j].grado);

	


	fflush(stdin);
	printf("\nGenero: ");
		gets(est[j].genero);
		
	


	printf("Para ingresar mas estudiantes ingrese un numero diferente de 2: ");
	scanf("%d",&k);
j++;
system("cls");
}while(k!=2);
 
	for(i=0;i<j;i++){
		printf("\n");
printf("\nEstudiante %d \nMatricula%d\nNombre completo %s\nFecha de nacimiento %s\nEscuela %s\nCarrera %s\nGrado %d\nGenero %s",i,est[i].estudianteid,est[i].nombrecompleto,est[i].cumple,est[i].school,est[i].carrera,est[i].grado,est[i].genero);
		}
		




return (0);	
}
