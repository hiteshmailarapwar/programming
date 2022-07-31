// Input : Row 4    Columns 4
// Outpu :   
/*   
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/



#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    //     1       2       3
    for(i = 1; i <= iRow; i++)  // Outer
    {
        //   1        2       3
       for(j = 0; j <= iCol; j++)   // Inner // 4
       {
           printf("*\t");   // 4
       }
       printf("\n");
    }
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}