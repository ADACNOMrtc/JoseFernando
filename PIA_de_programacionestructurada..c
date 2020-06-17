#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct vntd{
	int idVenta;
	int idVentadetalle;
	 int idProducto;
int Cantidad;	 
	 float Precio;
	 		 // printf("\nId Venta%d\nIdvetnadetalle%d\nIdproducto%d\ncantidad%d\nprecio%f",Ventadetalle[i].idVenta,Ventadetalle[i].idVentadetalle,Ventadetalle[i].idProducto,Ventadetalle[i].Cantidad,Ventadetalle[i].Precio);

}Ventadetalle[998];

struct vnt{
	int idCliente;
	int idVenta;
	int nTipoventa;
     int FechaPedido[2];
	 int FechaEntrega[3];
	 float subtotal;
	 float Iva;
	 float Totalapagar;
	 int Estatus;
 //printf("\nId Cliente%d\nIdVenta%d\nnTipoventa%d\nFechaPedido%d\nFechaEntrega%d\nsubtotal%f\nIva%f\nTotalapagar%f\nEstatus%d",Venta[i].idCliente,Venta[i].idVenta,Venta[i].nTipoventa,Venta[i].FechaPedido,Venta[i].FechaEntrega,Venta[i].subtotal,Venta[i].Iva,Venta[i].Totalapagar);
}Venta[998];
struct tip{
	int idTipoProducto;
	 char Descripcion[30];
	 int estatus;
	
}Tipoproducto[100];

struct prod{
	int idProducto;
	 char Descripcion[30];
	 int idTipoProd;
	 int nExistencia;
	 float Precio;
	 
	 int estatus;
	
}Producto[800];

 struct rtv{
	int idUsuario;
	 char SUsuario[5];
	 int SPasswordd;
	 char sNombre[30];
	 int nEstatus;
	 int nTipo;
}usuario[20];

