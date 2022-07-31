#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int iArr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) == 0)
        {
            printf("%d\n",iArr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayEven(iPtr, iSize);
    free(iPtr);

    return 0;
}