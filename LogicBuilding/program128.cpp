#include<iostream>
using namespace std;

class Number
{
    public:
    int Factorial(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt=1; iCnt <= iNo; iCnt++)
        {
            // iFact = iFact * iCnt;
        }
        return iFact;
    }
};

int main()
{
    Number obj;

    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number :\n";
    cin>>iValue;

    iRet = obj.Factorial(iValue);

    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}