
import java.util.*;
import java.io.*;

class program272
{
    public static void main(String args[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println(("Please enter file name"));
            String Filename = sobj.nextLine();
            
            File fobj= new File(Filename);
            boolean bobj = fobj.createNewFile();


            if(bobj == true)
            {
                System.out.println("File created successfully");
            }
            else
            {
                System.out.println("File is already esisting");
            }
        }
        catch(IOException e)
        {
            System.out.println(e);
        }

    }
}
