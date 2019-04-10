using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        int[] l = new int[n];
        for(int i = 0; i < n; i ++) {
            char[] X = s.Substring(0, i).ToCharArray();
            char[] Y = s.Substring(i+1).ToCharArray();
            List<char> x = new List<char>(X.Distinct());
            List<char> y = new List<char>(Y.Distinct());
            for(int j = 0; j < x.Count(); j ++) {
                if(y.Contains(x[j])) l[i] ++;
            }
        }
        Console.WriteLine(l.Max());
    }
}