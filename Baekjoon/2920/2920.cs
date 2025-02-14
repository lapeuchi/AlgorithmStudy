using System;


public class Program
{
    

    public static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split();

        bool isAcending = false;
        bool isdescending = false;

        for (int i = 0; i < 8; i++)
        {
            int cur = int.Parse(input[i]);
            if (i + 1 == cur)
            {
                //Console.WriteLine("Acending cur: " + cur) ;
                isAcending = true;
            }
            else if (9 - cur == i + 1)
            {
                //Console.WriteLine("Descending cur: " + cur);
                isdescending = true;
            }
            else
            {
                isAcending = false;
                isdescending = false;
                break;
            }
                
            
        }

        if (isAcending && !isdescending) Console.WriteLine("ascending");
        else if (isdescending && !isAcending) Console.WriteLine("descending");
        else Console.WriteLine("mixed");
    }
}