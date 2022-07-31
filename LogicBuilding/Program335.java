import java.util.*;

import MarvellousMatrix.Matrix;

class Program335
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();
        
        mobj.SwapRow();
        System.out.println("Data after swapping is :");
        mobj.Display();
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int a, int b)
    {
        super(a, b);
    }

    public void SwapRow()
    {
        int iTemp = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol-1; j+=2)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i][j+1];
                Arr[i][j+1] = iTemp;
            }
        }
    }

}

