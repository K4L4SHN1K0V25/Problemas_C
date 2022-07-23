#include <stdio.h>

int main(){

int a, m=1, x;
printf("Ingrese un numero: ");
scanf("%i",&a);
while(a >= 0 & a <= 10 & m <= 10){
    x = a*m;
    printf("%i X %i = %i\n",a,m,x);
    m++;
    }

return 0;
}
