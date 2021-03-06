using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] h = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(dp(n,h)[n-1]);
    }
    static int[] dp(int n, int[] h) {
        int[] dp = new int[n];
        dp[0] = 0;
        dp[1] = Math.Abs(h[1]-h[0]);
        for(int i = 2; i < n; i ++) {
            dp[i] = Math.Min(Math.Abs(h[i]-h[i-1])+dp[i-1], Math.Abs(h[i]-h[i-2])+dp[i-2]);
        }
        return dp;
    }
}