struct cliente{
	int idCliente;
	 char Nombre[30];
	 char Calle[20];
	 char Colonia[20];
	 int Num;
	 char Telefono[30];
	 int Estatus;
}Cliente[998];
float funiva(float x){
	float iva;
	iva=(x*0.16);
	return iva;
	
}
int main() {
		int com;
	
	int a,h=0,x,i=0,j=0,m,k=1,z=0,pe,c,t,l=0,v=0;
int	verificador=0;
	 char r[7],num[10]; 
char nom[20];
int men=0;
char usur[5];
float precio;
int fin,find;
float sum=0;
int verificador1,s=0;
			int cantidad;
		FILE *cl,*tp,*p,*ptr,*vent,*ven;;
		char *tipo="TIPOPRODUCTO.dat";
		char *prod="PRODUCTO.dat";
		char *cliente="Cliente.dat";
			char *usuari="USUARIO.dat";
 char *ventad="VENTADETALLE.dat";
	char *venta="VENTA.dat";
		
ptr=fopen(usuari,"r");
do{
	
	fread(&usuario[j],sizeof(usuario[j]),1,ptr);

	if(usuario[j].idUsuario==0){
		break;
	}


j++;
z=j;
}while(!feof(ptr));
	fclose(ptr);
int verificacion;
int ad;
do{
	if(i<3){
	verificacion=0;
	printf("\t\t\t\tBienvenidos\n\t\t\t     Supermercado FCFM\n");
	fflush(stdin);
	printf("\nUsuario:");
gets(usur);
		fflush(stdin);
 for(x=0;x<=j;x++){

	if(strcmp(usur,usuario[x].SUsuario)!=0||strlen(usur)==0||usuario[x].nEstatus==0){
	
		verificacion=1;
	

	}
	else{
	printf("\nContraseña: ");
	scanf("%d",&pe);
	
	if(pe==usuario[x].SPasswordd){
	h=1;
	ad=x;
    }
    else{
	i++;	
     }	
}
     }
     if(verificacion==1){
     	system("cls");
	 }
}
else{
system("cls");
printf("Consulte con el Administrador");
return (0);
}
}while(h!=1);
h=0;
do{

system("cls");
printf("\n\t\tBuen dia %s",usuario[ad].sNombre);
printf("\n\n1.Regsitro Clientes.\n\n2.Registro Producto.\n\n3.Registro Tipo Producto.\n\n4.Pedido/Venta.\n\n5.Historial Pedido/Venta.\n\n6.Reporte Inventario\n\n7.Salir\n\nSeleccionar:");

scanf("%d",&h);
switch(h){
	case 1:{
	
cl=fopen(cliente,"a+");
	c=0;
	do{
	
	fread(&Cliente[c],sizeof(Cliente[c]),1,cl);

	if(Cliente[c].idCliente==0){
		break;
	}
		//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nCalle:\t\t%s\nColonia:\t%s\nNum:\t\t%d\nTelefono\t%s\nEstatus:\t%d",Cliente[c].idCliente,Cliente[c].Nombre,Cliente[c].Calle,Cliente[c].Colonia,Cliente[c].Num,Cliente[c].Telefono,Cliente[c].Estatus);

c++;
t=c;
}while(!feof(cl));
	fclose(cl);
	j--;

	do{
		system("cls");
		printf("\n\t\t\tRegistro de clientes.\n1.Alta\n2.Baja\n3.Consulta\n4.Regresar al menu principal\nSeleccionar:");
scanf("%d",&men);
		switch(men){
	case 1:
	
		system("cls");
		printf("\n\nMenu para dar de alta\n\n\t1.Dar de Alta\n\t2.Agregar\n\nPara salir oprima cualquier numero diferente del menu");
		scanf("%d",&x);
		
		switch(x){
			case 1:
					do{
	verificador=0;
		system("cls");
printf("\nIngrese id de Cliente");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe cliente");
}else{
if(Cliente[com-1].Estatus==1){
printf("\nEste cliente ya se encuentra activo");
	}
if(Cliente[com-1].Estatus==0){
Cliente[com-1].Estatus=1;
				cl=fopen(cliente,"w+");
for(i=0;i<=j;i++){
fwrite(&Cliente[i],sizeof(Cliente[i]),1,cl);
}
}
fclose(cl);
}
	printf("\nSi desea dar de baja a mas ingrese 2");
scanf("%d",&x);
}while(x==2);

				break;
			case 2:
				j++;
				cl=fopen(cliente,"a+");
do{
		do{
		verificador=0;
			Cliente[j].idCliente=j+1;
			fflush(stdin);
system("cls");
		printf("\nIngrese Nombre del Cliente:\t");
gets(Cliente[j].Nombre);
			
			if(strlen(Cliente[j].Nombre)==0){
				verificador=1;
					printf("\nError\n");
			}else{
			for(i=0;i<=strlen(Cliente[j].Nombre)-1;i++){
	if((Cliente[j].Nombre[i]>=48&&Cliente[j].Nombre[i]<=57)){
	verificador=1;
}
}
if(verificador==1){
printf("\nNombre invalido\n");
}
for(i=0;i<j;i++){
	if(strcmp(Cliente[j].Nombre,Cliente[i].Nombre)==0){
		verificador=1;
		printf("\nNombre de Cliente existente, pruebe otro\n");
		system("pause");
		break;
	}
}
		}
}while(verificador==1);
			fflush(stdin);
	printf("\nIngrese Calle:\t");
gets(Cliente[j].Calle);
			fflush(stdin);
	printf("\nIngrese Colonia\t:");
gets(Cliente[j].Colonia);
			fflush(stdin);
				printf("\nIngrese Numero de casa:\t");
scanf("%d",&Cliente[j].Num);
						fflush(stdin);
  do{
	   do{
	   			fflush(stdin);
	   verificador=0;
	  printf("\nIngrese numero Telefonico:\t");
	  gets(Cliente[j].Telefono);
	  			fflush(stdin);

}while(strlen(Cliente[j].Telefono)<=0||strlen(Cliente[j].Telefono)!=10);
	 for(i=0;i<=strlen(Cliente[j].Telefono)-1;i++){
	  if(Cliente[j].Telefono[i]>=48&&Cliente[j].Telefono[i]<=57){
}else{
	verificador=1;
}
	}
	  }while(verificador==1);
memset( num, 0, 10);	  
strcpy(num,"(");
	  strncat(num,Cliente[j].Telefono,2);
	  strcat(num,")-");
	  num[5]=Cliente[j].Telefono[2];
  strcat(num,"-");
  	  puts(num);
strcpy(r," ");
			  puts(num);
	  for(i=0;i<=strlen(Cliente[j].Telefono)-3;i++){
	  	r[i]=Cliente[j].Telefono[i+3];
	  }
	 	  strcat(num,r);
       strcpy(Cliente[j].Telefono,num);
	  	 puts(Cliente[j].Telefono);
	Cliente[j].Estatus=1;
printf("\nSi desea agregar mas ingrese 2");
scanf("%d",&x);
if(x==2){
	j++;
}
}while(x==2);
		for(i=z;i<=j;i++){
fwrite(&Cliente[i],sizeof(Cliente[i]),1,cl);
}
z=j+1;
fclose(cl);
system("cls");
printf("Guardado\n");
system("pause");
system("cls");		
				
				break;
		}
		
		

		break;
		case 2:
	do{
	verificador=0;
		system("cls");
printf("\nIngrese id de Cliente");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe cliente");
}else{
if(Cliente[com-1].Estatus==NULL){
printf("\nEste  ya se encuentra inactivo");
	}
if(Cliente[com-1].Estatus==1){
Cliente[com-1].Estatus=0;
				cl=fopen(cliente,"w");
for(i=0;i<=j;i++){
fwrite(&Cliente[i],sizeof(Cliente[i]),1,cl);
}
}
fclose(cl);
}
	printf("\nSi desea dar de baja a mas ingrese 2");
scanf("%d",&x);
}while(x==2);


		break;
	case 3:
					system("cls");
do{
	fflush(stdin);
printf("\nEscriba nombre a buscar");
gets(nom);
	fflush(stdin);
verificador-0;
for(i=0;i<=j;i++){
	if(strcmp(nom,Cliente[i].Nombre)==0){
		printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nCalle:\t\t%s\nColonia:\t%s\nNum:\t\t%d\nTelefono\t%s\nEstatus:\t%d",Cliente[i].idCliente,Cliente[i].Nombre,Cliente[i].Calle,Cliente[i].Colonia,Cliente[i].Num,Cliente[i].Telefono,Cliente[i].Estatus);
verificador=1;
	}
}
if(verificador!=1){
	printf("No existe");
}
printf("\nSi desea buscar  a otro ingrese 2\n");
scanf("%d",&k);
}while(k==2);
		break;
		
		
}
				
	}while(men!=4);
	
		
		break;
}
	case 2:{
		
 fin=0;
	i=0;
	
	tp=fopen(tipo,"r");
	do{
	
	fread(&Tipoproducto[i],sizeof(Tipoproducto[i]),1,tp);

	if(Tipoproducto[i].idTipoProducto==0){
		break;
	}

i++;
fin=i;
}while(!feof(tp));
	fclose(tp);
		j=0;
		p=fopen(prod,"r");

	do{
	
	fread(&Producto[j],sizeof(Producto[j]),1,p);

	if(Producto[j].idProducto==0){
		break;
	}
//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nIdTipo Producto:\t\t%d\nExistencia:\t\t%d\nPrecio:\t\t%f$\nEstatus:\t%d",Producto[j].idProducto,Producto[j].Descripcion,Producto[j].idTipoProd,Producto[j].nExistencia,Producto[j].Precio,Producto[j].estatus);

j++;
z=j;
}while(!feof(p));
	fclose(p);

	j--;
		do{		system("cls");

		printf("\n\t\t\tRegistro de Productos.\n1.Alta\n2.Baja\n3.Consulta\n4.Resurtido\n5.Regresar al menu principal\nSeleccionar:");	

scanf("%d",&men);
		switch(men){
	case 1:
	
		system("cls");
		printf("\n\nMenu para dar de alta\n\n\t1.Dar de Alta\n\t2.Agregar\n\nPara salir oprima cualquier numero diferente del menu");
		scanf("%d",&x);
		
		switch(x){
			case 1:
					do{
	verificador=0;
		system("cls");
printf("\nIngrese id de Producto");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe Producto");
}else{
if(Producto[com-1].estatus==1){
printf("\nEste Producto ya se encuentra activo");
	}
if(Producto[com-1].estatus==0){
Producto[com-1].estatus=1;
				p=fopen(prod,"w+");
for(i=0;i<=j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);
}
}
fclose(p);
}
	printf("\nSi desea dar mas de Alta   ingrese 2");
scanf("%d",&x);
}while(x==2);

				break;
			case 2:
				j++;
				p=fopen(prod,"a+");
do{
		do{
		verificador=0;
		Producto[j].idProducto=j+1;
			fflush(stdin);
system("cls");
		printf("\nIngrese Nombre del Producto:\t");
gets(Producto[j].Descripcion);
			
			if(strlen(Producto[j].Descripcion)==0){
				verificador=1;
					printf("\nError\n");
			}else{
			for(i=0;i<=strlen(Producto[j].Descripcion)-1;i++){
	
}
if(verificador==1){
printf("\nNombre invalido\n");
}
for(i=0;i<j;i++){
	if(strcmp(Producto[j].Descripcion,Producto[i].Descripcion)==0){
		verificador=1;
		printf("\nNombre de Tipo producto existente, pruebe otro\n");
		system("pause");
		break;
	}
}
		}
}while(verificador==1);
			


do{
	verificador=0;
			printf("\nIngrese Tipo Producto");
scanf("%d",&com);
if(com>fin||com<=0){
	printf("\nNo existe Tipo Producto\n");
	verificador=1;
}else{
	
	Producto[j].idTipoProd=com;
	
	
}
	
}while(verificador==1);

do{
	verificador=0;
	printf("\nIngrese Existencia: ");
    scanf("%d",&com);

	if(com<=0){
		printf("\nPara dar de alta un producto su existencia no debe ser 0\n");
		verificador=1;
	}else{
		Producto[j].nExistencia=com;
	}
	
}while(verificador==1);

do{
verificador=0;
	printf("\nIngrese Precio: ");
    scanf("%f",&precio);

	if(precio<=0){
		printf("\nPara dar Precio un producto su Valor no debe ser 0\n");
		verificador=1;
	}else{
		Producto[j].Precio=precio;
	}
}while(verificador==1);
Producto[j].estatus=1;
printf("\nSi desea agregar mas ingrese 2");
scanf("%d",&x);
if(x==2){
	j++;
}
}while(x==2);
		for(i=z;i<=j;i++){
			if(Tipoproducto[i].idTipoProducto==0){
		break;
	}
fwrite(&Producto[i],sizeof(Producto[i]),1,p);

		printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nIdTipo Producto:\t\t%d\nExistencia:\t\t%d\nPrecio:\t\t%f$\nEstatus:\t%d",Producto[i].idProducto,Producto[i].Descripcion,Producto[i].idTipoProd,Producto[i].nExistencia,Producto[i].Precio,Producto[i].estatus);

}
z=j+1;
fclose(p);
printf("Guardado\n");
system("pause");
				
				break;
		}
		
		

		break;
		case 2:
	do{
	verificador=0;
		system("cls");
printf("\nIngrese id de Producto");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe Producto");
}else{
if(Producto[com-1].estatus==0){
printf("\nEste Producto ya se encuentra inactivo");
	}
if(Producto[com-1].estatus==1){
Producto[com-1].estatus=0;
				p=fopen(prod,"w+");
for(i=0;i<=j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);
}
}
fclose(p);
}
	printf("\nSi desea dar mas de Baja  ingrese 2");
scanf("%d",&x);
}while(x==2);
		break;
	case 3:
					system("cls");
