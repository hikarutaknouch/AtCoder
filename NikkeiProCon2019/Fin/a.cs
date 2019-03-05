using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    long[] a = Console.ReadLine().Split().Select(long.Parse).ToArray();
    long[] s = new long[n + 1];
    s[0] = 0;
    for (int i = 0; i < n; i ++) s[i+1] = s[i] + a[i];
    for (int i = 1; i <= n; i ++) {
      long ans = 0;
      for (int j = 0; j <= n-i; j ++) {
        ans = Math.Max(s[j+i] - s[j], ans);
      }
      Console.WriteLine(ans);
    }
  }
}
