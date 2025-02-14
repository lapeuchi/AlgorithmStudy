using System;

class Program {
    static void Main(string[] args) 
    {
        string stringInput = Console.ReadLine();

        string[] arrayInput = stringInput.Split(' ', StringSplitOptions.None);
        
        long[] intResult = new long[3] {0, 0, 0};

        for (int i = 0; i < 3; i++) 
        {
            intResult[i] = System.Convert.ToInt64(arrayInput[i]);
        }

        long total = 0;
        for (int i = 0; i < 3; i++) 
        {
            total += intResult[i];
        }

        Console.WriteLine(total);
    }
}