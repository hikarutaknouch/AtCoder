using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] s = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static long solve(long x, long y) {
        List<long> a = new List<long>();
        while(x <= y) {
            a.Add(x);
            x *= 2;
        }
        return a.Count();
    }
}