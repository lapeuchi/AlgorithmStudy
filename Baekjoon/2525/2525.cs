using System;

class Program
{
    static void Main(string[] args)
    {
        string[] n = Console.ReadLine().Split(' ');
        
        int a = int.Parse(n[0]);
        int b = int.Parse(n[1]);

        int c = int.Parse(Console.ReadLine());


        int min = b + c;

        int p = min / 60;
        min %= 60;
        a += p;
        a %= 24;

        Console.WriteLine($"{a} {min}");
    }
}
