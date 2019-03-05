using System;
using System.Linq;

class Program
{
  static int[] input;
  static int h;
  static int w;
  static string[][] sg;
  public static void Main(string[] args)
  {
    input = Console.ReadLine().Split().Select(int.Parse).ToArray();
    h = input[0];
    w = input[1];
    sg = new string[h][];
    for (int i = 0; i < h; i ++) sg[i] = Console.ReadLine().Split().ToArray();
    Console.WriteLine(Dfs(0,".") ? "Yes" : "No");
  }
  public static bool Dfs(int n, string value) //nは今の行の場所、valueは文字列の値。
  {
    if (n == h) return value == "g";
    for (int i = 0; i < h; i ++)
    {
      for (int j = 0; j < w; j ++) return value == "s";
    }
  }
}
