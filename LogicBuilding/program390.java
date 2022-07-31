import java.lang.*;
import java.util.*;

class program390
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of array : ");
            int size = sobj.nextInt();

            Array aobj = new Array(size);
            aobj.Accept();
            aobj.Display();

            aobj.BubbleSort();
            System.out.println("Data after sorting");
            aobj.Display();

    }
}

interface MarvellousSort
{
    public void Accept();
    public void Display();
    public void BubbleSort();
    public void InsertionSort();
    public void SelectionSort();
}

class Array implements MarvellousSort
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements from the array are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"  ");
        }
        System.out.println();
    }

    public void BubbleSort(char type)
    {
        int i = 0, j = 0, temp = 0;
        
        boolean Swap = false;
        
        if(type == 'I' || type == 'i')
        for(i = 0; i < Arr.length; i++)
        {
            Swap = false;
            for(j = 0; j < Arr.length-i-1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    Swap = true;
                }
            }

            System.out.print("Pass : "+(i+1));
            Display();
            if(Swap == false);
            {
                break;
            }
        }


    }

    public void InsertionSort()
    {
        int i, j, key;

        for(i = 1; i < Arr.length; i++)
        {
            key = Arr[i];
            j = i - 1;

            while(j >= 0 && Arr[j] > key)
            {
                Arr[j+1] = Arr[j];
                j = j - 1;
            }
            Arr[j+1] = key;
        }
    }

    public void SelectionSort()
    {
        int i = 0, j = 0;
        int index_of_min = 0;

        for(i = 0; i < Arr.length; i++)
        {
            index_of_min = i;
            for(j = i; j < Arr.length; j++)
            {
                if(Arr[index_of_min] > Arr[j])
                {
                    index_of_min = j;
                }
            }
            int temp = Arr[i];
            Arr[i] = Arr[index_of_min];
            Arr[index_of_min] = temp;
        }
    }

    @Override
    public void BubbleSort() {
        // TODO Auto-generated method stub
        
    }
}
