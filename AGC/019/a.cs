using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] p = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Reverse(p);
        double n = double.Parse(Console.ReadLine());
        Console.WriteLine(solve(p, n));
    }
    static long solve(int[] p, double n) {
        long result = 0;
        double[] l = new double[] {2, 1, 0.5, 0.25};
        for (int i = 0; i < 3; i ++) {
        }
        return result;
    }
}