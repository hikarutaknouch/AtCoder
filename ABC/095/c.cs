using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] s = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1], s[2], s[3], s[4]));
    }
    static long solve(long a, long b, long c, long x, long y) {
        long ans = 0L;
        long min = Math.Min(a+b,c*2);
        long max = (x<y ? Math.Min(b,c*2) : Math.Min(a,c*2));
        for(long i = 0L; i < Math.Min(x,y); i ++) ans += min;
        for(long i = Math.Min(x,y); i < Math.Max(x,y); i ++) ans += max;
        return ans;
    }
}