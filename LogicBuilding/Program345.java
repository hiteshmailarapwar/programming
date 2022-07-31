import java.util.*;

//  Input : 15675

/*
    1   5   6   7   5
    1   5   6   7   
    1   5   6 
    1   5   
    1  
*/

class Program345
{
        public static void main(String args[])
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            int iNo = sobj.nextInt();

            int iSum = 0;
            while(true)
            {
                while(iNo != 0)
                {
                    iSum = iSum + (iNo % 10);
                    iNo = iNo / 10;
                }
                iNo = iSum;
                iSum = 0;
                if(iSum < 10)
                {
                    break;
                }
            }
            System.out.println(iNo);
        }
}