do{
	fflush(stdin);
printf("\nEscriba nombre a buscar");
gets(nom);
	fflush(stdin);
verificador=0;
if(strlen(nom)==0){
	printf("\nError\n");
}else{

for(i=0;i<=j;i++){
	if(strcmp(nom,Producto[i].Descripcion)==0){
		printf("\nCLV:\t\t%i  \nNombre:\t\t\t%s\nIdTipo Producto:\t%d\nExistencia:\t\t%d\nPrecio:\t\t\t%f$\nEstatus:\t\t%d",Producto[i].idProducto,Producto[i].Descripcion,Producto[i].idTipoProd,Producto[i].nExistencia,Producto[i].Precio,Producto[i].estatus);
verificador=1;
	}
}
if(verificador!=1){
	printf("No existe");
}
}
		
		printf("\nSi desea buscara a otro ingrese 2\n");
scanf("%d",&k);	
}while(k==2);
		break;
		case 4:{
			
		do{
			verificador=0;
		system("cls");
printf("\nIngrese id de Producto\t");
scanf("%d",&com);
if(com>j||com<=0){
	printf("\nNo existe Producto\n");
	
	
}else{
	do{

	verificador=0;
	printf("\nIngrese cantidad a agregar\t");
	scanf("%d",&cantidad);
	if(cantidad<=0){
		printf("\nError\n");
		verificador=1;
	}
}while(verificador==1);
		int valor,suma;
		
		valor=Producto[com-1].nExistencia;
		suma=valor+cantidad;
		
			printf("%d",cantidad);
			Producto[com-1].nExistencia=suma;
			printf("%d",Producto[com-1].nExistencia);
				p=fopen(prod,"w+");
for(i=0;i<=j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);
}

fclose(p);
}
			
			
			
			
			
			
		printf("\nSi desea resurtir a otro ingrese 2\n");
scanf("%d",&k);	
		}while(k==2);	
			
			
			
			
			
			
			
			break;
		}
		
}
				
	}while(men!=5);
	
	
		break;
}
	case 3:{
		

	FILE *tp;
		
		char *tipo="TIPOPRODUCTO.dat";
tp=fopen(tipo,"r");
		j=0;
	do{
	
	fread(&Tipoproducto[j],sizeof(Tipoproducto[j]),1,tp);

	if(Tipoproducto[j].idTipoProducto==0){
		break;
	}
		//	printf("\n\nCLV:\t\t%i  \nNombre:\t\t%s\nEstatus:\t%d",Tipoproducto[j].idTipoProducto,Tipoproducto[j].Descripcion,Tipoproducto[j].estatus);

j++;
z=j;
}while(!feof(tp));
	fclose(tp);
	
j--;
	do{		system("cls");

		printf("\n\t\t\tRegistro de Tipo Producto.\n1.Alta\n2.Baja\n3.Consulta\n4.Regresar al menu principal\nSeleccionar:");

scanf("%d",&men);
		switch(men){
	case 1:
	
		system("cls");
		printf("\n\nMenu para dar de alta\n\n\t1.Dar de Alta\n\t2.Agregar\n\nPara salir oprima cualquier numero diferente del menu");
		scanf("%d",&x);
		
		switch(x){
			case 1:
					do{
	verificador=0;
		system("cls");
printf("\nIngrese id de Tipo Producto");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe Tipo Producto");
}else{
if(Tipoproducto[com-1].estatus==1){
printf("\nEsteTipo Producto ya se encuentra activo");
	}
if(Tipoproducto[com-1].estatus==0){
Tipoproducto[com-1].estatus=1;
				tp=fopen(tipo,"w+");
for(i=0;i<=j;i++){
fwrite(&Tipoproducto[i],sizeof(Tipoproducto[i]),1,tp);
}
}
fclose(tp);
}
	printf("\nSi desea dar de baja a mas ingrese 2");
scanf("%d",&x);
}while(x==2);

				break;
			case 2:
				j++;
				tp=fopen(tipo,"a+");
do{
		do{
		verificador=0;
			Tipoproducto[j].idTipoProducto=j+1;
			fflush(stdin);
system("cls");
		printf("\nIngrese Nombre del Tipo producto:\t");
gets(Tipoproducto[j].Descripcion);
			
			if(strlen(Tipoproducto[j].Descripcion)==0){
				verificador=1;
					printf("\nError\n");
			}else{
			for(i=0;i<=strlen(Tipoproducto[j].Descripcion)-1;i++){
	if((Tipoproducto[j].Descripcion[i]>=48&&Tipoproducto[j].Descripcion[i]<=57)){
	verificador=1;
}
}
if(verificador==1){
printf("\nNombre invalido\n");
}
for(i=0;i<j;i++){
	if(strcmp(Tipoproducto[j].Descripcion,Tipoproducto[i].Descripcion)==0){
		verificador=1;
		printf("\nNombre de Tipo producto existente, pruebe otro\n");
		system("pause");
		break;
	}
}
		}
}while(verificador==1);
			
	Tipoproducto[j].estatus=1;
printf("\nSi desea agregar mas ingrese 2");
scanf("%d",&x);
if(x==2){
	j++;
}
}while(x==2);
		for(i=z;i<=j;i++){
fwrite(&Tipoproducto[i],sizeof(Tipoproducto[i]),1,tp);
}
fclose(tp);
z=j+1;
printf("Guardado\n");
system("pause");
				
				break;
		}
		
		

		break;
		case 2:
					do{
	verificador=0;
		system("cls");
printf("\nIngrese id de producto");
scanf("%d",&com);
if(com>j||com<=0){
	printf("No existe producto");
}else{
if(Tipoproducto[com-1].estatus==0){
printf("\nEste usuario ya se encuentra inactivo");
	}
if(Tipoproducto[com-1].estatus==1){
Tipoproducto[com-1].estatus=0;
				tp=fopen(tipo,"w+");
for(i=0;i<=j;i++){
fwrite(&Tipoproducto[i],sizeof(Tipoproducto[i]),1,tp);
}
}
fclose(tp);
}
	printf("\nSi desea dar de baja a mas ingrese 2");
scanf("%d",&x);
}while(x==2);
		break;
	case 3:
					system("cls");
do{
	fflush(stdin);
printf("\nEscriba nombre a buscar");
gets(nom);
	fflush(stdin);
verificador=0;
if(strlen(nom)==0){
	printf("\nError\n");
}else{

for(i=0;i<=j;i++){
	if(strcmp(nom,Tipoproducto[i].Descripcion)==0){
		printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nEstatus:\t%d",Tipoproducto[i].idTipoProducto,Tipoproducto[i].Descripcion,Tipoproducto[i].estatus);
verificador=1;
	}
}
if(verificador!=1){
	printf("No existe");
}
}
printf("\nSi desea buscar  a otro ingrese 2\n");
scanf("%d",&k);
}while(k==2);
		break;
		
		
}
				
	}while(men!=4);
	

	 	
		 
		 
		 
		 break;
}
	case 4:{
		
	
			time_t ahora;
    struct tm *fecha;

    time(&ahora);
	
cl=fopen(cliente,"r");
	c=0;
	do{
	
	fread(&Cliente[c],sizeof(Cliente[c]),1,cl);

	if(Cliente[c].idCliente==0){
		break;
	}
		//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nCalle:\t\t%s\nColonia:\t%s\nNum:\t\t%d\nTelefono\t%s\nEstatus:\t%d",Cliente[c].idCliente,Cliente[c].Nombre,Cliente[c].Calle,Cliente[c].Colonia,Cliente[c].Num,Cliente[c].Telefono,Cliente[c].Estatus);

c++;
t=c;
}while(!feof(cl));
	fclose(cl);



ven=fopen(ventad,"r");

	
	
	do{
	fread(&Ventadetalle[s],sizeof(Ventadetalle[s]),1,ven);
	if(Ventadetalle[s].idVentadetalle==0){
		break;
	}
//printf("\nId Venta%d\nIdvetnadetalle%d\nIdproducto%d\ncantidad%d\nprecio%f",Ventadetalle[s].idVenta,Ventadetalle[s].idVentadetalle,Ventadetalle[s].idProducto,Ventadetalle[s].Cantidad,Ventadetalle[s].Precio);

s++;
find=s;

}while(!feof(ven));
	fclose(ven);
	
		j=0;


	vent=fopen(venta,"r");
l=0;
	do{
	fread(&Venta[l],sizeof(Venta[l]),1,vent);
	

	if(Venta[l].idVenta==0){
		break;
	
	}
	// printf("\nId Cliente%d\nIdVenta%d\nnTipoventa%d\nFechaPedido%d\nFechaEntrega%d\nsubtotal%f\nIva%f\nTotalapagar%f\nEstatus%d",Venta[l].idCliente,Venta[l].idVenta,Venta[l].nTipoventa,Venta[l].FechaPedido,Venta[l].FechaEntrega,Venta[l].subtotal,Venta[l].Iva,Venta[l].Totalapagar,Venta[l].Estatus);

l++;
v=l;
}while(!feof(vent));
	fclose(vent);
	l--;
		j=0;
		p=fopen(prod,"r");

	do{
	
	fread(&Producto[j],sizeof(Producto[j]),1,p);

	if(Producto[j].idProducto==0){
		break;
	}
	//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nIdTipo Producto:\t\t%d\nExistencia:\t\t%d\nPrecio:\t\t%f$\nEstatus:\t%d",Producto[j].idProducto,Producto[j].Descripcion,Producto[j].idTipoProd,Producto[j].nExistencia,Producto[j].Precio,Producto[j].estatus);

j++;
z=j;
}while(!feof(p));
	fclose(p);
	s--;

//printf("\n%d\n%d\n%d\n%d",v,l,s,j);

		do{
			system("cls");
		printf("\n\t\t\tPedido/Venta.\n1.Alta\n2.Cancelar\n3.Consulta\n4.Envio\n5.Regresar al menu principal\nSeleccionar:");
		scanf("%d",&men);
		
		switch(men){
			
			
			case 1:{
				l++;
				s++;
				system("cls");
				printf("Que tipo de venta es\n\n1.Venta en caja\n2.Pedido ");
				scanf("%d",&x);
				switch(x){
					case 1:{
						
					do{
						system("cls");
		verificador=0;
		Venta[l].idVenta=l+1;
		Venta[l].Estatus=2;
		Venta[l].nTipoventa=0;
        Venta[l].idCliente=999;
		time_t ahora;
    struct tm *fecha;
    time(&ahora);
    fecha = localtime(&ahora);
    Venta[l].FechaPedido[0]=fecha->tm_mday;
    Venta[l].FechaPedido[1]=fecha->tm_mon+1;
Venta[l].FechaPedido[2]=fecha->tm_year+1900;
 
  Venta[l].FechaEntrega[0]=fecha->tm_mday;
    Venta[l].FechaEntrega[1]=fecha->tm_mon+1;
Venta[l].FechaEntrega[2]=fecha->tm_year+1900;
//printf("\n\n%d/%d/%d", Venta[l].FechaPedido[0], Venta[l].FechaPedido[1], Venta[l].FechaPedido[2]);
	//	printf("%d",s);
do{
	do{
							
			  	fflush(stdin);
	printf("Escriba nombre de producto a comrpar ");
		gets(nom);
               	fflush(stdin);
        verificador=0;
                  if(strlen(nom)==0){
                  	verificador=1;
                    	printf("\nError\n");
                    	
                  }else{
                  	
                  	for(i=0;i<j;i++){
	if(strcmp(nom,Producto[i].Descripcion)==0){
		printf("\nNombre de  producto aceptado,\n");
		verificador=0;
		break;
	}else{
		verificador=1;
	}
}
if(verificador==1){
	printf("\nNombre de producto no encontrado\n");
	
	
}else{
	Ventadetalle[s].idProducto=Producto[i].idProducto;
	do{               	fflush(stdin);
printf("\n%d\n",s);
		verificador1=0;
		printf("Ingrese cantidad de producto a comprar");
		scanf("%d",&cantidad);
		if(cantidad>Producto[i].nExistencia){
			printf("\nNo es posible no hay suficiente producto\n");
			verificador1=1;
		}else{
		 Producto[i].nExistencia=Producto[i].nExistencia-cantidad;
		 Ventadetalle[s].Cantidad=cantidad;
		 Ventadetalle[s].Precio=Producto[i].Precio;
		 Ventadetalle[s].idVentadetalle=s+1;
		 Ventadetalle[s].idVenta=l+1;
		 
		 sum=sum+(Ventadetalle[s].Precio*cantidad);
		}	
	  }while(verificador1==1);
    }                 	
}			
	}while(verificador==1);
					Venta[l].subtotal=sum;
				Venta[l].Iva=funiva(sum);
		 Venta[l].Totalapagar=sum+Venta[l].Iva;	
		 	               	fflush(stdin);

			printf("\nSi desea agregar a otro producto ingrese 2\n");
             scanf("%d",&k);
                            	fflush(stdin);

			 if(k==2){
			 	s++;
			 }	
}while(k==2);
						
						
					printf("\nSi desea registrar a otro cliente ingrese2\n");
scanf("%d",&k);		
				if(k==2){
					sum=0;
	l++;
	s++;
}		
					}while(k==2);

								ven=fopen(ventad,"a+");
			for(i=find;i<=s;i++){
fwrite(&Ventadetalle[i],sizeof(Ventadetalle[i]),1,ven);
//printf("\n\nId Venta%d\nIdvetnadetalle%d\nIdproducto%d\ncantidad%d\nprecio%f",Ventadetalle[i].idVenta,Ventadetalle[i].idVentadetalle,Ventadetalle[i].idProducto,Ventadetalle[i].Cantidad,Ventadetalle[i].Precio);

}		

	find=s+1;
		vent=fopen(venta,"a+");
			printf("\n\n%d\n\n%d",v,l);					  

							for(i=v;i<=l;i++){
fwrite(&Venta[i],sizeof(Venta[i]),1,vent);
//	printf("\nId Cliente%d\nIdVenta%d\nnTipoventa%d\nFechaPedido%d\nFechaEntrega%d\nsubtotal%f\nIva%f\nTotalapagar%f\nEstatus%d",Venta[i].idCliente,Venta[i].idVenta,Venta[i].nTipoventa,Venta[i].FechaPedido,Venta[i].FechaEntrega,Venta[i].subtotal,Venta[i].Iva,Venta[i].Totalapagar);
}

			  	fflush(stdin);

		p=fopen(prod,"w");
	
						for(i=0;i<j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);
	//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nIdTipo Producto:\t\t%d\nExistencia:\t\t%d\nPrecio:\t\t%f$\nEstatus:\t%d",Producto[i].idProducto,Producto[i].Descripcion,Producto[i].idTipoProd,Producto[i].nExistencia,Producto[i].Precio,Producto[i].estatus);
//	system("pause")	;

}
fclose(p);	
						  	fflush(stdin);
v=l+1;
	system("pause")	;
		fclose(ven);
		fclose(vent);
	
						break;
					}
					
					case 2:{
						j++;
					
						
						system("cls");

		Venta[l].idVenta=l+1;
		Venta[l].Estatus=1;
		Venta[l].nTipoventa=1;
        
		time_t ahora;
    struct tm *fecha;
    time(&ahora);
    fecha = localtime(&ahora);
    
    Venta[l].FechaPedido[0]=fecha->tm_mday;
    Venta[l].FechaPedido[1]=fecha->tm_mon+1;
Venta[l].FechaPedido[2]=fecha->tm_year+1900;
			int mes1,verificador,comparador=0,i,dia1,dia=fecha->tm_mday,mes=fecha->tm_mon+1,an=fecha->tm_year+1900,numero,sem=fecha->tm_wday,an1;		
					 do{
					 
					 verificador=0;
					 printf("Ingrese id Cliente");
					 	scanf("%d",&k);
					 	if(k>c||k<=0||Cliente[k-1].Estatus==0){
					 		verificador=1;
					 		printf("\nNo existe usuario\n");
						 }
					 	
					 }while(verificador==1);
					 Venta[l].idCliente=k;
				do{
				verificador=0;
				printf("Ingrese fecha a entregar dia,mes,a%c",164);
				scanf("%d",&dia1);
								scanf("%d",&mes1);
				scanf("%d",&an1);
				 comparador=mes1-mes;
                if(comparador>0){
             
					numero=((dia-30)*-1)+dia1;
		

				}else{
					numero=dia1-dia;
				
				}
				if((dia1<dia&&mes1<mes)||an!=an1||mes1<mes){
					
					verificador=1;
					printf("\nError\n");
				}else{
				
				
                     for(i=0;i<numero;i++){
                     	
	                    if(sem==7){
	                    	
	                    	sem=1;
	                    	
                        	}else{	
	                         sem++;
	                    }
                                }
					if(sem==0||sem>5){
						verificador=1;
						printf("\nDebe ser entre jueves y viernes\n");
					 }
			}
				}while(verificador==1);		

			 Venta[l].FechaEntrega[0]=dia1;
    Venta[l].FechaEntrega[1]=mes1;
Venta[l].FechaEntrega[2]=an1;			
					sum=0;	
do{
						
			do{
	do{
							
			  	fflush(stdin);
	printf("Escriba nombre de producto a comrpar ");
		gets(nom);
               	fflush(stdin);
        verificador=0;
                  if(strlen(nom)==0){
                  	verificador=1;
                    	printf("\nError\n");
                    	
                  }else{
                  	
                  	for(i=0;i<j;i++){
	if(strcmp(nom,Producto[i].Descripcion)==0){
		printf("\nNombre de  producto aceptado,\n");
		verificador=0;
		break;
	}else{
		verificador=1;
	}
}
if(verificador==1){
	printf("\nNombre de producto no encontrado\n");
	
	
}else{
	Ventadetalle[s].idProducto=Producto[i].idProducto;
	do{               	fflush(stdin);
		verificador1=0;
		printf("Ingrese cantidad de producto a comprar");
		scanf("%d",&cantidad);
		if(cantidad>Producto[i].nExistencia){
			printf("\nNo es posible no hay suficiente producto\n");
			verificador1=1;
		}else{
		 Producto[i].nExistencia=Producto[i].nExistencia-cantidad;
		 Ventadetalle[s].Cantidad=cantidad;
		 Ventadetalle[s].Precio=Producto[i].Precio;
		 Ventadetalle[s].idVentadetalle=s+1;
		 Ventadetalle[s].idVenta=l+1;
		 
		 sum=sum+(Ventadetalle[s].Precio*cantidad);
		}	
	  }while(verificador1==1);
    }                 	
}			
	}while(verificador==1);
					Venta[l].subtotal=sum;
				Venta[l].Iva=funiva(sum);
		 Venta[l].Totalapagar=sum+Venta[l].Iva;	
		 	               	fflush(stdin);

			printf("\nSi desea agregar a otro producto ingrese 2\n");
             scanf("%d",&k);
                            	fflush(stdin);

			 if(k==2){
			 	s++;
			 }	
}while(k==2);
if(Venta[l].Totalapagar<200){
printf("\nEl Pedido debe ser mayor a 200\n");
verificador=1;

}						
						
}while(verificador==1);
							
			

		vent=fopen(venta,"a+");
		
								ven=fopen(ventad,"a+");
			for(i=find;i<=s;i++){
fwrite(&Ventadetalle[i],sizeof(Ventadetalle[i]),1,ven);
//printf("\n\nId Venta%d\nIdvetnadetalle%d\nIdproducto%d\ncantidad%d\nprecio%f",Ventadetalle[i].idVenta,Ventadetalle[i].idVentadetalle,Ventadetalle[i].idProducto,Ventadetalle[i].Cantidad,Ventadetalle[i].Precio);

}		
	find=s+1;
							for(i=v;i<=l;i++){
fwrite(&Venta[i],sizeof(Venta[i]),1,vent);
//	printf("\nId Cliente%d\nIdVenta%d\nnTipoventa%d\nFechaPedido%d\nFechaEntrega%d\nsubtotal%f\nIva%f\nTotalapagar%f\nEstatus%d",Venta[i].idCliente,Venta[i].idVenta,Venta[i].nTipoventa,Venta[i].FechaPedido,Venta[i].FechaEntrega,Venta[i].subtotal,Venta[i].Iva,Venta[i].Totalapagar,Venta[i].Estatus);
}

			  	fflush(stdin);

		p=fopen(prod,"w");
	
						for(i=0;i<j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);
//	printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nIdTipo Producto:\t\t%d\nExistencia:\t\t%d\nPrecio:\t\t%f$\nEstatus:\t%d",Producto[i].idProducto,Producto[i].Descripcion,Producto[i].idTipoProd,Producto[i].nExistencia,Producto[i].Precio,Producto[i].estatus);
system("pause")	;

}
fclose(p);	
						  	fflush(stdin);
v=l+1;
	system("pause")	;
		fclose(ven);
		fclose(vent);
		
						
						
						break;
					}
					
					

				}
				
				
				
				
				
				
				break;
			}
			case 2:{
				 
				 do{
				 verificador=0;
				 printf("Introduzca la  id del Pedido");
				scanf("%d",&k);
				
					if(Venta[k-1].Estatus==1&&Venta[k-1].nTipoventa==1){
						
					}else{
						verificador=1;
					}
					if(verificador==1){
						printf("\nError\n");
						
					}else{
						
						for(i=0;i<=s;i++){
if(Ventadetalle[i].idVenta=k){
	Producto[Ventadetalle[i].idProducto].nExistencia=Producto[Ventadetalle[i].idProducto].nExistencia+Ventadetalle[i].Cantidad;	
}
}		
Venta[k-1].Estatus=0;							
					}
				}while(verificador==1);
					find=s+1;
	
		
	
	vent=fopen(venta,"w");
							for(i=0;i<=l;i++){
fwrite(&Venta[i],sizeof(Venta[i]),1,vent);
}
	fclose(vent);
			  	fflush(stdin);

		p=fopen(prod,"w");
	
						for(i=0;i<j;i++){
fwrite(&Producto[i],sizeof(Producto[i]),1,p);


}
fclose(p);	
						  	fflush(stdin);
v=l+1;
	system("pause")	;
	
				
				break;
			}
			
			case 4:{
				do{
							 
			
				 verificador=0;
				 printf("Introduzca la  id del Pedido");
				scanf("%d",&k);
				
					if(Venta[k-1].Estatus==1&&Venta[k-1].nTipoventa==1){
						
					}else{
						verificador=1;
					}
					if(verificador==1){
						printf("\nError\n");
						
					}else{
						
						for(i=0;i<=s;i++){
if(Ventadetalle[i].idVenta=k){
	Producto[Ventadetalle[i].idProducto].nExistencia=Producto[Ventadetalle[i].idProducto].nExistencia+Ventadetalle[i].Cantidad;	
}
}		
Venta[k-1].Estatus=0;							
					}
			
					
				
				printf("Ingrese 2 si quiere buscar a mas");
				}while(k==2);
		
				
				
				system("pause");
				break;
			}
			
			case 3:{
				
				system("cls");
							do{
				
				verificador=0;
				 printf("Introduzca la  id del Pedido");
				scanf("%d",&k);
				
					if((Venta[k-1].Estatus==1)&&Venta[k-1].nTipoventa==1){
	printf("\nId Cliente%d\nIdVenta%d\nnTipoventa%d\nFechaPedido%d\nFechaEntrega%d\nsubtotal%f\nIva%f\nTotalapagar%f\nEstatus%d",Venta[k-1].idCliente,Venta[k-1].idVenta,Venta[k-1].nTipoventa,Venta[k-1].FechaPedido,Venta[k-1].FechaEntrega,Venta[k-1].subtotal,Venta[k-1].Iva,Venta[k-1].Totalapagar);
		printf("\nCLV:\t\t%i  \nNombre:\t\t%s\nCalle:\t\t%s\nColonia:\t%s\nNum:\t\t%d\nTelefono\t%s\nEstatus:\t%d",Cliente[Venta[k-1].idCliente-1].idCliente,Cliente[Venta[k-1].idCliente-1].Nombre,Cliente[Venta[k-1].idCliente-1].Calle,Cliente[Venta[k-1].idCliente-1].Colonia,Cliente[Venta[k-1].idCliente-1].Num,Cliente[Venta[k-1].idCliente-1].Telefono,Cliente[Venta[k-1].idCliente-1].Estatus);
					}else{
						if((Venta[k-1].Estatus==0)&&Venta[k-1].nTipoventa==1){
							printf("\nEste pedido fue cancelado\n");
							verificador=1;
						}
						verificador=1;
						
						
					}
				
				printf("\nSi desea enviar mas ingrese 2\t");
scanf("%d",&k);
			}while(k==2);
				
					
				
				
				
				
				
				
				
				
				
				
				
				break;
			}
			
			
			
			
		}
		
				
		
	}while(men!=5);
	 	break;
}
	case 5:{
		
		
		
		
		do{
     	system("cls");
		printf("Seleccionar el historial deseado:\n1.Pedidos\n2.Ventas\n3.Rregresar al menu principal\nSeleccionar:");
		scanf("%d",&m);
		/* system("cls");
		printf("instrodusca rango de fecha");
		printf("\t\tHstorial Pedido\n\t\t\t\t\t\tFECHA:%s\nCVE PEDIDO%s:");
		printf("\tFECHA DE ENTREGA:%s\tEnviado:%s\nCVE CLIENTE:%s\tNOMBRE CLIENTE:%s\nCVE PRODUCTO\tDESCRIPCION\tCANTIDAD\tPRECIO\tTOTAL");
printf("\n\t\t  SUBTOTAL\t%d\n\t\t  IVA\t\t%d\n\t\t  TOTAL\t\t%d");

	printf("\t\tHstorial Pedido\n\t\t\t\t\t\tFECHA:%s\nCVE VENTA%s:");
		printf("\nCVE PRODUCTO\tDESCRIPCION\tCANTIDAD\tPRECIO\tTOTAL");
printf("\n\t\t  SUBTOTAL\t%d\n\t\t  IVA\t\t%d\n\t\t  TOTAL\t\t%d");

		*/
	
	}while(m!=3);
		break;
}
	case 6:{
i=0;

tp=fopen(tipo,"r");

	do{
	fread(&Tipoproducto[i],sizeof(Tipoproducto[i]),1,tp);
	if(Tipoproducto[i].idTipoProducto==0){
		break;
	}
i++;
fin=i;
}while(!feof(tp));
	fclose(tp);
		j=0;
		p=fopen(prod,"r");
	do{
	fread(&Producto[j],sizeof(Producto[j]),1,p);
	if(Producto[j].idProducto==0){
		break;
	}
j++;
z=j;
}while(!feof(p));
	fclose(p);
	do{
     	system("cls");
		printf("\t\t\tReporte de Inventario\n\n1.Para Ingresar tipo de producto\n\n2.Regresar al menu principal\n\nSeleccionar:");
		
		scanf("%d",&men);
	
	if(men==1){
	do{
			verificador=0;
		system("cls");
		printf("Ingrese Id del Tipo de producto");
		scanf("%d",&com);
		if(com>fin||com<=0||Tipoproducto[com-1].estatus==0){
	printf("\nNo existe Tipo Producto\n");
	verificador=1;
}else{
			printf("Tipo de producto\tCve Producto\tDescripcion\t\tExistencia");
	for(i=0;i<=j;i++){
		if(Tipoproducto[com-1].idTipoProducto==Producto[i].idTipoProd){
			if(Producto[i].estatus==0){		
			}else{	
	printf("\n%s\t\t\t      %d\t\t%s\t\t%d",Tipoproducto[com-1].Descripcion,Producto[i].idProducto,Producto[i].Descripcion,Producto[i].nExistencia);
}
		}
	}	
}	
		printf("\nSi desea buscara a otro ingrese 2\n");
scanf("%d",&k);	
}while(k==2);	
	}
	}while(men!=2);	
	    break;
}
}

}while(h!=7);

	return 0;
}
