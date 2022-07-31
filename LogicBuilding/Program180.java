import java.lang.*;
import java.util.*;
// 0000  0000  0000   0000  0000  0000  0000  1000
class Program180
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
        int iMask = 0x00000008;
        int iResult = 0;
        
        iResult = iNo | iMask;
        return iResult;
    }
}
