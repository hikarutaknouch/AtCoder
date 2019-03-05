using System;
using System.Linq;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    long m = Factorial(n);
    long[,] c = new long[m,n];
    for (int i = 0; i < n; i ++) c[0,i] = int.Parse(Console.ReadLine());
    for (int i = 1; i < m; i ++)
    {
      long[i,] c = ary.OrderBy(i => Guid.NewGuid()).ToArray();
    }
  }
  // 再帰処理で、nの階乗を計算する
  public static long Factorial(int n)
  {
    if (n == 0) return 1L;
    else return n * Factorial(n - 1);
  }
}
