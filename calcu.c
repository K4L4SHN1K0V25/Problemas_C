#include <stdio.h>

int main(){

int a = 1, n1, n2, r;

while(a >= 0 & a <=4){
printf("CALCULADORA\n");
printf("1-Sumar\n");
printf("2-Restar\n");
printf("3-Multiplicar\n");
printf("4-Dividir\n");
printf("0-Salir\n");
scanf("%i",&a);

switch (a){

    case 1:
        printf("SUMA\n");
        printf("Ingrese el primer valor: ");
        scanf("%i",&n1);
        printf("Ingrese el segundo valor: ");
        scanf("%i",&n2);
        r = n1 + n2;
        printf("El es resultado es %i\n",r);
    break;

    case 2:
        printf("RESTA\n");
        printf("Ingrese el primer valor: ");
        scanf("%i",&n1);
        printf("Ingrese el segundo valor: ");
        scanf("%i",&n2);
        r = n1 - n2;
        printf("El es resultado es %i\n",r);
    break;

    case 3:
        printf("MULTIPLICACION\n");
        printf("Ingrese el primer valor: ");
        scanf("%i",&n1);
        printf("Ingrese el segundo valor: ");
        scanf("%i",&n2);
        r = n1 * n2;
        printf("El es resultado es %i\n",r);
    break;

    case 4:
        printf("DIVISION\n");
        printf("Ingrese el primer valor: ");
        scanf("%i",&n1);
        printf("Ingrese el segundo valor: ");
        scanf("%i",&n2);
        r = n1 / n2;
        printf("El es resultado es %i\n",r);
    break;

    case 0:
        printf("ADIOS\n");
        return 0;
    break;

    }
}
}
