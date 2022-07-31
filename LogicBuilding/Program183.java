import java.lang.*;
import java.util.*;
// 0000  0000  0000   0000  0000  0000  0100  1000
class Program183
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter number");
        int value = sobj.nextInt();
        
        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(value);

        System.out.println("Updated Number: "+iRet);
    }
}

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0x00000048;
        int iResult = 0;
        
        iResult = iNo ^ iMask;
        return iResult;
    }
}
