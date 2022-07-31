import java.lang.*;
import java.util.*;
// 0000  0100  0000   0000  0000  0000  0000  0000
class Program181
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter number");
        int value = sobj.nextInt();
        
        Bitwise bobj = new Bitwise();
        int iRet = bobj.OnBit(value);

        System.out.println("Updated Number: "+iRet);
    }
}

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0x04000000;
        int iResult = 0;
        
        iResult = iNo | iMask;
        return iResult;
    }
}
