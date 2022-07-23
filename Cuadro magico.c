#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int contador=0, x=0, y=0, vx=0, vy=0, limite, CUANTOS, limitex, limitey;

printf("Ingrese un numero impar: ");
scanf("%i",&CUANTOS);

if(CUANTOS % 2 != 0){
    int Matriz[CUANTOS][CUANTOS];
    limite=CUANTOS*CUANTOS;
    limitex = CUANTOS - 1;
    limitey = CUANTOS - 1;

    for( x=0 ; x<CUANTOS ; x++){
        for( y=0 ; y<CUANTOS ; y++ ){
            Matriz[x][y] = 0;
        }
    }

    x = CUANTOS / 2;
    y = 0;

    for(contador=1;contador<=limite;contador++){

        Matriz[y][x] = contador;
        vx = x;
        vy = y;
        x++;
        if( x > limitex )
            x = 0;
        y--;
        if( y < 0 )
            y = limitey;
        if (Matriz[y][x]>0){
            x = vx;
            y = vy +1;
        }
    }

    for( x=0 ; x<CUANTOS ; x++){
        for( y=0 ; y<CUANTOS ; y++ ){
            printf("|%3d|",Matriz[x][y]);
        }
        printf("\n");
    }
}
else{
    printf("No es un numero impar");
}
return 0;
}
