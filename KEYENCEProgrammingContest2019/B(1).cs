using System;
using System.Diagnostics;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        string s = Console.ReadLine();

        for (int i = 0; i < s.Length - 1; i++)
        {
            for (int j = 0; j <= s.Length - i; j++)
            {
                if(s.Remove(i, j) == "keyence")
                {
                    Console.WriteLine("YES");
                    return;
                }
            }
        }
        Console.WriteLine("NO");
    }
}
