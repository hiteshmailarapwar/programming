import java.lang.*;
import java.util.*;

class Program366
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();
        dobj.InsertData("Piyush",1000);
        dobj.InsertData("Sakshi",2000);
        dobj.InsertData("Sachin",3000);

        dobj.DisplayAll();
        dobj.DeleteSpecific(2);
        dobj.DeleteSpecific("Piyush");
        dobj.DisplayAll();
    }
}

class Student
{
    public int RID;
    public String Name;
    public int Salary;

    private static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String str, int value)
    {
        this.RID = ++Generator;
        this.Name = str;
        this.Salary = value;
    }

    public void DisplayData()
    {
        System.out.println(this.RID + "\t" + this.Name + "\t" + this.Salary);
    }
}

class DBMS
{
   public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList<>();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous customised DBMS started succesfully....");
    }

    public void InsertData(String str, int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    // Display all elements
    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.DisplayData();
        }
    }

    // Display by rid
    public void DisplaySpecific(int rid)
    {
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.DisplayData();
                break;
            }
        }
    }

    //  Display by name
    public void DisplaySpecific(String str)
    {
        for(Student sref : lobj)
        {
            if(str.equals(sref.Name))
            {
                sref.DisplayData();
            }
        }
    }

    //  Delete by rid
    public void DeleteSpecific(int rid)
    {
        int index = 0;
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    // Delete by name
    public void DeleteSpecific(String str)
    {
        int index = 0;
        for(Student sref : lobj)
        {
            if(str.equals(sref.Name))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }
}
