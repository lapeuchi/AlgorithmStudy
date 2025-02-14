using System;


public class Program
{

    static void Main(string[] args)
    {
        int[] arr = new int[26];

        string input = Console.ReadLine();
        input = input.ToUpper();
        
        int max = 0;

        for(int i = 0; i < input.Length; i++)
        {
            arr[(input[i] - 65)]++;
        }

        for (int i = 0; i <arr.Length; i++)
        {
            //Console.WriteLine($"{(char)(i+65)}: {arr[i]}");
            if(arr[i] >= max)
            {
                max = arr[i];
            }
        }

        //Console.WriteLine("max: " + max);
        bool check = false;
        char a = '?';
        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == max)
            {
                if(!check)
                {
                    a = (char)(i + 65);
                    check = true;
                    continue;
                }
                else
                {
                    a = '?';
                    break;
                }
                
            }
        }

        Console.WriteLine(a);

    }


}
