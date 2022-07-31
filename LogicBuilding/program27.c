// 1    4000
// 2    8000
// 5    20000
// 10   40000

#include<stdio.h>

void JwelersPortal(int iWeight)
{
    switch (iWeight)
    {
    case 1:
        printf("Your bill amount is 4000\n");
        break;
    
    case 2:
        printf("Your bill amount is 8000\n");
        break;
    
    case 5:
        printf("Your bill amount is 20000\n");
        break;
    
    case 10:
        printf("Your bill amount is 40000\n");
        break;
    
    default:
        printf("Invalid weight\n");
        break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the gold coin size(in grams) that you want to purchase\n");
    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}