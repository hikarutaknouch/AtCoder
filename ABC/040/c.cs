using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(n,a));
    }
    static int solve(int n, int[] a) {
        int[] dp = new int[n];
        dp[0] = 0;
        dp[1] = Math.Abs(a[1]-a[0]);
        for(int i = 2; i < n; i ++) dp[i] = Math.Min(Math.Abs(a[i]-a[i-1])+dp[i-1], Math.Abs(a[i] - a[i-2])+dp[i-2]);
        return dp[n-1];
    }
}