package MarvellousMatrix;

import java.util.*;

public class Matrix
{
    public int Arr[][];
    public int iRow;
    public int iCol;

    public Matrix(int rows, int cols)
    {
        this.iRow = rows;
        this.iCol = cols;

        Arr = new int[rows][cols];
    }

    protected void finalize()
    {
        Arr = null;
        System.gc();
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the data");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are :");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"  ");
            }
            System.out.println();
        }
    }
}