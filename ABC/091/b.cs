using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        List<string> s = new List<string>();
        for(int i = 0; i < n; i ++) s.Add(Console.ReadLine());
        int m = int.Parse(Console.ReadLine());
        List<string> t = new List<string>();
        for(int i = 0; i < m; i ++) t.Add(Console.ReadLine());
        Console.WriteLine(solve(s, t));
    }
    static int solve(List<string> s, List<string> t) {
        List<string> l = new List<string>(s.Distinct());
        int[] ans = new int[l.Count()];
        for(int i = 0; i < l.Count(); i ++) {
            ans[i] = s.Count(x => x == l[i]) - t.Count(y => y == l[i]);
            if(ans[i] < 0) ans[i] = 0;
        }
        return ans.Max();
    }
}