using System;
using System.Collections.Generic;
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
        for (int i = 0; i < n; i ++) list[i] = 0;
        for (int i = 0; i < n; i ++) list[a[i]-1] ++;
        Array.Sort(list);
        int count = 0;
        while(true) {
            if (list.Count(x => x != 0) <= k) break;
            int index = n - list.Count(x => x == 0) - 1;
            list[index] --;
            count ++;
        }
        return count;
    }
}