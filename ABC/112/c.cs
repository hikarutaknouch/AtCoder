using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int cx;
        int cy;
        int h;
        for (int i = 0; i < n; i ++) {
            int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
            s[2] == Math.Max(h-Math.Abs(s[0]-cx)-Math.Abs(s[1]-cy),0);
        }
    } 
}