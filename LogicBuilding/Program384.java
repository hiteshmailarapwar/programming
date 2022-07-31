import java.util.*;

import javax.swing.text.html.HTMLDocument.RunElement;

class Program384
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();

        Searching aobj = new Searching(size);
        aobj.Accept();
        aobj.Display();

        System.out.println("Enter the element that you want to search");
        int iValue = sobj.nextInt();

        int iRet = aobj.BiDirectionalSearch(iValue);
        if(iRet == -1)
        {
            System.out.println("There is no such element");
        }
        else
        {
            System.out.println("Element is there in the array at index : "+iRet);
        }
    }
}

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void finilize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements from array are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class Searching extends Array
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public int BiDirectionalSearch(int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iPos = -1;
        while(iStart <= iEnd)
        {
            if((Arr[iStart]) == iNo)
            {
                iPos = iStart;
                break;
            }
            if((Arr[iEnd]) == iNo)
            {
                iPos = iEnd;
                break;
            }
            iStart++;
            iEnd--;
        }
        return iPos;
    }

    public int LinearSearch(int iNo)
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                break;
            }
        }
        if(i == Arr.length)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }

    public int BinarySearch(int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int middle = 0;

        while(iStart <= iEnd)
        {
            middle = (iStart + iEnd)/2;

            if(Arr[middle] == iNo)
            {
                break;
            }
            if(iNo > Arr[middle])
            {
                iStart = middle +1;
            }
            if(iNo < Arr[middle])
            {
                iEnd = middle -1;
            }
        }

        if(Arr[middle] == iNo)
        {
            return middle;
        }
        else
        {
            return -1;
        }
    }
}
