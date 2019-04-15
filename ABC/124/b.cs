using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] h = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(n,h));
    }
    static int solve(int n, int[] h) {
        int count = 1;
        for(int i = 1; i < n; i ++) {
            for(int j = 0; j < i; j ++) {
                if(h[i] < h[j]) break;
                if(j==i-1) count ++;
            }
        }
        return count;
    }
}