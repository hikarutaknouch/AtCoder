using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(n,a));
    }
    static int solve(int n, int[] a) {
        int[] l = new int[1000000];
        for(int i = 0; i < n; i ++) {
            l[a[i]] ++;
            l[a[i]+1] ++;
            l[a[i]+2] ++;
        }
        return l.Max();
    }
}