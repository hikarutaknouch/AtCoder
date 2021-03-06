using System;
using System.Linq;

class Program
{
  static int[] s;
  static int[][] t;
  static void Main()
  {
    s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int N = s[0];
    int K = s[1];
    t = new int[N][];
    for (int i = 0; i < N; i ++)
    {
      t[i] = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    }
		Console.WriteLine(Dfs(0, 0) ? "Found" : "Nothing");
  }
  static bool Dfs(int n, int i) //n=今の質問数、i=排他的論理和の値
  {
    if(n == s[0]) return i == 0;//質問数が最後になれば0になっているかどうか調べる。
		for (int j = 0; j < s[1]; j ++) {
      if (Dfs(n + 1, i ^ t[n][j])) return true;
    }
    return false;
	}
}
