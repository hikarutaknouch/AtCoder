using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
    int ans = (Gcd(a[0],a[1]));
    for (int i = 2; i < n; i ++) ans = Gcd(ans, a[i]);
    Console.WriteLine(ans);
  }
  public static int Gcd(int a, int b) {
    if (a < b) return Gcd(b, a); // 引数を入替えて自分を呼び出す
    while (b != 0) {
      var remainder = a % b;
      a = b;
      b = remainder;
    }
    return a;
  }
}
