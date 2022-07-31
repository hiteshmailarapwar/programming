import java.util.*;

//  Input : Hello

/*
    H   e   l   l   o
    H   e   l   l
    H   e   l
    H   e  
    H 
*/

class Program339
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string");
            String str = sobj.nextLine();
            
            char Arr[] = str.toCharArray();

            for(int i = Arr.length-1; i >= 0; i--)
            {
                for(int j = Arr.length; j >= i; j++)
                {
                    System.out.print(Arr[j] + "  ");
                }
                System.out.println();
            }
        }
}