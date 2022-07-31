import java.util.*;

class Program349
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();
        
        System.out.println("Enter starting point");
        int  iStart = sobj.nextInt();

        System.out.println("Enter ending point");
        int iEnd = sobj.nextInt();

        int iMask1 = 0xffffffff;
        int iMask2 = 0xffffffff;
        int iMask = 0;

        iMask1 = iMask1 << (iStart - 1);
        iMask2 = iMask2 >> (32 - iEnd);

        iMask = iMask1 & iMask2;
        System.out.println(iMask);
        int iResult = 0;
        iResult = iNo & iMask;
        if(iResult == iNo)
        {
            System.out.println("Bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}