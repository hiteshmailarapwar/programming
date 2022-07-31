#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag; 
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

