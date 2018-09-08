#include <stdio.h>
#include <stdlib.h>

void bubleSort(int array[],int size);
void bubleSort2(int array[],int size);
int main()
{
}
    //burbuja1
    void bubleSort(int array[],int size)
{


    int j;
    int i;
    int auxiliar;
    for(i=0;i<size-1;i++)
    {
       for(j=i+1;j<size;j++)
       {
           if(array[i]>array[j])
           {
               if(swapInt(array,i,j))
            {
                break;
            }
           }
       }
    }
}

  int  intswapInts (int* pArray,int indiceB,int indiceA)//no ordena
    {
        int retorno = -1;
        int auxiliar;
        if(pArray != NULL &&indiceA>=0&&indiceB>=0&&indiceA!=indiceB)
        {
            auxiliar=pArray[indiceA];
            pArray[indiceA]=pArray[indiceB];
            pArray[indiceB]=auxiliar;


        }
        retorno=0;
        return retorno;
    }


    void insertionSort(int array[],int size)
    {
        int i,j;
        int auxiliar;
        for(i=1;i<size;i++)
        {
            auxiliar = array[i];
            j = i;
            while(j>0&&auxiliar <array[j-i])
            {
                array[j]=array[j-i];
                j--;

            }
            array[j]=auxiliar;
        }
        return 0;
    }


