import java.lang.*;
import java.io.*;

class Program31
{
    public static void main(String arg[]) throws IOException
    {
        int iRet = 0;
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println("Enter number");
        int iValue = Integer.parseInt(bobj.readLine());

        SumFactors sobj = new SumFactors();
        iRet = sobj.sumFactor(iValue);
        System.out.println("Sum of factors is "+iRet);
    }
}

class SumFactors
{
    public int sumFactor(int iNo)
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
}