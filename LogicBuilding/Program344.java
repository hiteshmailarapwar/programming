import java.util.*;

//  Input : 15675

/*
    1   5   6   7   5
    1   5   6   7   
    1   5   6 
    1   5   
    1  
*/

class Program344
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();

            for(int i = Arr.length-1; i >= 0 ; i--)
            {
                for(int j = 0; j <= i; j++)
                {
                    System.out.print(Arr[j]+"  ");
                }
                System.out.println();
            }
        }
}