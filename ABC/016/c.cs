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
    int[][] x = new int[n][];
    for (int i = 0; i < m; i ++) {
      int[] set = Console.ReadLine().Split().Select(int.Parse).ToArray();
      x[set[0]-1] += set[1];
      x[set[1]-1] += set[0];
    }
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < x[i].Length; j ++) {
        Console.WriteLine(x[i][j]);
      }
    }
  }
}
