using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] nk = Console.ReadLine().Split().Select(long.Parse).ToArray();
        long n = nk[0];
        long k = nk[1];
        int[][] ab = new int[n][];
        for(int i = 0; i < n; i ++) ab[i] = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(ab, (x,y) => x[0]-y[0]);
        long count = 0;
        long ans = 0;
        for(int i = 0; i < n; i ++) {
            count += ab[i][1];
            if(count >= k) {
                ans = ab[i][0];
                break;
            }
        }
        Console.WriteLine(ans);
    }
}
