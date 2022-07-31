// Program to accept input digit from user and display on screen


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    /*
//          1           2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);     // 4
    }
    */

    iCnt = 1;        // 1
   //           2
    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);    // 4
        iCnt++;     // 3
    }
}

/////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;

    printf("Enter number\n");   // 4
    scanf("%d",&iValue);

    Display(iValue);    // Display(4);

    return 0;
}