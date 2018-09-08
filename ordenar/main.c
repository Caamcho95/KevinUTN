#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

int main()
{

 //posiciones
    int misNumeros[cantidad];//=int misNumeros[50]
    int i;
    int numeroMayor;

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
    numeroMayor=misNumeros[0];

    for(i=0;i<cantidad;i++)
    {
            if(i==0)
            {
                numeroMayor=misNumeros[i];
            }
        if(misNumeros[i]>numeroMayor)
        {
            numeroMayor=misNumeros[i];
        }
        printf("\n%d",i);
        if(i==cantidad-1)
        {
            printf("\n ultima vuelata");
        }

    }
    printf("\nNumero mayor %d",numeroMayor);
    return 0;
}
