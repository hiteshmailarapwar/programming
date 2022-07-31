#include<iostream>
using namespace std;

void Display(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }
}

int main()
{
    char Arr[] = "Hello";
    int i = 0;

    Display(Arr);

    return 0;
}