import java.lang.*;
import java.util.*;

class Program363
{
    public static void main(String args[])
    {
        DBMS dobj = new DBMS();
        dobj.StartDBMS();
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

    public Student(int no, String str, int value)
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
    LinkedList<Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList<>();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous customized DBMS started succefully...");
        
    }
}

