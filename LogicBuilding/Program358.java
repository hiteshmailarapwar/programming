import java.util.*;

class Program358
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        HashMap<String,Integer> hobj = new HashMap<>();
        int Frequency = 0;
        for(String ch : Arr)
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
        
        Set<String> setobj = hobj.keySet();
        
        int iMax = 0;
        String word = " ";

        for(String value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax  = hobj.get(value);
                word = value;
            }    
        }

        System.out.println(word + " word occurs maximum number of times is " + iMax);

    }
}