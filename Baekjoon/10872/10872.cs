using System;
using System.Collections.Generic;
using System.Collections;

public class Program
{

    public static void Main(string[] args)
    {
        int i = int.Parse(Console.ReadLine());
        int sum = 1;
        
        while (i > 1)
        {
            sum *= i;
            i--;
        }

        Console.Write(sum);
    }   
}