using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        string s = Console.ReadLine();
        List<int> l = new List<int>();
        if(s[0]=='0') l.Add(0);
        for(int i = 0; i < nameof; i ++) {
            if(s[i]=='0') l.Add(i);
            if(s[i-1]=='0') s[i] = '1';
        }
        Console.WriteLine(solve(a[0], s, l));
    }
    static int solve(int k, string s, List<int> l) {
        List<int> ans = new List<int>();
        for(int i = 0; i < l.Count()-k+1; i ++) {
            for(int j = i; j < k; j ++) {
            }
        }
        return ans.Max();
    }
}