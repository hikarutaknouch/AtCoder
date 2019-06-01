using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static int solve(int n, int k) {
        int ans = (n-1+k-2)/(k-1);
        return ans;
    }
}