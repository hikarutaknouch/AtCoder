//いつか解く
using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int h = s[0];
        int w = s[1];
        string[] a = new string[h];
        for(int i = 0; i < h; i ++) a[i] = Console.ReadLine();
        Console.WriteLine(solve(h,w,a));
    }
    static int solve(int h, int w, string[] a) {
        int count = 0;
        return count;
    }
}