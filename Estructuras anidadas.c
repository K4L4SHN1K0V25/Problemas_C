#include <stdio.h>

int main(){

int n=1,m,l,i;

while (n!=0){

    printf("\nIngrese 0 para salir\n");
    printf("Ingrese un numero par: ");
    scanf("%i",&n);

    if(n%2==0 && n!=0){
        printf("Ingrese hasta que numero quiere multiplicar: ");
        scanf("%i",&m);

        for(i=0;i<=m;i++){
            l = n * i;
            printf("%i x %i = %i\n",n,i,l);
        }
    }
    if(n%2==1 && n!=0){
        printf("\nNUMERO NO PAR, FAVOR DE INGRESAR UN VALIDO\n");
    }
}
}
