using System;

class Program
{
  /// <summary>
  ///   0文字目を大文字、1~n文字を小文字に変える・
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    char[] s = Console.ReadLine().ToCharArray();
    for (int i = 0; i < s.Length; i ++)
    {
      if (i == 0) s[0] = char.ToUpper(s[0]);
      else  s[i] = char.ToLower(s[i]);
    }
    Console.WriteLine(s);
  }
}
