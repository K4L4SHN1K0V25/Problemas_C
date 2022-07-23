#include <stdio.h>
#include <string.h>

int main (){

int i,j,n=0,a=0,b=0,d=0;
char c[100],c2[100];

printf("Ingrese la cadena: ");
gets(c);

n = strlen(c);

for (i=0;i<n;i++){
    if (c[i]==' '){
        i++;
        c2[d]=c[i];
        d++;
    }
}
for (j=n-1;j>=0;j--){
    j=0;
    n = strlen(c2);
    for (j=n-1;j>=0;j--){
        if (c2[j]==c[a]){
            b++;
            a++;
        }
    }
    if (b==n){
        printf("La palabra es un palindromo\n");
    }
    else{
        printf("La palabra no es palindromo\n");
    }
}
}
