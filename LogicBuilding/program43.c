#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt = 0;
    int iFcnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFcnt++;
        }
    }
    return iFcnt;    
}

bool CheckPrime(int iNo)
{
    int iRet = 0;
    iRet = CountFactor(iNo);
    if(iRet == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    printf("Number is prime: %d\n",bRet);
    
    if(bRet == true)
    {
       printf("%d is prime number",iValue); 
    }
    else
    {
       printf("%d is not prime number",iValue); 
    }

    return 0;
}

