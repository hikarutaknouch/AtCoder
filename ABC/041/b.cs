using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] s = Console.ReadLine().Split().Select(long.Parse).ToArray();
        long ans = ((s[0]*s[1])%1000000007)*s[2]%1000000007;
        Console.WriteLine(ans);
    }
}