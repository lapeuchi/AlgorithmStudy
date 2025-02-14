using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

public class Program
{

    public static void Main(string[] args)
    {
        StringBuilder str = new StringBuilder(Console.ReadLine());
        
        
        for(int i = 0; i < str.Length; i++)
        {
            
            if(char.IsLetter(str[i]))
            {
                if (char.IsUpper(str[i]))
                {
                    str[i] = char.ToLower(str[i]);
                }
                else
                {
                    str[i] = char.ToUpper(str[i]);
                }
            }
            
        }

        Console.WriteLine(str);

    }   
}
