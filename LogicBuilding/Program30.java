import java.lang.*;
import java.io.*;

class Program30
{
    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println("Enter number");
        int iValue = Integer.parseInt(bobj.readLine());

        DisplayNonFactors dobj = new DisplayNonFactors();
        dobj.nonFactors(iValue);
    }
}

class DisplayNonFactors
{
    public void nonFactors(int iNo)
    {
        int iCnt = 0;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}