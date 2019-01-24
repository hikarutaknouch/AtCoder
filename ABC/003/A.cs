using System;

class Program
{
  /// <summary>
  ///   1~xまでの整数が書かれたx面のダイスを振って出た目×1万円が給料。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int sum = 0;
    for (int i = 1; i <= n; i ++)//iで割るので1から始めることに注意。
    {
      sum += 10000 * i;
    }
    Console.WriteLine(sum/n);
  }
}
