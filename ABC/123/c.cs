using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long n = long.Parse(Console.ReadLine());
        List<long> l = new List<long>();
        for (int i = 0;i < 5; i ++) {
            l.Add(long.Parse(Console.ReadLine()));
        }
        long min = l.Min();
        long t = n / min + (n % min == 0 ? 0 : 1) + 4;
        Console.WriteLine(t);
    }
}