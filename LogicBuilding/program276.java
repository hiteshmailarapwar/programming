
import java.util.*;

import java.io.*;

class program276 code vanishing errror
{
    public static void main(String args[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println(("Please enter existing file name"));
            String Filename = sobj.nextLine();
            
            File fobj= new File(Filename);

            System.out.println("Enter new file name to create");
            String newFile = sobj.nextLine();

            File fnewobj = new File(Filename);
            boolean bobj1 = fnewobj.createNewFile();

            if(fobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fobj);
                FileOutputStream foobj = new FileOutputStream(fnewobj);
                byte buffer[] = new byte[100];
                int ret = 0;

                while((ret = fiobj.read(buffer)) != -1)
                {
                    foobj.write(buffer,0,ret);
                }
            }
            else
            {
                System.out.println("There is no such file");
            }

        }
        catch(IOException e)
        {
            System.out.println(e);
        }

    }
}
