using System;

class Program
{
  /// <summary>
  ///   文字ABCDEのどれかが入力されるので、その文字が配列の何番目にあたるかを出力する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    string[] s = new string[] {"A", "B", "C", "D", "E"};
    string x = Console.ReadLine();
    int count = 0;
    for (int i = 0; i < s.Length; i ++)
    {
      count ++;
      if (s[i] == x) break;
    }
    Console.WriteLine(count);
  }
}
