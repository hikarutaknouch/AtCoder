using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = s[0];
        int m = s[1];
        int c = s[2];
        int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int count = 0;
        for (int i = 0; i < n; i ++) {
            int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int sum = 0;
            for (int j = 0; j < m; j ++) {
                sum += a[j]*b[j];
                if (j == m-1) {
                    if (sum + c > 0) count ++;
                }
            } 
        }
        Console.WriteLine(count);
    }
}