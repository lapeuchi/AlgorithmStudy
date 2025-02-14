using System;


public class Program
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split();
        int[] password = new int[6];

        for (int i = 0; i < 5; i++)
        {
            password[i] = int.Parse(input[i]);
        }

        password[5] = Cal(password);
        Console.Write(password[5]);
    }

    public static int Cal(int[] pw)
    {
        int check =
            (int)(Math.Pow(pw[0], 2) +
            Math.Pow(pw[1], 2) +
            Math.Pow(pw[2], 2) +
            Math.Pow(pw[3], 2) +
            Math.Pow(pw[4], 2)) % 10;

        return check;
    }

}
