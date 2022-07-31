import java.io.*;
import java.util.*;

class Program303
{
    public static void main(String argd[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String arr[] = str.split(" ");

        System.out.println("Number of words are : "+arr.length);


    }
}