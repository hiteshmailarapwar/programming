import java.lang.*;
import java.io.*;

class Program29
{
    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println("Enter number");
        int iValue = Integer.parseInt(bobj.readLine());

        DisplayFactors dobj = new DisplayFactors();
        dobj.factors(iValue);

    }
}

class DisplayFactors
{
    public void factors(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }

}







// Time Complexity : O(N/2)

// O : order
// N : natural number