using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(Math.Min(a.Where(x => x < s[2]).Count(), a.Where(x => x > s[2]).Count()));
    }
}