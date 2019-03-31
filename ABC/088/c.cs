using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[][] c = new int[3][];
        c[0] = Console.ReadLine().Split().Select(int.Parse).ToArray();
        c[1] = Console.ReadLine().Split().Select(int.Parse).ToArray();
        c[2] = Console.ReadLine().Split().Select(int.Parse).ToArray();
    }
    static int solve(int[] c) {
        for (int i = 0; i < c.Length; i ++) {
        }
    }
}