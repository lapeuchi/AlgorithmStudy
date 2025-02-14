using System;
using System.Collections.Generic;
using System.Collections;

class Program
{
    static void Main(string[] args)
    {
        int N = Convert.ToInt32(Console.ReadLine());

        int n = 0;
        int m = 0;
           
        // 오름
        for(int i = 1; i <= N; i++)
        {
            n = N - i; // 공백 길이
            m = (N - 1) + i; // 가로 길이
            for(int j = 0; j < m; j++)
            {
                if (j < n)
                {
                    Console.Write(" ");
                }
                else
                {
                    Console.Write("*");
                }
            }
            Console.WriteLine();
        }

        // 내림
        for (int i = 1; i < N; i++)
        {
            m--;
            n = i - 1;
            for (int j = 0; j < m; j++)
            {
                if (j <= n)
                {
                    Console.Write(" ");
                }
                else
                {
                    Console.Write("*");
                }
            }
            if (i != N-1)
            Console.WriteLine();
        }
    }
}
