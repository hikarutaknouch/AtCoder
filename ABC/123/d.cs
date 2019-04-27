using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        long[] a = Console.ReadLine().Split().Select(long.Parse).ToArray();
        long[] b = Console.ReadLine().Split().Select(long.Parse).ToArray();
        long[] c = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Array.Sort(a);
        Array.Reverse(a);
        Array.Sort(b);
        Array.Reverse(b);
        Array.Sort(c);
        Array.Reverse(c);
        foreach(long i in solve(a,b,c, Math.Min(s[0],3000), Math.Min(s[1], 3000), Math.Min(s[2], 3000), s[3])) {
            Console.WriteLine(i);
        }
    }
    static long[] solve(long[] a, long[] b, long[] c, int x, int y, int z, int k) {
        List<long> l = new List<long>();
        for(int i = 0; i < x; i ++) {
            for(int j = 0; j < y; j ++) {
                l.Add(a[i] + b[j]);
            }
        }
        l.Sort();
        l.Reverse();
        List<long> ans = new List<long>();
        for(int i = 0; i < Math.Min(k,x*y); i ++) {
            for(int j = 0; j < z; j ++) ans.Add(l[i]+c[j]);
        }
        ans.Sort();
        ans.Reverse();
        return ans.Where((s,t) => t < k).ToArray();
    }
}