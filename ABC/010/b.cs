using System;
using System.Linq;

class Program
{
  /// <summary>
  ///   配列x[i]のそれぞれの値に対して、
  ///   「2の剰余が1」かつ「3の剰余が0または1」になるように1ずつ減算していった結果、
  ///   何回作業が必要かを算出する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[] x = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int count = 0;
    for (int i = 0; i < n; i ++)
    {
      if (x[i] % 2 == 1 && (x[i] % 3 == 0 || x[i] % 3 == 1)) continue;
      else
      {
        for (int j = 0; j < 6 ; j++)
        {
          x[i] --;
          count ++;
          if (x[i] % 2 == 1 && (x[i] % 3 == 0 || x[i] % 3 == 1)) break;
        }
      }
    }
    Console.WriteLine(count);
  }
}
