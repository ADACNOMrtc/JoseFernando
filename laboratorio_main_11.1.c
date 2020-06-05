#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int f){

   if ((f == 0) || (f == -1))
   return 1;
   else
   return fibo(f-1) + fibo(f-2);
}


   int main (){
           int r,i,x,z=0;
      
printf("\nIngrese hasta que numero hacer la serie de fibonacci");
        scanf("%d",&x);
        system("cls");
		             printf("\nPosicion\tValor");

		   for (i=-1;i<= x ;i++){

           r = fibo(i);
           printf("\n%d\t\t%d", i, r);
           }


           return 0;
       }
