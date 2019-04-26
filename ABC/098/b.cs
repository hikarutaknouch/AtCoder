using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        Console.WriteLine(solve(n,s));
    }
    static int solve(int n, string s) {
        int[] ans = new int[n];
        for(int i = 1; i < n; i ++) {
            HashSet<char> x = new HashSet<char>(s.Substring(0,i));
            HashSet<char> y = new HashSet<char>(s.Substring(i));
            foreach(char c in x) {
                if(y.Contains(c)) ans[i] ++;
            }
        }
        return ans.Max();
    }
}