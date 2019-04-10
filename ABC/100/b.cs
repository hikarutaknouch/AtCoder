using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        double ans = Math.Pow(100, s[0]);
        Console.WriteLine(ans * s[1]);
    }
}