using System;
using System.Linq;

class Program
{
  /// <summary>
  ///   昇順の配列の偶数番目の和を算出する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[] l = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    Array.Sort(l);
    int sum = l.Where((a, i) => i % 2 == 0).Sum();
    Console.WriteLine(sum);
  }
}
