#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccurence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the number to search first: \n");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurence(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element fisrt occured at index : %d\n",iRet);
    }

    free(ptr);
    
    return 0;
}