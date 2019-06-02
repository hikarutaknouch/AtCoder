using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static long mod = 1000000007;
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        Console.WriteLine(solve(s,n));
    }
    static long solve(string s, long n) {
        int[] chr = new int[26];
        long ans = 1L;
        for(int i = 0; i < n; i++) chr[s[i]-97] ++;
        for(int i = 0; i < 26; i ++) {
            ans *= chr[i]+1;
            ans %= mod;
        }
        return (ans+mod-1)%mod;
    }
}