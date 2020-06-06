#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 	/*Este programa esta incompleto, le faltan funciones,
 	validacion en los datos de entrada, como no se bien usar archivos aun
 	lo mejor que se me ocurrio fui leer todo el archivo de entrada para poder buscar la posicion
,ni si quiera esta en json(ni si quiera se bien si es un tipo de archivo, o una manera de guardar informacion 
en el archivo), Le resumo el programa, lee archivo , guarda informacion de alumnos, muestra en pantalla la informacion de 
todos los alumnos que hay, si quiere puede pedir un nombre para buscarlo y que te den su informacion.
	 */
 struct rtv{
	
	 char  nombrecompleto[20];
     int estudianteid;
     char cumple[20];
     char grado[20];
     char genero[20];
     char carrera[20];
     char school[20];
}est[50];

int	  main(){
int i,j=0,h=0,z,k,x;
char nom[20];
	FILE *ptr;
		char *cliente="Registro_de_alumnos.dat";
ptr=fopen(cliente,"a+");

do{
fread(&est[j],sizeof(est[j]),1,ptr);
if(est[j].estudianteid==NULL){
		break;
	}
j++;
z=j;
}while(!feof(ptr));

do{
	int cont=0;
printf("\n\nDesea buscar a alguien ingrese 1: ");
scanf("%d",&x);
if(x==1){
	fflush(stdin);

printf("\nEscriba nombre a buscar");
gets(nom);



for(i=0;i<=j;i++){
	if(strcmp(nom,est[i].nombrecompleto)==0){
		printf(" \nMatricula%d\nNombre completo %s\nFecha de nacimiento %s\nEscuela %s\nCarrera %s\nGrado %s\nGenero %s",est[i].estudianteid,est[i].nombrecompleto,est[i].cumple,est[i].school,est[i].carrera,est[i].grado,est[i].genero);

	}
	else{
		cont=1;
	}
}
if(cont==1){
	printf("No existe");
}
printf("\nSi desea buscar mas a otro ingrese un numero diferente de 2\n");
scanf("%d",&k);
}
else{
	break;
}
if(k!=2){
	system("cls");
}
}while(k!=2);
	
	system("cls");
	do{
	printf("\nMatricula:");
	fflush(stdin);
	scanf("%d",&est[j].estudianteid);
	fflush(stdin);
	printf("\nPrimer nombre:");
	gets(est[j].nombrecompleto);
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
if(k!=2){
j++;}
system("cls");
}while(k!=2);
 
	for(i=0;i<=j;i++){
		printf("\n");
printf("\nEstudiante %d \nMatricula%d\nNombre completo %s\nFecha de nacimiento %s\nEscuela %s\nCarrera %s\nGrado %s\nGenero %s",i+1,est[i].estudianteid,est[i].nombrecompleto,est[i].cumple,est[i].school,est[i].carrera,est[i].grado,est[i].genero);
		}
		
for(i=z;i<=j;i++){
fflush(stdin);

fwrite(&est[i],sizeof(est[i]),1,ptr);
fflush(stdin);

}


return (0);	
}
