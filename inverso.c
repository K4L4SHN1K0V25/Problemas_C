#include <stdio.h>
#include <string.h>

int main (){

int i,n=0;
char c[100];

printf("Ingrese la cadena: ");
gets(c);

n = strlen(c);

for (i=0;i<n;i++){
    if (c[i] == ' '){
        c[i] = 0;
    }
    if (c[i]>96 && c[i]<123){
        c[i] = c[i] - 32;
    }
}

for (i=n;i>=0;i--){
    printf("%c",c[i]);
}
}
