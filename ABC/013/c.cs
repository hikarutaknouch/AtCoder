using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int[] s1 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int[] s2 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = s1[0];//過ごす日数
    int h = s1[1];//はじめの満腹度
    int a = s2[0];//普通の食事: A円の出費をして、満腹度がB増える。
    int b = s2[1];
    int c = s2[2];//質素な食事: C円の出費をして、満腹度がD増える。
    int d = s2[3];
    int e = s2[4];//食事抜き: 出費なしで、満腹度がE減る。
    int judge = 0;
    int ans = 0;
    for (int i = 0; i < n; i ++)
    {
      for (int j = 0; j < n - 1; j ++)
      {
        judge = h + i * b + j * d - (n - (i + j) * e);
        if (judge > 0)
        {
          int ans1 = a * i + b * j;
          if (i == 0 && j == 0) ans = ans1;
          if (ans > ans1) ans = a * i + b * j;
        }
      }
    }
    Console.WriteLine(ans);
  }
}
