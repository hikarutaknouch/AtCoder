using System;

class Program
{
  /// <summary>
  ///   yahoo型文字列 (yahのあとに同じ英小文字が2つ連続した文字列) かどうか判定する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    char[] s = Console.ReadLine().ToCharArray();
    if (s[0].ToString() == "y" && s[1].ToString() == "a" && s[2].ToString() == "h" && s[3].ToString() == s[4].ToString()) Console.WriteLine("YES");
    else Console.WriteLine("NO");
  }
}
