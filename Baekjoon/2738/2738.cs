using System;
using System.Collections.Generic;
using System.Collections;

public class Program
{

    public static void Main(string[] args)
    {
        string[] str = Console.ReadLine().Split();

        int n = int.Parse(str[0]);
        int m = int.Parse(str[1]);

        int[,] a = new int[n, m];
        int[,] b = new int[n, m];

        for (int i = 0; i < n; i++)
        {
            string[] row = Console.ReadLine().Split();
            for (int j = 0; j < m; j++)
            {
                a[i, j] = int.Parse(row[j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            string[] row = Console.ReadLine().Split();
            for (int j = 0; j < m; j++)
            {
                b[i, j] = int.Parse(row[j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                Console.Write(a[i,j]+b[i,j]+" ");
            }
            Console.WriteLine();
        }
    }   
}

