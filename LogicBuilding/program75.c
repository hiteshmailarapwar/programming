#include<stdio.h>
#include<stdlib.h>
// Positive & Negative

int Minimum(int Arr[], int iLegnth)
{
    auto int iMin = Arr[0];
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLegnth; iCnt++)
    {    
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    auto int iSize = 0, iRet = 0;
    auto int *ptr = NULL;
    register int iCnt = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr, iSize);

    printf("Minimum number is : %d\n",iRet);

    free(ptr);
    
    return 0;
}