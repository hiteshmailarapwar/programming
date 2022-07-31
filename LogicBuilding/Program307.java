import java.io.*;
import java.util.*;

class Program307
{
    public static void main(String argd[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String newstr = str.replaceAll("\\s+"," ");
        String newstr2 = newstr.trim();
        
        String arr[] = newstr2.split(" ");

        int iMax = 0;
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i].length() > iMax)
            {
                iMax = arr[i].length();
            }
        }

        System.out.println("Length of Largest word is : "+iMax);


    }
}