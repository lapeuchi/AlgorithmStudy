using System;
using System.Collections.Generic;
using System.Collections;

public class Program
{

    public static void Main(string[] args)
    {
        bool[] arr = new bool[30];

        for (int i = 0; i < 28; i++)
        {
            int a = int.Parse(Console.ReadLine());
            arr[a-1] = true;
        }

        for (int i = 0; i < 30; i++)
        {
            if (arr[i] == false)
                Console.WriteLine(i+1);
            
        }
    }   
}