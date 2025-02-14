using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

public class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());

        for(int i = 0; i < t; i++)
        {
            string str = Console.ReadLine();
            Console.WriteLine(str[0] + str[str.Length-1].ToString());
        }
    }
}
