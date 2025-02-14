using System;


public class Program
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split();
        long a = int.Parse(input[0]);
        long b = int.Parse(input[1]);

        Console.Write(Cal(a, b));
    }

    public static long Cal(long a, long b)
    {
        long re = (a + b) * (a - b);
        return re;
    }

}