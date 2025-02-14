using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

public class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();

        int i = int.Parse(Console.ReadLine());

        Console.Write(s[i-1]);
    }
}
