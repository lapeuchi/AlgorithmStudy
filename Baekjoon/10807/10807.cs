using System;
using System.Collections.Generic;
using System.Collections;

public class Program
{

    public static void Main(string[] args)
    {
        
        int[] arr = new int[int.Parse(Console.ReadLine())];

        string[] s = Console.ReadLine().Split();

        int cnt = 0;

        int check = int.Parse(Console.ReadLine());

        for(int i = 0; i < s.Length; i++)
        {
            if (int.Parse(s[i]) == check)
                cnt++;
        }

        Console.WriteLine(cnt);
    }   
}