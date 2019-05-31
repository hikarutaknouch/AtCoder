using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] ans = new int[9];
        for(int i = 0; i < n; i++) {
            if(a[i]<400) ans[0] = 1;
            else if(a[i]>=400 && a[i]<800) ans[1] = 1;
            else if(a[i]>=800 && a[i]<1200) ans[2] = 1;
            else if(a[i]>=1200 && a[i]<1600) ans[3] = 1;
            else if(a[i]>=1600 && a[i]<2000) ans[4] = 1;
            else if(a[i]>=2000 && a[i]<2400) ans[5] = 1;
            else if(a[i]>=2400 && a[i]<2800) ans[6] = 1;
            else if(a[i]>=2800 && a[i]<3200) ans[7] = 1;
            else ans[8] ++;
        }
        int min = ans.Where((x,y) => y<8).Sum() + (ans.Where((x,y) => y<8).Sum() > 0 ? 0 : 1);
        int max = ans.Where((x,y) => y<8).Sum() + (ans[8]>0 ? ans[8] : 0);
        Console.WriteLine("{0} {1}", min, max);
    }
}