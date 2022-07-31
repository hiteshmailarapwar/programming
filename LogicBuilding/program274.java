
import java.util.*;

import java.io.*;

class program274
{
    public static void main(String args[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println(("Please enter file name"));
            String Filename = sobj.nextLine();
            
            File fobj= new File(Filename);

            if(fobj.exists())
            {

                BufferedReader bobj = new BufferedReader(new FileReader(fobj));
                String str;

                while((str = bobj.readLine()) != null)
                {
                    System.out.println(str);
                }
            }
            else
            {
                System.out.println("There is no such file");
            }

        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
}
