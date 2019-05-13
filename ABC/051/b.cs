using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(a[0],a[1]));
    }
    static int solve(int k, int s) {
        int count = 0;
        for(int x = 0; x <= k; x ++) {
            for(int y = 0; y <= k; y ++) {
                int z = s-x-y;
                if(z>=0 && z<=k) count ++;
            }
        }
        return count;
    }
}