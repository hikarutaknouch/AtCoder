using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    long[] a = new long[n];
    long[] b = new long[n];
    long[] c = new long[n];
    for (int i = 0; i < n; i ++)
    {
      string[] s = Console.ReadLine().Split(' ');
      a[i] = int.Parse(s[0]);
      b[i] = int.Parse(s[1]);
    }
    for (int i = 0; i < n; i ++)
    {
      c[i] = a[i] + b[i];
    }
    Array.Sort(c);//sortしてからじゃないとreverseは使えない。
    Array.Reverse(c);
    long ans = c.Where((value, index) => index % 2 == 0).Sum() - b.Sum();
    Console.WriteLine(ans);
  }
}
