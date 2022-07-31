import java.util.*;

class Program348
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        long iNo = sobj.nextLong();

        long iMask = 0xf000000f;
        long iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First nibble and last nibble is completely ON");
        }
        else
        {
            System.out.println("First nibble or last nibble is OFF");
        }
    }
}