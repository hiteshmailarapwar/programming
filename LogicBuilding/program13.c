// Program to display 5 times Hello on screem

#include<stdio.h>

// Dmonstration of SEQUENCE
void Display()
{
    int iCnt = 0;

//  1   Initialazation
//  2   Condition
//  3   Displacement
//  4   Loop body

//          1         2         3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Hello\n");  // 4
    }      
}

/*
    1   
    2   4   3
    2   4   3
    2   4   3
    2   4   3
    2   4   3
    2
*/

int main()
{ 
    Display();

    return 0;
}
