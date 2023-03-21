#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    int iCnt = 0;
    int iSize = 0;

    printf("Enter the size of elements : \n");
    scanf("%d", &iSize);

    Arr = (int *)malloc((iSize) * sizeof(int));

    printf("Enter the elements according to mentioned size : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements you mentioned are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d \n", Arr[iCnt]);
    }

    free (Arr);
    
    return 0;
}