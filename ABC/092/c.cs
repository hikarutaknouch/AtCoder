using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        List<int> a = new List<int>();
        a.Add(0);
        a.AddRange(Console.ReadLine().Split().Select(int.Parse).ToArray());
        a.Add(0);
        List<int> b = new List<int>();
        for (int i = 0; i < n+1; i ++) b.Add(Math.Abs(a[i]-a[i+1]));
        int sum = b.Sum();
        for (int i = 0; i < n; i ++) {
            int result = sum;
            result -= b[i]+b[i+1];
            result += Math.Abs(a[i]-a[i+2]);
            Console.WriteLine(result);
        }
    }
}