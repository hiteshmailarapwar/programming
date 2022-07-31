import java.util.*;

class Program351
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();
        int iResult = 0;
        int iCnt = 0;
        int iMask = 0x00000001;

        for(int i = 1; i <= 32; i++)
        {
            iResult = iNo & iMask;
            if(iResult == iMask)
            {
                iCnt++;
            }
            iMask = iMask << 1;
        }
        System.out.println("Number ON bits are: "+iCnt);

    }
}