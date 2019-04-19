using System;
using System.Linq;
 
class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static int solve(int d, int n) {
        var ans = 0;
        if(n==100) ans = 101 * Math.Pow(100, d);
        else ans = n * Math.Pow(100,d);
        return ans;
    }
}