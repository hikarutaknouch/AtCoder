using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
  static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
    int n = s[0];
    int m = s[1];
    int[][] a = new int[n][];
    int[] k = new int[m];
    for (int i = 0; i < m; i ++) k[i] = 0;
    for (int i = 0; i < n; i ++)
    {
      a[i] = Console.ReadLine().Split().Select(int.Parse).ToArray();
      for (int j = 1; j < a[i].Count(); j ++)
      {
        k[a[i][j]-1] ++;
      }
    }
    var result = k.Where(value => value == n).Count();
    Console.WriteLine(result);
  }
}
