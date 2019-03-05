//未正解
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
    string[] s = Console.ReadLine().Split(' ');
    int h = int.Parse(s[0]);
    int w = int.Parse(s[1]);
    int n = int.Parse(Console.ReadLine());
    int[] a = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int[,] c = new int[h,w];
    for (int i = 0; i < )
    {
      c[i] = new int[a[i]];
      for (int j =0; j < a[i]; j ++) c[]
    }
    int[][] d = new int[n][];
    for (int i = 0; i < n; i ++)
    {
      int x = 1;
      c[i] = new int[a[i]];
      for (int j = 0; j < a[i]; j ++)
      {
        d[i][j] += x;
      }
      x ++;
    }
    for (int i = 0; i < h; i ++)
    {
      for (int j = 0; j < w; j ++)
      {
        if (c[i-1,j] == x || c[i,j-1] == x || c[i,j+1] == x || c[i+1,j] == x)
        {
          c[i,j] += d[i][j];
          a[]
        }
      }
    }
  }
}
