#include <stdio.h>

void buscarElemento(int a[], int size_busca, int element_Busqueda);
void borrarElemento(int b[], int size_borra, int element_Borrar);
void agregarElemento(int c[], int size_agrega, int element_Agregar);

int main()
{
    int n; // Variable que determinará el número de elementos del arreglo.
    int i; // Variable para recorrer el arreglo.
    int elemento_Bus;
    int elemento_Borr;
    int elemento_Agre;

    printf("Ingresa el numero de elementos del arreglo: ");
    scanf("%d",&n);

    char array[n]; // Creamos un arreglo de enteros, el número de elementos del arreglo
                  // será el número asignado a la variable 'n'.

    for(i=0; i<n; i++)
    {
        printf("Ingresa el elemento numero %d del arreglo: ", (i+1) );
        scanf("%s",&array[i]);
    }

    printf("\n\n");

    printf("Ingresa el elemento a buscar en el arreglo: ");
    scanf("%d",&elemento_Bus);

    buscarElemento(array, n, elemento_Bus);

    printf("Ingresa el elemento a borrar en el arreglo: ");
    scanf("%d",&elemento_Borr);

    borrarElemento(array, n, elemento_Borr);

    printf("\n");

    printf("Ingresa el elemento a agregar en el arreglo: ");
    scanf("%d",&elemento_Agre);

    agregarElemento(array, n, elemento_Agre);

    printf("\n");

    system("pause");
    return 0;
}

void buscarElemento(int a[], int size_busca, int element_Busqueda)
{
    int j;
    int b = 0;
    int hold1,hold2;
    int cont = -1;


        for(j=0; j<size_busca; j++)
        {
            if(element_Busqueda == a[j])
            {
                hold1 = a[j];
                hold2 = j;
                b = 1;
            }
        }


    if(b==1)
    {
    printf("El elemento encontrado es %d y se encuentra en la posicion %d.\n",hold1,hold2);
    }
    else
    {
        printf("Elemento no encontrado.\n");
    }
}

void borrarElemento(int b[], int size_borra, int element_Borrar)
{
    int j;
    int c = 0;

    for(j=0; j<size_borra; j++)
    {
        if(element_Borrar == b[j])
        {
            b[j] = b[j+1];

            for(j=j+1; j<size_borra; j++)
            {
                b[j] = b[j+1];
            }
            --size_borra;
            c = 1;
        }
    }

    if(c == 1)
    {
        printf("El arreglo sin el elemento borrado anteriormente es:");

        for(j=0; j<size_borra; j++)
        {
            printf("%3d",b[j]);
        }
    }
    else
    {
        printf("Ese elemento NO se encuentra en el arreglo.\n");
    }
}

void agregarElemento(int c[], int size_agrega, int element_Agregar)
{
    int j;

    c[size_agrega] = element_Agregar;

    size_agrega++;

    printf("El arreglo con el elemento agregado es: ");

    for(j=0; j<size_agrega; j++)
    {
        printf("%3d",c[j]);
    }
}
