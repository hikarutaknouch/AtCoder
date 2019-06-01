using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    //k-1ずつ区間を変更する必要があるので、ans(k-1)+1>=nでなければならない。
    //ans = (n-1)/(k-1)であり、こぼれる区間を拾うため切り上げる。a/bの切り上げは(a-1)/b + 1
    static int solve(int n, int k) {
        int ans = (n-2+k-1)/(k-1);
        return ans;
    }
}