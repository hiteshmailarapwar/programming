#include<stdio.h>
#include<stdlib.h>
// Positive & Negative

int Maximum(int Arr[], int iLegnth)
{
    auto int iMax = Arr[0];
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLegnth; iCnt++)
    {    
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(ptr, iSize);

    printf("Maximum number is : %d\n",iRet);

    free(ptr);
    
    return 0;
}