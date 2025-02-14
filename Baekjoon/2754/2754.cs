using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

public class Program
{
    enum Rank { F, D, C, B, A }
    static void Main(string[] args)
    {
        float score = 0.0f;

        string rank = Console.ReadLine();

        score += (int)Enum.Parse(typeof(Rank), rank[0].ToString());

        if (score != 0)
        {
            if (rank[1] == '+')
            {
                score += 0.3f;
            }
            else if (rank[1] == '-')
            {
                score -= 0.3f;
            }
        }
        
        Console.Write(string.Format("{0:F1}", score));
    }
}
