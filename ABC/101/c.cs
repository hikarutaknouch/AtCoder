//未完
using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1], a));
    }
    static int solve(int n, int k, int[] a) {
        int i = Array.IndexOf(a, 1);
        int ans = 0;
        if(Math.Min(i+1, n-i) < k) {
            ans = (n-1)/(k-1);
            if((n-1)%(k-1) != 0) ans ++;
        }
        else {
            ans = (n-1)/(k-1);
            if((n-i)%(k-1) != 0) ans ++;
            if(i%(k-1) != 0) ans ++;
        }
        return ans;
    }
}