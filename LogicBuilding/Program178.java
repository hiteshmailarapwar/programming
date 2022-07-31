import java.lang.*;
import java.util.*;
// 0000  0000  0000   0000  0000  0000  0000  0000
class Program178
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter number");
        int value = sobj.nextInt();
        
        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.CheckBit(value);

        if(bRet == true)
        {
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }
    }
}

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x00100000, iResult = 0;

        iResult = iNo & iMask;
        
        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
