using System;
using System.Linq;

class Program
{
    static long n = long.Parse(Console.ReadLine());
    static long count = 0L;
    static void Main(string[] args) {
        dfs(0, false, false, false);
        Console.WriteLine(count);
    }
    static void dfs(long x, bool t, bool f, bool s) {
        if(x>n) return;
        if(t&&f&&s) count ++;
        dfs(x*10+3, true, f, s);
        dfs(x*10+5, t, true, s);
        dfs(x*10+7, t, f, true);
    }
}