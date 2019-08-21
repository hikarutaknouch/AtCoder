using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] x = new int[n];
        int[] y = new int[n];
        int[] h = new int[n];
        for (int i = 0; i < n; i ++) {
            int[] tmp = Console.ReadLine().Split().Select(int.Parse).ToArray();
            x[i] = tmp[0]; y[i] = tmp[1]; h[i] = tmp[2];
        }
        solve(x,y,h,n);
    }

    static void solve(int[] x, int[] y, int[] h, int n) {
        for(int cx = 0; cx <= 100; ++cx) {
            for(int cy = 0; cy <= 100; ++cy) {
                int hmax = int.MaxValue;
                int high = -1;
                for(int i = 0; i<n; ++i) {
                    var d = Math.Abs(x[i]-cx) + Math.Abs(y[i]-cy);
                    if(h[i]==0) hmax = Math.Min(hmax,d);
                    else {
                        if(high==-1) high = d + h[i];
                        else if(high != d+h[i]) goto end;
                    }
                }
                if(high>hmax || hmax<1) goto end;
                if(high==-1) high = hmax;
                Console.WriteLine("{0} {1} {2}", cx, cy, high);
                return;
                end:;
            }
        }
    }
}