import java.lang.*;
import java.util.*;

class Program130
{
    public static void main(String arg[])
    {
        int iRet = 0;
        Number nobj = new Number();

        nobj.Accept();
        nobj.Diaplay();

        iRet = nobj.Factorial();
        System.out.println("Factorial is : "+iRet);
    }
}

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number :");
        this.iNo = sobj.nextInt();
        sobj.close();
    }

    public void Diaplay()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public int Factorial()
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt=1; iCnt <= iNo; iCnt++)
        {
            iFact*=iCnt; // iFact = iFact * iCnt;
        }
        return iFact;
    }
}
