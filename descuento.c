#include <stdio.h>

int main(){

float a, b = 0.15, c = 0.08, d, e;

printf("Ingrese el precio del producto: ");
scanf("%f",&a);

if (a >= 3000){
    d = a * b;
    e = a - d;
    printf("%f es el precio con el descuento aplicado",e);
    }
else{
    d = a * c;
    e = a - d;
    printf("%f es el precio con el descuento aplicado",e);
}
}
