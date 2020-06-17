#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

 struct rtv{
	int idUsuario;
	 char SUsuario[5];
	 int SPasswordd;
	 char sNombre[30];
	 int nEstatus;
	 int nTipo;
}usuario[10];

int main(){
			int	verificador=0;

	int i,j,h=0,z,k,x,com;
char nom[20];
int men=0;
	FILE *ptr;
		char *cliente="USUARIO.dat";
ptr=fopen(cliente,"a+");
	j=0;
	do{
	
	fread(&usuario[j],sizeof(usuario[j]),1,ptr);

	if(usuario[j].idUsuario==0){
		break;
	}


j++;
z=j;
}while(!feof(ptr));
	fclose(ptr);

	
	do{
	system("cls");
		printf("\n\t\tMenu\n\n1.Agregar\n2.Baja\n3.Alta\n4.Consulta\n5.Salir\n");
scanf("%d",&men);
		switch(men){
	case 1:
		ptr=fopen(cliente,"a+");
do{

		
		do{
		verificador=0;
			usuario[j].idUsuario=j+1;
		
			fflush(stdin);

		printf("\nIngrese Nombre del usuario");
gets(usuario[j].SUsuario);
			

for(i=0;i<j;i++){
	if(strcmp(usuario[j].SUsuario,usuario[i].SUsuario)==0){
		verificador=1;
		printf("\nNombre de Usuario existente, pruebe otro\n");
		system("pause");
		break;
	}
}
if((strlen(usuario[j].SUsuario))<6||strlen(usuario[j].SUsuario)>6){
	printf("\nUsuario invalido, 6 caracteres\n");
	system("pause");
}
}while(verificador==1||strlen(usuario[j].SUsuario)<6||strlen(usuario[j].SUsuario)>6);

do{
verificador=0;
	printf("\nIngrese Contrase%ca de 8 digitos: ",164);
scanf("%d",&usuario[j].SPasswordd);
if((usuario[j].SPasswordd/1000000)<1||(usuario[j].SPasswordd/10000000)>10){
	verificador=1;
	printf("\nContrase%ca invalida intente otra enter para continuar\n",164);
system("pause");
}

}while(verificador==1);

fflush(stdin);

	printf("\nIngrese Nombre del Usuario: ");
gets(usuario[j].sNombre);

fflush(stdin);
	
	usuario[j].nEstatus=1;
	do{
	fflush(stdin);
verificador=0;
		printf("\nIngrese 1.-Si es Administrador y 2.-Si es Cajero:\t ");
scanf("%d",&usuario[j].nTipo);
if(usuario[j].nTipo!=1&&usuario[j].nTipo!=2){
	printf("\nNumero no aceptado.\tEnter para continuar.\n");
	verificador=1;
}
fflush(stdin);
}while(verificador==1);


printf("\nSi desea agregar mas ingrese 2");
scanf("%d",&x);
if(x==2){
	j++;
	
}
}while(x==2);
for(i=z;i<=j;i++){

fwrite(&usuario[i],sizeof(usuario[i]),1,ptr);
		printf("\n%i  \n%s  \n%s \n%d\n%d\n%d",usuario[i].idUsuario,usuario[i].SUsuario,usuario[i].sNombre,usuario[i].SPasswordd,usuario[i].nTipo,usuario[i].nEstatus);

}
fclose(ptr);

system("cls");
printf("Guardado\n");
system("pause");
system("cls");
		break;
	case 2:
	do{
	verificador=0;
		system("cls");
printf("\nIngrese id de usuario");
scanf("%d",&com);
if(com>j){
	printf("No existe usuario");
	
}else{

if(usuario[com-1].nEstatus==NULL){

printf("\nEste usuario ya se encuentra inactivo");
		
	}
if(usuario[com-1].nEstatus==1){

usuario[com-1].nEstatus=0;
				ptr=fopen(cliente,"w+");
for(i=0;i<=j;i++){

fwrite(&usuario[i],sizeof(usuario[i]),1,ptr);
}

}
fclose(ptr);

}
	printf("\nSi desea dar de baja a mas ingrese 2");
scanf("%d",&x);

}while(x==2);


		break;

	case 3:
	do{
	verificador=0;
		system("cls");
printf("\nIngrese id de usuario");
scanf("%d",&com);
if(com>j){
	printf("No existe usuario");
	
}else{

if(usuario[com-1].nEstatus==NULL){

printf("\nEste usuario ya se encuentra inactivo");
		
	}
if(usuario[com-1].nEstatus==0){

usuario[com-1].nEstatus=1;
				ptr=fopen(cliente,"w+");
for(i=0;i<=j;i++){

fwrite(&usuario[i],sizeof(usuario[i]),1,ptr);
}
}
fclose(ptr);

}
	printf("\nSi desea dar de alta a mas ingrese 2");
scanf("%d",&x);

}while(x==2);

		
		break;
		case 4 :
					system("cls");
char nom[20];
	fflush(stdin);
do{
	fflush(stdin);
printf("\nEscriba nombre a buscar");
gets(nom);



int cont=0;
for(i=0;i<=j;i++){
	if(strcmp(nom,usuario[i].sNombre)==0){
		printf("\n%i  \n%s  \n%s \n%d\n%d\n%d",usuario[i].idUsuario,usuario[i].SUsuario,usuario[i].sNombre,usuario[i].SPasswordd,usuario[i].nTipo,usuario[i].nEstatus);
cont=1;
	}
	
}
if(cont!=1){
	printf("No existe");
}
printf("\nSi desea buscar  a otro ingrese 2\n");
scanf("%d",&k);
}while(k==2);
		break;
		
		
}
		
		
		
		
	}while(men!=5);
	system("cls");
	printf("\n\n\t\t\tQue tenga un buen dia\n\n\n");
	
	return (0);
}
