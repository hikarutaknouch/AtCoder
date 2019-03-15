using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        double[] s = Console.ReadLine().Split().Select(double.Parse).ToArray();
        int[] h = Console.ReadLine().Split().Select(x => (int)(s[0] - double.Parse(x)*0.006)).ToArray();
        for (int i = 0; i < n; i ++) {
            h[i] = Math.Abs((int)s[1]-h[i]);
        }
        Console.WriteLine(Array.IndexOf(h, h.Min())+1);
    }
}