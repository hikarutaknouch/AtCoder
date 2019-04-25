using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        List<int> x = Console.ReadLine().Split().Select(int.Parse).ToList();
        List<int> l = new List<int>(x);
        l.Sort();
        for(int i = 0; i < n; i ++) {
            Console.WriteLine(solve(n,l,x[i]));
        }
    }
    static int solve(int n, List<int> l, int x) {
        int ans = 0;
        if(x <= l[n/2-1]) ans = l[n/2];
        if(x >= l[n/2]) ans = l[n/2-1];
        return ans;
    }
}