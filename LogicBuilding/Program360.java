import java.lang.*;
import java.util.*;

class Program360
{
    public static void main(String args[])
    {
        Student obj = new Student(11, "Hitesh", 10000);
        System.out.println(obj.RID);
        System.out.println(obj.Name);
    }
}

// create table student(RID int, Name varchar(255), Salary int);
// Database table / schema
class Student
{
    public int RID;
    public String Name;
    public int Salary;

    public Student(int no, String str, int value)
    {
        this.RID = no;
        this.Name = str;
        this.Salary = value;
    }
}

