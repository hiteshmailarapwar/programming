#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements in linked-list are :\n");
    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}                

int Count(PNODE head)
{
    int iCnt = 0;
    
    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;
}                

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        
    }
}

void InsertAtPos(PPNODE head, int no, int pos)
{
    int iSize = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*head);

    if((pos < 1) || (pos > iSize+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head, no);
    }
    else if(pos == iSize+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn ->data = no;
        newn ->next = NULL;

        temp = *head;
        for(iCnt = 1; iCnt < (pos-1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head,int pos)
{
    int iSize = 0, iCnt = 0;
    PNODE temp = NULL, tempDel = NULL;

    iSize = Count(*head);

    if((pos < 1) || (pos > iSize))
    {
        printf("Invalid position!\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == iSize)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        tempDel = temp->next;
        temp->next = temp->next->next;
        free(tempDel);
    }
}

int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first, 101);
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    InsertLast(&first, 151);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    InsertAtPos(&first,60,3);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    DeleteAtPos(&first,3);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LL are : %d\n",iRet);

    return 0;
}