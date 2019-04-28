using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] v = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] c = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] l = new int[n];
        for(int i = 0; i < n; i ++) l[i] = v[i] - c[i];
        Console.WriteLine(Math.Max(0, l.Where(x => x > 0).Sum()));
    }
}