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
    int[] x = Console.ReadLine().Split(' ').Select(t => int.Parse(t)).ToArray();
    int n = x[0];
    int m = x[1];
    //n = a + b + c;
    //m = 2*a + 3*b + 4*c;
    //よって代入するとb + 2c = m - 2*nの２次方程式が作れる。
    for (int i = 1; i <= m/3; i ++)
    {
      for (int j = 1; j <= m/4; j ++)
      {
        if (i + 2 * j == m - 2 * n && n - (i + j) >0)
        {
          Console.WriteLine("{0} {1} {2}", n - i - j, i, j);
          goto end;
        }
        if (i == m/3 && j == m/4) Console.WriteLine("-1 -1 -1");
      }
    }
    end: ;
  }
}
