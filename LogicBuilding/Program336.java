import java.util.*;

//  Input : Hello

/*
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
*/

class Program336
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string");
            String str = sobj.nextLine();
            
            char Arr[] = str.toCharArray();

            for(int i = 0; i < Arr.length; i++)
            {
                for(int j = 0; j < Arr.length; j++)
                {
                    System.out.print(Arr[j] + "  ");
                }
                System.out.println();
            }
        }
}