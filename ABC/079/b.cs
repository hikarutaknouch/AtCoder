using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        Console.WriteLine(solve(n));
    }
    static long solve(int n) {
        long[] l = new long[n+1];
        l[0] = 2;
        l[1] = 1;
        for(int i = 2; i <= n; i ++) l[i] = l[i-1] + l[i-2];
        return l[n];
    }
}