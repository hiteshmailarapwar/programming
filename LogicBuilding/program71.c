#include<stdio.h>
#include<stdlib.h>

int CountEven(int iArr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = CountEven(iPtr, iSize);
    printf("Nummber od even elements are : %d\n",iRet);
    free(iPtr);

    return 0;
}