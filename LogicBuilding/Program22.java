import java.lang.*;

class Program22
{
    public static void main(String arg[])
    {  
        int iRet = 0; 
        Summation obj = new Summation();
        iRet = obj.summation(4);

        System.out.println("Summation is " + iRet);
    }

}

//////////////////////////////////////////////

class Summation
{       
    public int summation(int iNo)
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
}

/////////////////////////////////////////////////////

