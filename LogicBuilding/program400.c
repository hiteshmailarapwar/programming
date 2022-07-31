#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Summation(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE Head)
{
    int iMax = 0;
    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int Frequency(PNODE Head, int iNo)
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

void SumFactors(PNODE Head)
{
    int iCnt = 0;\
    int iNo = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        for(iCnt = 1,iSum = 0,iNo = Head->data; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        printf("%d : %d\n",Head->data,iSum);
        Head = Head->next;
    }
}

void DisplayPerfect(PNODE Head)
{
    int iCnt = 0;\
    int iNo = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        for(iCnt = 1,iSum = 0,iNo = Head->data; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == iNo)
        {
            printf("%d is perfect number\n",iNo);
        }
        Head = Head->next;
    }
}

void SumDigits(PNODE Head)
{

    while(Head != NULL)
    {
        
        Head = Head->next;
    }
}

int SearchFirstOccurence(PNODE Head, int iNo)
{
    
}

int SearchLastOccurence(PNODE Head, int iNo)
{
    int iPos = -1;
    int iCnt = 1;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iPos = iCnt;
        }
        iCnt++;
        Head = Head->next;
    }

    return iPos;
}

int MiddleElement(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }
    return Slow->data;
}

void Reverse(PPNODE Head)
{
    PNODE Previous = NULL;
    PNODE Current = *Head;
    PNODE Next = NULL;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }
    *Head = Previous;
}

bool CheckLoop(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;
    bool Flag = false;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Slow = Slow->next;
        Fast = Fast->next->next;

        if(Fast == Slow)
        {
            Flag = true;
            break;
        }
    }
    return Flag;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    bRet = CheckLoop(First);
    if(bRet == true)
    {
        printf("loop is there\n");
    }
    else
    {
        printf("loop is not there\n");
    }


    return 0;
}