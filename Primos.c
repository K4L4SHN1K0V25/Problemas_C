#include <stdio.h>

int main(){

int i,j,c,n;

printf("Ingrese un numero limite: ");
scanf("%i",&n);

for(i=2;i<n;i++){
    c = 1;
    for(j=2;j<i;j++){
        if(i % j == 0){
            c = 0;
        }
    }
    if(c){
        printf("%i ",i);
    }
}
return 0;
}
