using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(s[2]-s[0]>=0 && s[2]-s[0]<=s[1] ? "YES" : "NO");
    }
}