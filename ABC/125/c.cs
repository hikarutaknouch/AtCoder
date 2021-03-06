using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        List<int> a = Console.ReadLine().Split().Select(int.Parse).ToList();
        Console.WriteLine(solve(n, a));
    }
    static int solve(int n, List<int> a) {
        int[] lgcd = new int[n-1];
        lgcd[0] = a[0];
        for(int i = 1; i < n-1; i ++) {
            lgcd[i] = Gcd(a[i],lgcd[i-1]);
        }
        a.Reverse();
        int[] rgcd = new int[n-1];
        rgcd[0] = a[0];
        for(int i = 1; i < n-1; i ++) {
            rgcd[i] = Gcd(a[i],rgcd[i-1]);
        }
        a.Reverse();
        int[] ans = new int[n];
        ans[0] = rgcd[n-2];
        ans[n-1] = lgcd[n-2];
        for(int i = 1; i < n-1; i ++) {
            ans[i] = Gcd(lgcd[i-1], rgcd[n-2-i]);
        }
        return ans.Max();
    }
    static int Gcd(int a, int b) {
        if (a < b) return Gcd(b, a);
        while (b != 0) {
            var tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
}