#include <stdio.h>

int main(){

int a,b,c,d;

printf("Ingrese el valor del primer angulo: ");
scanf("%d",&a);
printf("Ingrese el valor del segundo angulo: ");
scanf("%d",&b);
printf("Ingrese el valor del tercer angulo: ");
scanf("%d",&c);

d = a+b+c;

if (d == 180){
    printf("Los angulos SI forman un triangulo");
    }
else{
    printf("Los angulos NO forman un triangulo");
    }
}
