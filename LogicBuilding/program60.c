#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
    register int iCnt = 0;
    auto int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

bool ChkAmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum = 0;
    
    if(iNo > 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;
 
    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }
    
    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iDigCnt);
        iNo = iNo / 10;
    }
    if(iTemp == iSum)
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
    auto int iValue = 0;
    bool bRet = false;
    

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = ChkAmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is Amstrong number",iValue);
    }
    else
    {
        printf("%d is not Amstrong number",iValue);
    }
    
    return 0;
}