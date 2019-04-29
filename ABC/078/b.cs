using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0],s[1],s[2]));
    }
    static int solve(int x, int y, int z) {
        x -= z;
        return x/(y+z);
    }
}