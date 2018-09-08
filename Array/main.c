#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

int main()
{ //posiciones
    int misNumeros[cantidad];//=int misNumeros[50]
    int i;

    for(i=0;i<cantidad;i++)
    {
        fflush(stdin);
        printf("ingresar numero: ");

        scanf("%d", &misNumeros[i]);

        printf("Ingresado el numero en posicion %d de memoria : %d\n",i, misNumeros[i]);
    }
     for(i=0;i<cantidad;i++)
    {
       printf("Numeros en posicion %d : %d\n",i+1,misNumeros[i]);//i+1 es para que muestre el numero ordenado
    }

    fflush((stdin));
    printf("\nIngresando un numero 1 al %d ",cantidad);
    scanf("%d",&i);

    if(i<= cantidad && i>=1)
    {
        printf("Numero %d",misNumeros[i-1]);
    }

    fflusch(stdin):
    printf("ingrese el nuevo numero");
    scanf("%d",&i);
    misNumeros[i-1]=i
    printf("\nNumero nuevo%d"),misNumeros
    scanf(%d,&misNumeros);





    return 0;
}
