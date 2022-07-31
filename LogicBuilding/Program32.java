import java.lang.*;
import java.io.*;

class Program32
{
    public static void main(String arg[]) throws IOException
    {
        int iValue = 0;
        boolean bRet = false;

        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println("Enter number");
        iValue = Integer.parseInt(bobj.readLine());


        Factors fobj = new Factors();
        bRet = fobj.CheckPerfect(iValue);
        if(bRet == true)
        {
            System.out.println(iValue+" is perfect number");
        }
        else
        {   
            System.out.println(iValue+" is not perfect number");
        }
    }
}

class Factors
{
    public int SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt; 
            }
        }
        return iSum;
    }
    public boolean CheckPerfect(int iNo)
    {
        int iAns = 0;
        iAns = SumFactors(iNo);
        if(iAns == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}




// Time Complexity : O(N/2)

// O : order
// N : natural number