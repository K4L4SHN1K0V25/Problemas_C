#include <stdio.h>

int main(){

int a,b;

printf("Ingrese la velocidad a la que va el automovil: ");
scanf("%d",&a);
printf("Ingrese la velocidad maxima del camino: ");
scanf("%d",&b);

if (a < b){
    printf("El automovil va a buena velocidad");
    }
if (a > b){
    printf("El automovil paso el limite de velocidad");
    }

}
