#include <stdio.h>
int main() {  
    char c;
    printf("Ingrese en caracter: ");
    scanf("%c", &c);  
    if (c >= 'a' && c <= 'z') {
    	printf("%c Es un lower",c);
	}
	else
	if(c >= 'A' && c <= 'Z'){
		printf("%c es un upper",c);
	}

	if((c>=33&&c<=47)||(c>=60&&c<64)||(c>=90&&c<=96)){
		printf("%c es un signo",c);
		
	}
	else{
	if(c>=48&&c<=57)
		printf("%c es un numero",c);
	}

    printf("\nEl codigo  ascii de %c = %d", c, c);
    
    return 0;
}
