using System;
using System.Linq;

class Program
{
    public static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = s[0];
        int k = s[1];
        int[] h = new int[k];
        for (int i = 0; i < n; i ++) {
            int tmp = int.Parse(Console.ReadLine());
            if (i < k) h[i] = tmp;
            else {
                if (h[k-1] - h[0] == 0) break;
                Array.Sort(h);
                int max = tmp - h[k-1];
                int min = h[0] - tmp;
                if (tmp - h[k-1] <= 0 && h[0] - tmp <= 0) {
                    if (max >= min) 
                    {
                        if (h[k-1]-h[0] > h[k-1]-tmp) h[0] = tmp;
                    }
                    else if (max < min) {
                        if (h[k-1]-h[0] > tmp-h[0]) h[k-1] = tmp;
                    }
                    else continue;
                }
                else continue;
            }
        }
        Array.Sort(h);
        Console.WriteLine(h[k-1] - h[0]);
    }
}