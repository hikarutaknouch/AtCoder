using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = s[0];
        int m = s[1];
        int[][] ab = new int[n][];
        for (int i = 0; i < n; i ++) {
            ab[i]  = Console.ReadLine().Split().Select(int.Parse).ToArray();
        }
        Array.Sort(ab, (a, b) => a[0] - b[0]);
        long sum = 0;
        for (int i = 0; i < n; i ++) {
            sum += (long)ab[i][0] * (long)ab[i][1];
            m -= ab[i][1];
            if (m<0) {
                while (m<0) {
                    sum -= ab[i][0];
                    m ++;
                }
            }
            if (m == 0) break;
        }
        Console.WriteLine(sum);
    }
}