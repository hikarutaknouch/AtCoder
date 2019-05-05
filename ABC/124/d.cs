using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        string s = Console.ReadLine();
        List<int> l = new List<int>();
        int count = 1;
        if(s.Length==1) l.Add(count);
        for(int i = 1; i < a[0]; i ++) {
            if(s[i-1]==s[i]) count ++;
            else {
                l.Add(count);
                count = 1;
            }
            if(i==a[0]-1) l.Add(count);
        }
        Console.WriteLine(solve(a[1], s, l));
    }
    static int solve(int k, string s, List<int> l) {
        if(s[0]=='0') k = 2*k-1;
        if(s[0]=='1') k = 2*k+1;
        List<int> ans = new List<int>();
        for(int i = 0; i <k; i += 2) {
            ans.Add(l.Where((value, index) => index >= i && index <= i+k).Sum());
        }
        return ans.Max();
    }
}