using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] nk = Console.ReadLine().Split().Select(int.Parse).ToArray();
        long[] h = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Console.WriteLine(dp(nk[0],nk[1],h)[nk[0]-1]);
    }
    static long[] dp(int n, int k, long[] h) {
        long[] dp = new long[n];
        dp[0] = 0;
        for(int i = 1; i < n; i ++) {
            for(int j = 1; j <= Math.Min(k,i); j ++) {
                if(j==1) dp[i] = Math.Abs(h[i]-h[i-j]) + dp[i-j];
                else dp[i] = Math.Min(dp[i],  Math.Abs(h[i]-h[i-j]) + dp[i-j]);
            }
        }
        return dp;
    }
}