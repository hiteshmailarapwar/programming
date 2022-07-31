import java.util.*;

//  Input : Hello

/*
    H   
    H   e   
    H   e   l   
    H   e   l   l
    H   e   l   l   o
    H   e   l   l
    H   e   l
    H   e  
    H
*/

class Program340f
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string");
            String str = sobj.nextLine();
            
            char Arr[] = str.toCharArray();

            for(int i = 0; i < Arr.length; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    System.out.print(Arr[j] + "  ");
                }
                System.out.println();
            }

            for(int i = Arr.length; i >= 0; i--)
            {
                for(int j = 0; j <= i; j++)
                {
                    System.out.print(Arr[j] + "  ");
                }
                System.out.println();
            }
        }
}