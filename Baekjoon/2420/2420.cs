using System;

class Program
{
    static void Main(string[] args)
    {
        string [] s = Console.ReadLine().Split();
        long n = long.Parse(s[0]);
        long m = long.Parse(s[1]);
        Console.WriteLine(Math.Abs(n - m));
    }
}
