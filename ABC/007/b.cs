using System;

class Program
{
  /// <summary>
  ///   問題文ばり複雑だけど、入力がaだったら-1。そうじゃなかったらa出せばいいというばりシンプルな問題。
  ///   問題文をちゃんと読まないと...
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    string a = Console.ReadLine();
    if (a == "a") Console.WriteLine("-1");
    else Console.WriteLine("a");
  }
}
