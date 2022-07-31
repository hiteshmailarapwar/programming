#include"Header146.h"

int main()
{
    int iRet =0;
    DoublyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    obj.Count();
    cout<<"No of Nodes are : "<<endl;

    
    return 0;
}