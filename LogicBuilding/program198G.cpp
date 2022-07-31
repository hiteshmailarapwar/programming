#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int size)
{
    int i = 0;
    T Max = Arr[0];
    for(i = 0; i < size; i++)
    {
        if(Arr[i] > max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Brr[] = {10,20,60,40,50};
    int iret = Maximum(Brr,5);
    cout<<iret<<endl;

    char cret = '\0';
    char Crr[] = {'a','x','c','f','e'};
    cret = Maximum(Crr,5);
    cout<<cret<<endl;

    return 0;
}