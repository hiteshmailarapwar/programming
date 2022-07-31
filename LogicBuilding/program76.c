#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLegnth, int iNo)
{
    register int iCnt = 0;
    int iFcnt = 0;

    for(iCnt = 0; iCnt < iLegnth; iCnt++)
    {    
        if(iNo == Arr[iCnt])
        {
            iFcnt++;
        }
    }
    return iFcnt;
}

int main()
{
    auto int iSize = 0, iValue = 0, iRet = 0;
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

    printf("Enter the element to calculate the frequancy: \n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iSize, iValue);

    printf("Frquency is : %d\n",iRet);

    free(ptr);
    
    return 0;
}