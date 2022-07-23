#include <stdio.h>
#include <stdlib.h>

char agregar (char arr[],int z){

printf("Agregue el nuevo valor: ");
scanf("%s",arr[z+1]);

return arr[z+1];
}

char mostrar (char arr[], int i){

char f;

f = arr[i];

return f;
}

char modificar (char arr[],int z){

char fun;
int m;

printf("Lugar del elemento de 0 a %i a modificar: ",z);
scanf("%i",&m);

arr[m]=fun;

return arr[m];
}

char eliminar (char arr[],int z){

int m;

printf("Lugar del elemento de 0 a %i a eliminar: ",z);
scanf("%i",&m);

arr[m]=0;

return arr[m];
}

int main(){

int n = 0, i = 1, x = 1, z = 0;
char arr[100], fun;

printf("Agregue el tamaño del arreglo: ");
scanf("%i",&z);
printf("\n");

for (i=0; i<z; i++){
    printf("Valor para el elemento: ");
    scanf("%s",&fun);
    arr[i]=fun;
}


while(x!=0){
    system("cls");
    printf("\tMenu\t\n");
    printf("1 - Agregar\n");
    printf("2 - Mostrar\n");
    printf("3 - Modificar\n");
    printf("4 - Eliminar\n");
    printf("5 - Salir\n");
    printf("Escoga una opcion: ");
    scanf("%i",&n);

    if(n==5){
        system("cls");
        printf("Adios");
        x=0;
    }
    else{
        switch(n){
            case 1:
                system("cls");
                agregar(arr,z);
            break;
            case 2:
                system("cls");
                for (i=0; i<z; i++)
                    printf("%s\t",mostrar(arr,i));
                printf("\n");
            break;
            case 3:
                system("cls");
                modificar(arr,z);
            break;
            case 4:
                system("cls");
                eliminar(arr,z);
            break;
        }
    }

}

return 0;

}
