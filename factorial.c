#include <stdio.h>

int main(){

int n,fac = 1,i;

printf("Ingrese un numero: ");
scanf("%i",&n);

for(i=1;i<=n;i++){
    fac = fac * i;
}
printf("\nLa factorial de %i es %i\n",n,fac);

}
