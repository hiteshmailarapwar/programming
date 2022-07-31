#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE; 
typedef struct node * PNODE; 
typedef struct node ** PPNODE;

void Display(PNODE head)
{
    printf("Data from LL :\n");
    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
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

void InsertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    } 
}

void InsertLast(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
    }

}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL)
    {
        return;
    }
    

    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }

    if((*head)->next == NULL)
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

void InsertAtPos(PPNODE head, int iNo, int iPos)
{
    int iSize = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*head); 

    if((iPos < 1) || (iPos > (iSize+1)))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(head,iNo);
    }
    else if(iPos == (iSize+1))
    {
        InsertLast(head,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE head, int iPos)
{
    int iSize = 0, iCnt = 0;
    PNODE temp = NULL;

    iSize = Count(*head); 

    if((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(head);
    }
    else if(iPos == (iSize))
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,20);
    InsertFirst(&first,10);

    InsertLast(&first,30);
    InsertLast(&first,40);

    InsertAtPos(&first,25,3);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in Linked List are : %d\n",iRet);

    DeleteAtPos(&first,3);
    
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in Linked List are : %d\n",iRet);


    DeleteFirst(&first);
    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in Linked List are : %d\n",iRet);

    return 0;
}