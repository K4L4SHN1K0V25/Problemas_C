#include<stdio.h>
#include<string.h>

int main() {
char nombre[100],r[100],tem[100];
char letra;
int l=0,i,j=0,in=0,acer=0,te=0,opo=5;
int rep=0,g=0;

printf("-----JUEGO DEL AHORCADO-----\n");
printf("Ingrese un nombre para adivinar: ");
gets(nombre);

system("cls");

r[0] = ' ';
r[1] = '\0';


while(opo != 0){
    system("cls");
    te=0;

    if(in == 0){
        for(i=0;i<strlen(nombre);i++){
            if(nombre[i] == ' '){
                tem[i] = ' ';
                l++;
            }
            else {
                tem[i] = '_';
                l++;
            }
        }
    }

    in = 1;

    tem[l] = '\0';

    for(i=0;i<strlen(r);i++){
        if(r[i] == letra){
            rep = 1;
            break;
        }
        else {
            rep = 0;
        }
    }

    if(rep == 0){
        for(i=0;i<strlen(nombre);i++){
            if(nombre[i] == letra){
                tem[i] = letra;
                acer++;
                te=1;
            }
        }
    }

    if(rep == 0){
        if(te == 0){
            opo = opo - 1;
        }
    }
    else{
        printf("Ya se ha introducido este caracter");
        printf("\n\n");
    }

    printf("\n");

    for(i=0;i<strlen(tem);i++){
        printf(" %c ",tem[i]);
    }

    printf("\n");

    if(strcmp(nombre,tem) == 0){
        g = 1;
        break;
    }
    printf("\n");
    printf("Oportunidades que te quedan: %d",opo);
    printf("\n");

    r[j] = letra;
    j++;

    if (opo==0){
        break;
    }

    printf("Introduzca una letra:");
    scanf("\n%c",&letra);

    }

    if(g){
        printf("\n\n");
        printf("Has ganado.");
    }
    else{
        printf("\n\n");
        printf("Has perdido.");
    }

    printf("\n\n");
    return 0;
}
