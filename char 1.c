#include <stdio.h>

int main (){

int cen[10],i,j=0,r;

for (i=0;i<10;i++){

    printf("Ingrese 0 para salir\n");
    printf("Ingrese la estatura en centimetros: ");
    scanf("%i",&cen[i]);

    if (cen[i] == 0){
        break;
    }

    j = j + cen[i];
}


r = j / i;
printf("El promedio de estatura es de: %i",r);

}
