import java.lang.*;
import java.util.*;

class Program362
{
    public static void main(String args[])
    {
        Student obj1 = new Student(11, "Piyush", 10000);
        Student obj2 = new Student(11, "Shantanu", 20000);
        Student obj3 = new Student(11, "Vishal", 35000);
        Student obj4 = new Student(11, "Shubham", 165000);
        
        obj1.DisplayData();
        obj2.DisplayData();
        obj3.DisplayData();
        obj4.DisplayData();
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

