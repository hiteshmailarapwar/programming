import java.lang.*;
import java.util.*;
// 0000  0000  0000   0000  0000  0000  0000  0000
class Program184
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter number");
        int value = sobj.nextInt();

        System.out.println("Enter position");
        int pos = sobj.nextInt();
       
        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(value, pos);

        System.out.println("Updated Number: "+iRet);
    }
}

class Bitwise
{
    public int ToggleBit(int iNo, int iPos)
    {
        if((iPos <= 0) || (iPos > 32))
        {
            System.out.println("Invalid position");
            return 0;
        }
        
        int iMask = 0x00000001;
        int iResult = 0;
        
        iMask = iMask << (iPos-1);
        
        iResult = iNo ^ iMask;
        return iResult;
    }
}
