import java.util.*;

//  Input : 15675

/*
    1   5   6   7   5
    1   5   6   7   5
    1   5   6   7   5
    1   5   6   7   5
    1   5   6   7   5
*/

class Program343
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();

            for(int i = 0; i < Arr.length; i++)
            {
                for(int j = 0; j < Arr.length; j++)
                {
                    System.out.print(Arr[j]+"  ");
                }
                System.out.println();
            }
        }
}