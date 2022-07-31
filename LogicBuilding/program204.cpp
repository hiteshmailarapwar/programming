#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T> *next;
};

////////////////////////////////////////////////////////////////////////
//
//  Singly Linear Linked List
//
//////////////////////////////////////////////////////////////////////
template<class T>
class SinglyLL
{
    public:
        struct node<T> *Head;
        int Count;

        SinglyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int CountNode();


};

template<class T>
SinglyLL<T>::SinglyLL()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = value;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = value;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        struct node<T> *temp = Head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T value, int iPos)
{
    int iSize = CountNode();
    if((iPos < 1) || (iPos > iSize+1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(value);
    }
    else if(iPos > iSize)
    {
        InsertLast(value);
    }
    else
    {
        struct node<T> *newn = NULL;
        newn = new node<T>;

        newn->data = value;
        newn->next = NULL;

        struct node<T> *temp = Head;
        int iCnt = 0;
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;        
    }
    Count++;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
    if(Head == NULL)
    {
        return;
    }

    int iSize = CountNode();
    if(iSize == 1)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        struct node<T> *temp = Head;
        Head = Head->next;
        delete temp;
    }
    Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
    if(Head == NULL)
    {
        return;
    }

    int iSize = CountNode();
    if(iSize == 1)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        struct node<T> *temp = Head;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int iSize = CountNode();
    if((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp1 = Head;
        struct node<T> *temp2 = NULL;
        int iCnt = 0;
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
    Count--;
}

template<class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements from Linked List are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
    return Count;
}

int main()
{
    SinglyLL <int>obj1;
    SinglyLL <float>obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    // obj1.InsertAtPos(75,4);
    obj1.Display();
    
    int iRet = obj1.CountNode();
    cout<<"Nodes in Linked list are : "<<iRet<<endl;

    // obj1.DeleteAtPos(4);
    // obj1.Display();
    
    // iRet = obj1.CountNode();
    // cout<<"Nodes in Linked list are : "<<iRet<<endl;



    obj2.InsertFirst(5.1);
    obj2.InsertFirst(2.1);
    obj2.InsertFirst(1.1);
    obj2.InsertLast(10.1);
    obj2.InsertLast(11.1);
    // obj2.InsertAtPos(75.22,4);
    // obj2.Display();


    return 0;
}