using System;
using System.Linq;

class Program
{
  /// <summary>
  ///   任意の数値xに対して「x+1 <= y」かつ「k桁目までが0である」最小の数値yを出力する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int x = s[0];
    int k = s[1];
    int a = (int)Math.Pow(10, k);
    int y;
    for (y = a; y <= x; y += a) ;
    Console.WriteLine(y);
  }
}
