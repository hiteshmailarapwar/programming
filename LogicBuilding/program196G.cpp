#include<iostream>
using namespace std;

template <class T>
T Addition(T A, T B)
{
    T Ans;
    Ans = A + B;
    return Ans;
}

int main()
{
    int ret = 0;
    int No1 = 11, No2 = 21;
    ret = Addition(No1, No2);
    cout<<"Addition is : "<<ret<<endl;

    float fRet = 0.0;
    float fNo1 = 11.01, fNo2 = 21.02;
    fRet = Addition(fNo1, fNo2);
    cout<<"Addition is : "<<fRet<<endl;

    return 0;
}