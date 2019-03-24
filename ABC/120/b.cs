using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        List<int> result = new List<int>();
        for (int i = 1; i <= 100; i ++) {
            if (s[0] % i == 0 && s[1] % i == 0) result.Add(i);
        }
        result.Reverse();
        Console.WriteLine(result[s[2]-1]);
    }
}