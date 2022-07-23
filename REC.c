#include <stdio.h>
#include <math.h>

int main(){

int a,b,c,r,r1,r2,D;

printf("Ingrese el valor de A: ");
scanf("%i",&a);
printf("Ingrese el valor de B: ");
scanf("%i",&b);
printf("Ingrese el valor de C: ");
scanf("%i",&c);

b = b * b;
r = -4;
r1 =a * c;
r2 = r1 * r;
D = b + r2;

if(D < 0){
    printf("\nLa raíz es COMPLEJA con un resultado de: %i\n",D);
}
if(D == 0){
    printf("\nLa raíz es REAL E IGUAL con un resultado de: %i\n",D);
}
if(D > 0){
    printf("\nLa raíz es REAL Y DIFERENTE con un resultado de: %i\n",D);
}
}
