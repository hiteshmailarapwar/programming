import java.util.*;

class Program357
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap<Character,Integer> hobj = new HashMap<>();
        int Frequency = 0;
        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch, Frequency + 1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }
        
        Set<Character> setobj = hobj.keySet();
        
        int iMax = 0;
        char c = ' ';

        for(char value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax  = hobj.get(value);
                c = value;
            }    
        }

        System.out.println(c + " occurs maximum number of times is " + iMax);

    }
}