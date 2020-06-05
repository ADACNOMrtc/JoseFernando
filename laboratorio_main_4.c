#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main() {
    char operator;
    double primero, segundo;
    
    
printf("Ingrese el operador c: ");
    scanf("%c", &operator);
   printf("Ingrese dos numeros: ");
    scanf("%lf %lf", &primero, &segundo);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", primero, segundo, primero + segundo);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", primero, segundo, primero - segundo);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", primero, segundo, primero * segundo);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", primero, segundo, primero / segundo);
        break;
     
    default:
        printf("Error! operator is not correct");
    }
	return 0;
}
