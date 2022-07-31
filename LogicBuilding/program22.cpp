            #include<iostream>
            using namespace std;

            class Summation
            {
                public:
                    
                int summation(int iNo)
                {
                    int iCnt = 0;
                    int iSum = 0;

                    if(iNo < 0)
                    {
                        iNo = -iNo;
                    }

                    for(iCnt = 1; iCnt <= iNo; iCnt++)
                    {
                        iSum = iSum + iCnt;       
                    }
                    return iSum;
                }
            };

            /////////////////////////////////////////////////////

            int main()
            {   
                int iValue = 0;
                int iRet = 0;

                cout<<"Enter number\n";
                cin>>iValue;
                Summation obj;

                iRet = obj.summation(iValue);
                cout<<"Summation of is : "<<iRet<<"\n";
                return 0;
            }