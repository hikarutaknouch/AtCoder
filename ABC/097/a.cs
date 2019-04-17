using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s) ? "Yes" : "No");
    }
    static bool solve(int[] s) {
        return Math.Abs(s[2]-s[0]) <= s[3] || (Math.Abs(s[1]-s[0]) <= s[3] && Math.Abs(s[2]-s[1]) <= s[3]);
    }
}