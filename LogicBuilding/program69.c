#include<stdio.h>
#include<stdlib.h>      // for malloc and free

void Display(int Arr[], int iLength)
{
    register int iCnt = 0; 
    
    printf("Elements of array are : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    // auto int Brr[5];      Static memory allocation
    int *ptr = NULL;
    register int iCnt = 0; 
    int iSize = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);
    free(ptr);

    return 0;
}

// Arr[2]
// *(Arr+2)