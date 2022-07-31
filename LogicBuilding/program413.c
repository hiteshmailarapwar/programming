#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    temp = *Head;
    if(*Head == NULL)  // BST empty
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)    // R
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)   // L
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(iNo == temp->data)  // Duplicate
            {
                free(newn);
                printf("Data is already there in BST\n");
                break;
            }
        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d ",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d ",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d ",Head->data);
    }
}

bool Search(PNODE Head, int iNo)
{
    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            break;
        }
        else if(iNo > Head->data)
        {
            Head = Head->rchild;
        }
        else if(iNo < Head->data)
        {
            Head = Head->lchild;
        }
    }
    if(Head == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);


    printf("\nInorder data\n");
    Inorder(First);

    printf("\nPreorder data\n");
    Preorder(First);

    printf("\nPostorder data\n");
    Postorder(First);

    bRet = Search(First,7);
    if(bRet == true)
    {
        printf("Element is there in tree");
    }
    else
    {
        printf("Element is not there in tree");
    }

    return 0;
}