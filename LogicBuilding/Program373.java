import java.lang.*;
import java.util.*;

class program373
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        /*dobj.InsertData("Piyush",1000);
        dobj.InsertData("Sakshi",3000);
        dobj.InsertData("Sachin",2000);
        dobj.InsertData("Suraj",10000);
        dobj.InsertData("Atharva",8000);
        dobj.InsertData("Supriya",9000);

        //dobj.DisplaySpecific(2);
        //dobj.DisplaySpecific("Piyush");

        //dobj.DeleteSpecific(2);
        //dobj.DeleteSpecific("Piyush");
        dobj.DisplayAll();

        dobj.AggregateMax();
        dobj.AggregateMin();

        dobj.AggregateSum();
        dobj.AggregateAvg();
        dobj.AggregateCount();*/

    }
}

// create table student(RID int, Name varchar(255), Salary int);
// Database table / schema
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


    // Select * from student
    // Insert into student Hitesh 20000
    // Select min salary from student
    // Select max salary from student
    // Select avg salary from student
    // Select sum salary from student
    // Select count from student
    //  Select * from student where RID = 1
    //  Select * from student where name = Hitesh
    public void StartDBMS()
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Marvellous customised DBMS started succesfully....");
        String Query = "";

        while(true)
        {
            System.out.print("Marvellous DBMS console >");
            Query = scanobj.nextLine();
            Query = Query.toLowerCase();

            String tokens[] = Query.split(" ");
            int QuerySize = tokens.length;

            if(QuerySize == 1)
            {
                if("help".equals(tokens[0]))
                {
                    System.out.println("This application is used to demonstrates the customised DBMS");
                    System.out.println("Terminate DBMS :                    exit");
                    System.out.println("Insert data :                       insert into student Student_name Student_salary");
                    System.out.println("Display all data :                  select * from student");
                    System.out.println("Display specific data by RID :      select * from student where RID = Student_RID");
                    System.out.println("Display specific data by Name :     select * from student where name = Student_Name");
                    System.out.println("Display count of all data :         select count from student");
                    System.out.println("Display minimum salary data :       select min salary from student");
                    System.out.println("Display maximum salary data :       select max salary from student");
                    System.out.println("Display summation of salary data :  select sum salary from student");
                    System.out.println("Display average of salary data :    select avg salary from student");
                }
                else if("exit".equals(tokens[0]))
                {
                    System.out.println("Thank you for using Marvellous DBMS");
                    break;
                }
            }
            else if(QuerySize == 2)
            {

            }
            else if(QuerySize == 4)
            {
                if("select".equals(tokens[0]))
                {
                    if("*".equals(tokens[1]))
                    {
                        DisplayAll();                    
                    }
                    else if("count".equals(tokens[1]))
                    {
                        AggregateCount();
                    }
                }
            }
            else if(QuerySize == 5)
            {
                if("insert".equals(tokens[0]))
                {
                    InsertData(tokens[3],Integer.parseInt(tokens[4]));
                }
                else if("select".equals(tokens[0]))
                {
                    if("min".equals(tokens[1]))
                    {
                        if("salary".equals(tokens[2]))
                        {
                            AggregateMin();
                        }
                    }
                    else if("max".equals(tokens[1]))
                    {
                        if("salary".equals(tokens[2]))
                        {
                            AggregateMax();
                        }
                    }
                    else if("avg".equals(tokens[1]))
                    {
                        if("salary".equals(tokens[2]))
                        {
                            AggregateAvg();
                        }
                    }
                    else if("sum".equals(tokens[1]))
                    {
                        if("salary".equals(tokens[2]))
                        {
                            AggregateSum();
                        }
                    }
                }
            }
            else if(QuerySize == 8)
            {
                if("select".equals(tokens[0]))
                {
                    if("*".equals(tokens[1]))
                    {
                        if("where".equals(tokens[4]))
                        {
                            if("rid".equals(tokens[5]))
                            {
                                if("=".equals(tokens[6]))
                                {
                                    DisplaySpecific(Integer.parseInt(tokens[7]));
                                }
                            }
                            else if("name".equals(tokens[5]))
                            {
                                DisplaySpecific(tokens[7]);
                            }
                        }
                    }
                }
            }

        }
    }

    // Insert into query
    public void InsertData(String str, int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    // Display all without condition
    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.DisplayData();
        }
    }

    // Display by RID
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

    // Display by name
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

    // Delete by RID
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

    // Delete by Name
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

    public void AggregateMax()
    {
        int iMax = 0;
        Student temp = null;

        for(Student sref : lobj)
        {
            if(sref.Salary > iMax)
            {
                iMax = sref.Salary;
                temp = sref;
            }
        }

        System.out.println("Information of student having maximum salary : ");
        temp.DisplayData();
    }

    public void AggregateMin()
    {
        int iMin = (lobj.getFirst()).Salary;
        Student temp = lobj.getFirst();

        for(Student sref : lobj)
        {
            if(sref.Salary < iMin)
            {
                iMin = sref.Salary;
                temp = sref;
            }
        }

        System.out.println("Information of student having minimum salary : ");
        temp.DisplayData();
    }

    public void AggregateSum()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }

        System.out.println("Summation of salaries is : "+ iSum);
    }

    public void AggregateAvg()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }

        System.out.println("Average salary is : "+ iSum / (lobj.size()));
    }

    public void AggregateCount()
    {
         System.out.println("Count is : "+lobj.size());
    }
}

