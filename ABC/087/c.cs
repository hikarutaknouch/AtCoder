using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] a1 = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] a2 = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] result = new int[n];
        for (int i = 0; i < n; i ++) {
            result[i] = a1.Where((x,y) => y<=i).Sum() + a2.Where((x,y) => y>=i).Sum();
        }
        Console.WriteLine(result.Max());
    }
}