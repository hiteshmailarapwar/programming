import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program277
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter directory name");
            String folderename= sobj.nextLine();

            File dobj = new File(folderename);

            File allfiles[] = dobj.listFiles();

            for(int i = 0; i < allfiles.length; i++)
            {
                System.out.println(allfiles[i].getName());
            }


        }
        catch(IOException obj)
        {
            System.out.println(obj);
        }
    }
}