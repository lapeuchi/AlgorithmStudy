using System;


class Program
{
    static void Main(string[] args)
    {
        string[] n = Console.ReadLine().Split(' ');
        
        int a = int.Parse(n[0]);
        int b = int.Parse(n[1]);
        int c = int.Parse(n[2]);

        if (a == b && b == c)
        {
            Console.Write($"{10000 + a * 1000}");
            return;
        }
        else if (a == b || a == c)
        {
            Console.Write($"{1000 + a * 100}");
            return;
        }
        else if (b == c)
        {
            Console.Write($"{1000 + b * 100}");
            return;
        }
        else
        {
            int max = 0;
            if (a > b)
            {
                max = a;
                if (a < c)
                {
                    max = c;   
                }
            }
            else
            {
                max = b;
                if (b < c)
                {
                    max = c;
                }
            }

            Console.Write($"{max * 100}");

        }
    }
}
