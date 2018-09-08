#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void insertionSort(int array[],int size);
int main()
{int i;
    int arrat[]={1,5,4,9,6,3,2,5,7,8}
    insertionSort(array,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
void insertionSort(int array[],int SIZE)
    {
        int i,j;
        int auxiliar;
        for(i=1;i<SIZE;i++)
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

