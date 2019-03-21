using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1], a));
    }
    static int solve(int n, int k, int[] a) {
        int[] list = new int[n];
        for (int i = 0; i < n; i ++) list[a[i]-1] ++;
        Array.Sort(list);
        return list.Where((x,y) => y < n-k).Sum();
    }
}