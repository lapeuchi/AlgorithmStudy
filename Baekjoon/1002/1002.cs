using System;


class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            int[] coord = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            int a = coord[3] - coord[0];
            int b = coord[4] - coord[1];

            int distance = a * a + b * b;

            if (coord[0] == coord[3] && coord[1] == coord[4] && coord[2] == coord[5])
                Console.WriteLine(-1);

            else if (distance > Math.Pow(coord[2] + coord[5], 2))
                Console.WriteLine(0);

            else if (distance < Math.Pow(coord[5] - coord[2], 2))
                Console.WriteLine(0);

            else if (distance == Math.Pow(coord[5] - coord[2], 2))
                Console.WriteLine(1);

            else if (distance == Math.Pow(coord[5] + coord[2], 2))
                Console.WriteLine(1);

            else
                Console.WriteLine(2);
        }
    }
}
