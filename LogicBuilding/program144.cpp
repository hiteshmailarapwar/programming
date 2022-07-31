// Doubly Circular Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;

    public:
        DoublyCLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
}
void DoublyCLL::InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(Head == NULL && Tail == NULL)
    {
        Head = newn;
        Tail = newn;
        newn->next = Head;
        newn->prev = Tail;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Tail->next = newn;
        newn->prev = Tail;
        Head = newn;        
    }

}
void DoublyCLL::InsertLast(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(Head == NULL && Tail == NULL)
    {
        Head = newn;
        Tail = newn;
        newn->next = Head;
        newn->prev = Tail;
    }
    else
    {
        Tail->next = newn;
        newn->prev = Tail;
        newn->next = Head;
        Tail = newn;
    }
}
void DoublyCLL::InsertAtPos(int no, int iPos)
{
    int iSize = Count();
    if((iPos < 1) || (iPos > iSize+1))
    {
        cout<<"Invalid position !"<<endl;
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(no);
    }
    else
    {
        int iCnt = 0;
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = Head;                                                     
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
void DoublyCLL::DeleteFirst()
{
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head->next;
        Head->prev = Tail;
        delete Tail->next;
        Tail->next = Head;
    }  
}
void DoublyCLL::DeleteLast()
{
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Tail = Tail->prev;
        delete Tail->next;
        Tail->next = Head;
        Head->prev = Tail;
    }  
}
void DoublyCLL::DeleteAtPos(int iPos)
{
    int iSize = Count();

    if((iPos < 1) || (iPos > iSize))
    {
        cout<<"Invalid position!"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos > iSize)
    {
        DeleteLast();
     }
    else
    {
        PNODE temp1 = Head;
        PNODE temp2 = NULL;
        int iCnt = 0;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        delete temp2;       
    }
}
void DoublyCLL::Display()
{
    PNODE temp = Head;
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    do
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }while(temp != Head);
    cout<<endl;
}
int DoublyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if((Head == NULL) || (Tail == NULL))
    {
        return 0;
    }
    do
    {
        iCnt++;
        temp = temp->next;
    } while (temp->next != Head);

    return iCnt;
    
    return 0;
}

int main()
{
    DoublyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();

    obj.InsertAtPos(180,4);
    obj.Display();
    obj.DeleteAtPos(4);
    obj.Display();

    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();


    return 0;
}