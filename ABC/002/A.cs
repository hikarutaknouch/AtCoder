using System;

class Program
{
  /// <summary>
  ///   2つの数字のうち大きい方を出力する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    string[] s = Console.ReadLine().Split(' ');
    int x = int.Parse(s[0]);
    int y = int.Parse(s[1]);
    Console.WriteLine(Math.Max(x,y));
  }
}
